/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140356C84
 * Callers:
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePfnProtection @ 0x140255620 (MiUpdatePfnProtection.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVa @ 0x1403479AC (MiUnlockVa.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  BOOL v15; // edi
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // r12
  unsigned __int64 LeafVa; // rax
  int v20; // r13d
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // r8
  char v25; // r12
  _KPROCESS *Process; // rdi
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  BOOL v31; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D0h]
  _DWORD *v34; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h]
  _QWORD v37[24]; // [rsp+50h] [rbp-B0h] BYREF

  v33 = a1;
  v34 = a6;
  memset(v37, 0, 0xB8uLL);
  v10 = *(_DWORD *)(a1 + 48);
  if ( (v10 & 0x500000) == 0x500000 )
  {
    v11 = (v10 >> 18) & 3;
    v12 = MiVadPageSizes[v11];
    if ( v12 != 1 )
    {
      v13 = (v10 & 0x300000) == 3145728;
      v14 = 16LL;
      v15 = v13;
      v31 = v13;
      if ( v12 != 16 )
        v14 = 1LL;
      v35 = v14;
      v16 = MiVadPageIndices[v11];
      if ( v16 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v12, 0);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v16, a2);
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v36 = v17;
      v34 = (_DWORD *)(48 * v17 - 0x58000000000LL);
      v18 = 0LL;
      while ( 1 )
      {
        if ( v15 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2);
          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v33);
          v31 = 0;
        }
        TransitionPte = MiMakeTransitionPte(v17 + v18, 24);
        v20 = 0;
        v21 = TransitionPte;
        v22 = TransitionPte;
        if ( !MiPteInShadowRange(a2) )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4DE08) && (v22 & 1) != 0 )
            goto LABEL_20;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
               && (v22 & 1) != 0 )
        {
          v21 = TransitionPte;
LABEL_20:
          v21 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *(_QWORD *)a2 = v21;
        if ( v20 )
          MiWritePteShadow(a2, v21, v23);
        v15 = v31;
        a2 += 8LL;
        v17 = v36;
        if ( ++v18 >= v35 )
        {
          MiUpdatePfnProtection(v33, (__int64)v34, 0x18u);
          return 1LL;
        }
      }
    }
  }
  v25 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v37[2] = 0LL;
  v27 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v37[3] = 0LL;
  LODWORD(v37[0]) = 1;
  WORD2(v37[0]) = 4;
  LODWORD(v37[1]) = 20;
  v28 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 > a3 )
    return 0LL;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
    if ( (TransitionPte & 1) == 0 || (*(_DWORD *)(v33 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2) )
      break;
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      break;
    if ( (MiGetWsleContents(v30, v28) & 0xF) == 8 )
    {
      v25 = 1;
      *v34 = 1;
LABEL_35:
      if ( HIDWORD(v37[1]) )
        MiFreeWsleList(v27, (__int64)v37, 0);
      if ( v25 == 1 )
      {
        MiUnlockVa(v27, v28);
        v25 = 0;
      }
      goto LABEL_39;
    }
    MiInsertTbFlushEntry((__int64)v37, v28, 1LL, 0);
    if ( HIDWORD(v37[1]) == LODWORD(v37[1]) )
      goto LABEL_35;
LABEL_39:
    v28 += 4096LL;
    a2 += 8LL;
  }
  while ( a2 <= a3 );
  if ( HIDWORD(v37[1]) )
    MiFreeWsleList(v27, (__int64)v37, 0);
  return 0LL;
}
