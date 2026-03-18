/*
 * XREFs of MiMakeFaultPfnActive @ 0x140339240
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiMakeTransitionPteValid @ 0x140234EB4 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeProtoReadOnly @ 0x140595FBC (MiMakeProtoReadOnly.c)
 */

void __fastcall MiMakeFaultPfnActive(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  char v5; // al
  _DWORD *v6; // rsi
  __int64 TransitionPteValid; // rbx
  unsigned __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v2 = *a1;
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a2) || (unsigned int)MiChargeForLockedPage(a2, 3) )
    ++*(_WORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a2 + 34) = v5 & 0xF8 | 6;
  MiRemoveLockedPageChargeAndDecRef(a2);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiIsPteInStore(v10, *(_QWORD *)(a2 + 16)) )
    {
      v11 = MiCaptureDirtyBitToPfn(a2);
      if ( v11 )
        MiReleasePageFileInfo(v10, v11, 0);
    }
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
  {
    v6 = *(_DWORD **)(v2 + 232);
    if ( ((*v6 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v6, a2);
    TransitionPteValid = MiMakeTransitionPteValid((__int64)v6);
    v8 = TransitionPteValid;
    if ( MiPteInShadowRange((unsigned __int64)v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (TransitionPteValid & 1) != 0 )
          v8 = TransitionPteValid | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v8;
        MiWritePteShadow((__int64)v6, v8);
        goto LABEL_9;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (TransitionPteValid & 1) != 0 )
      {
        v8 = TransitionPteValid | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v8;
LABEL_9:
    v9 = (__int64 *)a1[6];
    if ( v9 )
      *v9 = TransitionPteValid;
  }
}
