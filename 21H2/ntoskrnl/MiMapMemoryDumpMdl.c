/*
 * XREFs of MiMapMemoryDumpMdl @ 0x14038C4CC
 * Callers:
 *     MmMapMemoryDumpMdlEx @ 0x14038C0F0 (MmMapMemoryDumpMdlEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x14038C498 (MmMapMemoryDumpMdlEx2.c)
 *     MmMapMemoryDumpMdl @ 0x140593650 (MmMapMemoryDumpMdl.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rdi
  BOOL v11; // edi
  unsigned __int64 *v12; // r14
  __int64 v13; // rdx
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // r9
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rdi
  int v21; // ebp
  bool v22; // zf
  _QWORD v26[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v26, 0, 0xB8uLL);
  v6 = *(unsigned int *)(a3 + 44);
  v7 = ((unsigned int)(v6 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v6 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  LODWORD(v26[1]) = 20;
  *(_QWORD *)(a3 + 24) = a1 + v6;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  BYTE4(v26[0]) = 3;
  v26[3] = 0LL;
  v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (v10 & 1) != 0 )
      MiInsertTbFlushEntry((__int64)v26, v8, 1LL, 0);
    if ( v10 )
    {
      v11 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        v11 = MiPteHasShadow() != 0;
      *v9 = 0LL;
      if ( v11 )
        MiWritePteShadow((__int64)v9, 0LL);
    }
    ++v9;
    v8 += 4096LL;
    --v7;
  }
  while ( v7 );
  v12 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( HIDWORD(v26[1]) )
    MiFlushTbList((__int64)v26);
  v13 = *(unsigned int *)(a3 + 44);
  v14 = v13 + *(_DWORD *)(a3 + 40);
  LODWORD(CurrentThread) = (v14 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v13;
  v16 = (v14 >> 12) + (unsigned int)CurrentThread;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
    return (char)CurrentThread;
  }
  v17 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v18 = *(unsigned __int64 *)((char *)v12 + v17 + 48);
    ProtectionPfnCompatible = 4;
    if ( (a4 & 1) == 0 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v18 - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v12, v18, ProtectionPfnCompatible | 0xA0000000);
    v21 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v12);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v21 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_17;
        v22 = (ValidPte & 1) == 0;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v22 = (ValidPte & 1) == 0;
      }
      if ( !v22 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_17:
    *v12 = ValidPte;
    if ( v21 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v12, ValidPte);
    ++v12;
    --v16;
  }
  while ( v16 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  return (char)CurrentThread;
}
