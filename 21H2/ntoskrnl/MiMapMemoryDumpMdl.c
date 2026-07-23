/*
 * XREFs of MiMapMemoryDumpMdl @ 0x140383BB4
 * Callers:
 *     MmMapMemoryDumpMdlEx @ 0x140383730 (MmMapMemoryDumpMdlEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140383B80 (MmMapMemoryDumpMdlEx2.c)
 *     MmMapMemoryDumpMdl @ 0x140538D90 (MmMapMemoryDumpMdl.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  _KPROCESS *v10; // rdx
  __int64 v11; // rdi
  BOOL v12; // edi
  unsigned __int64 *v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r9
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rdi
  int v22; // ebp
  bool v23; // zf
  _QWORD v27[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v27, 0, 0xB8uLL);
  v6 = *(unsigned int *)(a3 + 44);
  v7 = ((unsigned int)(v6 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v6 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  LODWORD(v27[1]) = 20;
  *(_QWORD *)(a3 + 24) = a1 + v6;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  BYTE4(v27[0]) = 3;
  v27[3] = 0LL;
  v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (v11 & 1) != 0 )
      MiInsertTbFlushEntry((__int64)v27, v8, 1LL, 0);
    if ( v11 )
    {
      v12 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        v12 = MiPteHasShadow() != 0;
      *v9 = 0LL;
      if ( v12 )
        MiWritePteShadow((__int64)v9, 0LL);
    }
    ++v9;
    v8 += 4096LL;
    --v7;
  }
  while ( v7 );
  v13 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( HIDWORD(v27[1]) )
    MiFlushTbList((__int64)v27, v10);
  v14 = *(unsigned int *)(a3 + 44);
  v15 = v14 + *(_DWORD *)(a3 + 40);
  LODWORD(CurrentThread) = (v15 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v14;
  v17 = (v15 >> 12) + (unsigned int)CurrentThread;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
    return (char)CurrentThread;
  }
  v18 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v19 = *(unsigned __int64 *)((char *)v13 + v18 + 48);
    ProtectionPfnCompatible = 4;
    if ( (a4 & 1) == 0 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v19 - 0x58000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v13, v19, ProtectionPfnCompatible | 0xA0000000);
    v22 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v13);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v22 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_17;
        v23 = (ValidPte & 1) == 0;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v23 = (ValidPte & 1) == 0;
      }
      if ( !v23 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_17:
    *v13 = ValidPte;
    if ( v22 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v13, ValidPte);
    ++v13;
    --v17;
  }
  while ( v17 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  return (char)CurrentThread;
}
