/*
 * XREFs of MiRelocateImagePfn @ 0x1407BF070
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiPerformFixups @ 0x1407BF2E0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 *v11; // rdi
  __int64 v12; // r8
  struct _KTHREAD *v13; // r10
  int v14; // ecx
  __int64 v15; // rax
  __int64 v17; // rbx
  ULONG_PTR v18; // r13
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // rbx
  ULONG_PTR v25; // [rsp+70h] [rbp+8h]

  v11 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  v12 = *v11;
  if ( (a7 & 1) == 0 || a3 >= *((_DWORD *)v11 + 14) )
    return 1LL;
  v13 = 0LL;
  v14 = 0;
  while ( *(struct _KTHREAD **)(v12 + 8LL * (v14 + a3)) == v13 )
  {
    v15 = v11[11];
    if ( v15 )
    {
      if ( *(struct _KTHREAD **)(v15 + 8LL * (v14 + a3) + 56) != v13 )
        break;
    }
    if ( (a7 & 2) != 0 && (unsigned int)HalSystemVectorDispatchEntry() )
      break;
    if ( ++v14 )
      return 1LL;
  }
  v17 = 48 * a4 - 0x220000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v18 = (ULONG_PTR)v13;
    v25 = (ULONG_PTR)v13;
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)v11[1] == CurrentThread )
    {
      CurrentThread = v13;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 3), 0LL);
      v13 = 0LL;
    }
    v22 = v11[5];
    if ( (a7 & 4) == 0 )
      v22 = (__int64)v13;
    MiPerformFixups(a2, BugCheckParameter2, v22, a7);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v11 + 3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11 + 3);
      KeAbPostRelease((ULONG_PTR)(v11 + 3));
      v23 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v23
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v18 )
      return 0LL;
    if ( v18 != v25 )
    {
      MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v18, 1u);
      return 0LL;
    }
    v24 = ZeroPte;
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v24 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v18 = v24;
        MiWritePteShadow(v18, v24);
        goto LABEL_56;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v24 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = v24;
LABEL_56:
    KeFlushSingleTb(a2, 0, 1u);
    return 0LL;
  }
  v25 = a2;
  v18 = MiReservePtes((__int64)&qword_140C534C0, 1u);
  if ( v18 )
  {
LABEL_14:
    a2 = (__int64)(v18 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v17);
    ValidPte = MiMakeValidPte(v18, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        *(_QWORD *)v18 = ValidPte;
        MiWritePteShadow(v18, ValidPte);
        goto LABEL_16;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v18 = ValidPte;
LABEL_16:
    v13 = 0LL;
    goto LABEL_18;
  }
  if ( a2 )
  {
    v18 = a2;
    goto LABEL_14;
  }
  return 3221225626LL;
}
