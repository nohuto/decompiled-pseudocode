/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x14024D7F4
 * Callers:
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiUnlockVa @ 0x1402E5920 (MiUnlockVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUpdatePfnProtection @ 0x1405A6A34 (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v10; // rcx
  char v11; // r15
  unsigned __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ecx
  BOOL v18; // r14d
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  unsigned __int64 LeafVa; // rax
  __int64 v23; // rbx
  int v24; // r12d
  char v25; // r14
  bool v26; // zf
  BOOL v27; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D0h]
  _DWORD *v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[24]; // [rsp+50h] [rbp-B0h] BYREF

  v29 = a1;
  v30 = a6;
  memset(v32, 0, 0xB8uLL);
  v10 = *(unsigned int *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) != 0xA00000 || (v15 = (v10 >> 19) & 3, v16 = MiVadPageSizes[v15], v16 == 1) )
  {
    v11 = 0;
    v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    LODWORD(v32[0]) = 1;
    WORD2(v32[0]) = 4;
    v32[2] = 0LL;
    LODWORD(v32[1]) = 20;
    v32[3] = 0LL;
    v13 = (__int64)(a2 << 25) >> 16;
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
      a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( a2 > a3 )
      return 0LL;
    while ( 1 )
    {
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      if ( (TransitionPte & 1) == 0
        || (*(_DWORD *)(v29 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2)
        || *(__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x21FFFFFFFFD8LL) < 0 )
      {
LABEL_11:
        if ( HIDWORD(v32[1]) )
          MiFreeWsleList(v12, v32, 0LL);
        return 0LL;
      }
      if ( (MiGetWsleContents(0xFFFFDE0000000028uLL, v13) & 0xF) == 8 )
        break;
      MiInsertTbFlushEntry(v32, v13, 1LL, 0LL);
      if ( HIDWORD(v32[1]) == LODWORD(v32[1]) )
        goto LABEL_39;
LABEL_10:
      v13 += 4096LL;
      a2 += 8LL;
      if ( a2 > a3 )
        goto LABEL_11;
    }
    v11 = 1;
    *v30 = 1;
LABEL_39:
    if ( HIDWORD(v32[1]) )
      MiFreeWsleList(v12, v32, 0LL);
    if ( v11 )
    {
      MiUnlockVa(v12, v13);
      v11 = 0;
    }
    goto LABEL_10;
  }
  v26 = (v10 & 0x600000) == 6291456;
  v17 = MiVadPageIndices[v15];
  v18 = v26;
  v19 = 16LL;
  v27 = v26;
  if ( v16 != 16 )
    v19 = 1LL;
  if ( v17 > 1 )
    MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v16, 0LL);
  else
    MiInsertLargeTbFlushEntry(a4, 2 - v17, a2);
  TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
  v20 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFFLL;
  v31 = v20;
  v21 = 0LL;
  v30 = (_DWORD *)(48 * v20 - 0x220000000000LL);
  do
  {
    if ( v18 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(a2);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v29);
      v27 = 0;
    }
    TransitionPte = MiMakeTransitionPte(v20 + v21, 24LL);
    v23 = TransitionPte;
    v24 = 0;
    v25 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_32;
        v26 = (v25 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_32;
        v26 = (v25 & 1) == 0;
      }
      if ( !v26 )
        v23 |= 0x8000000000000000uLL;
    }
LABEL_32:
    *(_QWORD *)a2 = v23;
    if ( v24 )
      MiWritePteShadow(a2, v23);
    v18 = v27;
    a2 += 8LL;
    v20 = v31;
    ++v21;
  }
  while ( v21 < v19 );
  MiUpdatePfnProtection(v29, v30, 24LL);
  return 1LL;
}
