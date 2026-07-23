/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x1402470B4
 * Callers:
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockVa @ 0x14025DAA0 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePfnProtection @ 0x140319020 (MiUpdatePfnProtection.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 LeafVa; // rax
  int v20; // r13d
  __int64 v21; // rbx
  char v22; // r15
  char v24; // r12
  _KPROCESS *Process; // rdi
  unsigned __int64 *v26; // rdi
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  BOOL v30; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h]
  _DWORD *v33; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h]
  _QWORD v36[24]; // [rsp+50h] [rbp-B0h] BYREF

  v32 = a1;
  v33 = a6;
  memset(v36, 0, 0xB8uLL);
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
      v30 = v13;
      if ( v12 != 16 )
        v14 = 1LL;
      v34 = v14;
      v16 = MiVadPageIndices[v11];
      if ( v16 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v12, 0LL);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v16, a2);
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v35 = v17;
      v33 = (_DWORD *)(48 * v17 - 0x58000000000LL);
      v18 = 0LL;
      while ( 1 )
      {
        if ( v15 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2);
          MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, LeafVa, v32);
          v30 = 0;
        }
        TransitionPte = MiMakeTransitionPte(v17 + v18, 24LL);
        v20 = 0;
        v21 = TransitionPte;
        v22 = TransitionPte;
        if ( !(unsigned int)MiPteInShadowRange(a2) )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v20 = 1;
          if ( !HIBYTE(word_140C4E048) && (v22 & 1) != 0 )
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
        v15 = v30;
        a2 += 8LL;
        v17 = v35;
        if ( ++v18 >= v34 )
        {
          MiUpdatePfnProtection(v32, v33, 24LL);
          return 1LL;
        }
      }
    }
  }
  v24 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v36[2] = 0LL;
  v26 = &Process[1].ActiveProcessorsPadding[6];
  v36[3] = 0LL;
  LODWORD(v36[0]) = 1;
  WORD2(v36[0]) = 4;
  LODWORD(v36[1]) = 20;
  v27 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 > a3 )
    return 0LL;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
    if ( (TransitionPte & 1) == 0 || (*(_DWORD *)(v32 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2) )
      break;
    v28 = MI_READ_PTE_LOCK_FREE(&TransitionPte);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      break;
    if ( (MiGetWsleContents(v29, v27) & 0xF) == 8 )
    {
      v24 = 1;
      *v33 = 1;
LABEL_35:
      if ( HIDWORD(v36[1]) )
        MiFreeWsleList(v26, v36, 0LL);
      if ( v24 == 1 )
      {
        MiUnlockVa(v26, v27);
        v24 = 0;
      }
      goto LABEL_39;
    }
    MiInsertTbFlushEntry(v36, v27, 1LL, 0LL);
    if ( HIDWORD(v36[1]) == LODWORD(v36[1]) )
      goto LABEL_35;
LABEL_39:
    v27 += 4096LL;
    a2 += 8LL;
  }
  while ( a2 <= a3 );
  if ( HIDWORD(v36[1]) )
    MiFreeWsleList(v26, v36, 0LL);
  return 0LL;
}
