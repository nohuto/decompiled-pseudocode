/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140319094
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePfnProtection @ 0x1402AE650 (MiUpdatePfnProtection.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVa @ 0x14030B15C (MiUnlockVa.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v23; // r9
  char v25; // r12
  _KPROCESS *Process; // rdi
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  BOOL v33; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  _DWORD *v36; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h]
  _QWORD v39[24]; // [rsp+50h] [rbp-B0h] BYREF

  v35 = a1;
  v36 = a6;
  memset(v39, 0, 0xB8uLL);
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
      v33 = v13;
      if ( v12 != 16 )
        v14 = 1LL;
      v37 = v14;
      v16 = MiVadPageIndices[v11];
      if ( v16 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v12, 0);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v16, a2);
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v38 = v17;
      v36 = (_DWORD *)(48 * v17 - 0x58000000000LL);
      v18 = 0LL;
      while ( 1 )
      {
        if ( v15 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2);
          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v35);
          v33 = 0;
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
          if ( !HIBYTE(word_140C4DF48) && (v22 & 1) != 0 )
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
          MiWritePteShadow(a2, v21);
        v15 = v33;
        a2 += 8LL;
        v17 = v38;
        if ( ++v18 >= v37 )
        {
          MiUpdatePfnProtection(v35, (__int64)v36, 24LL, v23);
          return 1LL;
        }
      }
    }
  }
  v25 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v39[2] = 0LL;
  v27 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v39[3] = 0LL;
  LODWORD(v39[0]) = 1;
  WORD2(v39[0]) = 4;
  LODWORD(v39[1]) = 20;
  v28 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 > a3 )
    return 0LL;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
    if ( (TransitionPte & 1) == 0 || (*(_DWORD *)(v35 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2) )
      break;
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v30, v31) )
      break;
    if ( (MiGetWsleContents(v32, v28) & 0xF) == 8 )
    {
      v25 = 1;
      *v36 = 1;
LABEL_35:
      if ( HIDWORD(v39[1]) )
        MiFreeWsleList(v27, (__int64)v39, 0);
      if ( v25 == 1 )
      {
        MiUnlockVa(v27, v28);
        v25 = 0;
      }
      goto LABEL_39;
    }
    MiInsertTbFlushEntry((__int64)v39, v28, 1LL, 0);
    if ( HIDWORD(v39[1]) == LODWORD(v39[1]) )
      goto LABEL_35;
LABEL_39:
    v28 += 4096LL;
    a2 += 8LL;
  }
  while ( a2 <= a3 );
  if ( HIDWORD(v39[1]) )
    MiFreeWsleList(v27, (__int64)v39, 0);
  return 0LL;
}
