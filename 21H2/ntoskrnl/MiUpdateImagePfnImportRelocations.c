/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x1402DAEB0
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiDoesPageRequireRetpolineImportFixups @ 0x1402DB07C (MiDoesPageRequireRetpolineImportFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x1402DB0B8 (MiUpdateRetpolineImportFixups.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v8; // r15
  int DoesPageRequireRetpolineImportFixups; // eax
  __int64 v10; // r9
  struct _KTHREAD *v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v17; // r14d
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 *v20; // r14
  bool v21; // zf
  unsigned __int64 v23; // rbx
  int v24; // r14d

  v4 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(v4 + 32);
  DoesPageRequireRetpolineImportFixups = MiDoesPageRequireRetpolineImportFixups(v4, a3);
  v11 = 0LL;
  if ( !DoesPageRequireRetpolineImportFixups )
    return 1LL;
  v12 = 48 * v10 - 0x220000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v14 = 0LL;
    v13 = 0LL;
    goto LABEL_9;
  }
  v13 = a2;
  v14 = MiReservePtes(&qword_140C534C0, 1LL);
  if ( v14 )
  {
LABEL_6:
    a2 = v14 << 25 >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v12);
    ValidPte = MiMakeValidPte(v14, a4, ProtectionPfnCompatible | 0xA0000000);
    v17 = 0;
    v18 = MiPteInShadowRange(v14);
    v11 = 0LL;
    if ( !v18 )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) == (_BYTE)v11 )
      {
LABEL_30:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_30;
    }
LABEL_7:
    *(_QWORD *)v14 = ValidPte;
    if ( v17 )
    {
      MiWritePteShadow(v14, ValidPte);
      v11 = 0LL;
    }
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    v20 = (volatile signed __int64 *)(v8 + 24);
    if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    {
      CurrentThread = v11;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v8 + 24, 0LL);
    }
    MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v8 + 88), a3);
    if ( CurrentThread )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v14 )
      return 0LL;
    if ( v14 != v13 )
    {
      MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v14, 1u);
      return 0LL;
    }
    v23 = ZeroPte;
    v24 = 0;
    if ( (unsigned int)MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_40;
LABEL_38:
        if ( (ZeroPte & 1) != 0 )
          v23 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_40;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_38;
    }
LABEL_40:
    *(_QWORD *)v14 = v23;
    if ( v24 )
      MiWritePteShadow(v14, v23);
    KeFlushSingleTb(a2, 0LL, 1LL);
    return 0LL;
  }
  if ( a2 )
  {
    v14 = a2;
    goto LABEL_6;
  }
  return 3221225626LL;
}
