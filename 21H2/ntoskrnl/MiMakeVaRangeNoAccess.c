/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x1402C8854
 * Callers:
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockVa @ 0x14026FB00 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiUpdatePfnProtection @ 0x14030E2D0 (MiUpdatePfnProtection.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 LeafVa; // rax
  int v23; // r13d
  __int64 v24; // rbx
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  char v29; // r12
  _KPROCESS *Process; // rdi
  __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  BOOL v35; // [rsp+20h] [rbp-E0h]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D0h]
  _DWORD *v38; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h]
  _QWORD v41[24]; // [rsp+50h] [rbp-B0h] BYREF

  v37 = a1;
  v38 = a6;
  memset(v41, 0, 0xB8uLL);
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
      v35 = v13;
      if ( v12 != 16 )
        v14 = 1LL;
      v39 = v14;
      v16 = MiVadPageIndices[v11];
      if ( v16 > 1 )
        MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v12, 0LL);
      else
        MiInsertLargeTbFlushEntry(a4, 2 - v16, a2);
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v40 = v17;
      v38 = (_DWORD *)(48 * v17 - 0x58000000000LL);
      v18 = 0LL;
      while ( 1 )
      {
        if ( v15 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(a2, v19, v20, v21);
          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v37);
          v35 = 0;
        }
        TransitionPte = MiMakeTransitionPte(v17 + v18, 24LL);
        v23 = 0;
        v24 = TransitionPte;
        v25 = TransitionPte;
        if ( !(unsigned int)MiPteInShadowRange(a2, v26) )
          goto LABEL_21;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v23 = 1;
          if ( !HIBYTE(word_140C4E008) && (v25 & 1) != 0 )
            goto LABEL_20;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
               && (v25 & 1) != 0 )
        {
          v24 = TransitionPte;
LABEL_20:
          v24 |= 0x8000000000000000uLL;
        }
LABEL_21:
        *(_QWORD *)a2 = v24;
        if ( v23 )
          MiWritePteShadow(a2, v24, v27);
        v15 = v35;
        a2 += 8LL;
        v17 = v40;
        if ( ++v18 >= v39 )
        {
          MiUpdatePfnProtection(v37, v38, 24LL);
          return 1LL;
        }
      }
    }
  }
  v29 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v41[2] = 0LL;
  v31 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v41[3] = 0LL;
  LODWORD(v41[0]) = 1;
  WORD2(v41[0]) = 4;
  LODWORD(v41[1]) = 20;
  v32 = (__int64)(a2 << 25) >> 16;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
    a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( a2 > a3 )
    return 0LL;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
    if ( (TransitionPte & 1) == 0 || (*(_DWORD *)(v37 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2) )
      break;
    v33 = MI_READ_PTE_LOCK_FREE(&TransitionPte);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v33 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      break;
    if ( (MiGetWsleContents(v34, v32) & 0xF) == 8 )
    {
      v29 = 1;
      *v38 = 1;
LABEL_35:
      if ( HIDWORD(v41[1]) )
        MiFreeWsleList(v31, v41, 0LL);
      if ( v29 == 1 )
      {
        MiUnlockVa(v31, v32);
        v29 = 0;
      }
      goto LABEL_39;
    }
    MiInsertTbFlushEntry(v41, v32, 1LL, 0LL);
    if ( HIDWORD(v41[1]) == LODWORD(v41[1]) )
      goto LABEL_35;
LABEL_39:
    v32 += 4096LL;
    a2 += 8LL;
  }
  while ( a2 <= a3 );
  if ( HIDWORD(v41[1]) )
    MiFreeWsleList(v31, v41, 0LL);
  return 0LL;
}
