/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C0053808
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C004A560 (NtUserSwitchDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     FadeDesktop @ 0x1C00523A0 (FadeDesktop.c)
 *     PrepareGammaRampData @ 0x1C0053570 (PrepareGammaRampData.c)
 *     RestoreGammaRamp @ 0x1C0053780 (RestoreGammaRamp.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // esi
  unsigned int *v6; // rbx
  unsigned int v9; // r14d
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 ThreadWin32Thread; // rax
  int v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  unsigned int v24; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v24 = 0;
  v6 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v22 = 0LL;
  v9 = 0;
  v10 = 0;
  v21 = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1) == 0
     || (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v14 = PrepareGammaRampData(&v24, &v20, &v19);
    v6 = v20;
    if ( v14 >= 0 )
      PushW32ThreadLock((__int64)v20, &v21, (__int64)RestoreGammaRamp);
    if ( v19 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v15 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v16);
      v9 = v24;
      FadeDesktop(v24, v6, a4 >> 1, 0);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v24;
    }
  }
  v12 = xxxSwitchDesktop(a1, a2, 0, a5);
  if ( v5 )
  {
    v17 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v17 = gdwExtraInstrumentations;
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v17, v11, gdwInAtomicOperation);
    FadeDesktop(v9, v6, a4 >> 1, 1);
    EnterCrit(0LL, 1LL);
  }
  if ( v6 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v21;
    RestoreGammaRamp(v20);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v12;
}
