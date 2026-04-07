/*
 * XREFs of ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180031684
 * Callers:
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800081B4 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002E93C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180036018 (-End@CAnimationClock@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029550 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002E93C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x180031788 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099628 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800BA6A4 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800BA7DC (McTemplateU0ji_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationClock::_SetTime(__int64 a1, int a2, const union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v6; // r8
  int Frame; // ebx
  __int64 v8; // rcx
  CAnimationClock *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  union _LARGE_INTEGER v15; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (__int64)abs64(CAnimationClock::s_GetElapsedMillsecondsFromTime(a3)) > 5000 )
    return (unsigned int)-2147024809;
  if ( !a2 )
  {
    if ( ((*(_DWORD *)(a1 + 80) - 1) & 0xFFFFFFFD) == 0 )
    {
      v15.QuadPart = 0LL;
      v6 = &v15;
      if ( a3 )
        v6 = (union _LARGE_INTEGER *)(a1 + 88);
      Frame = CAnimationClock::_SetTimeToNextFrame((CAnimationClock *)a1, a3, v6);
      if ( Frame >= 0 )
      {
        Frame = CAnimationClock::_SetState(a1, 2u);
        if ( !a3 )
          *(union _LARGE_INTEGER *)(a1 + 88) = v15;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0ji_EtwEventWriteTransfer(v8, &UdwmAnimationClock_Start, a1 + 120, *(_QWORD *)(a1 + 88));
      }
      return (unsigned int)Frame;
    }
    return (unsigned int)-2147019873;
  }
  if ( a2 != 1 )
    return (unsigned int)-2147024809;
  if ( (unsigned int)(*(_DWORD *)(a1 + 80) - 1) > 3 )
    return (unsigned int)-2147019873;
  v10 = *(CAnimationClock **)(a1 + 112);
  if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_15:
    Frame = CAnimationClock::_SetTimeToNextFrame(v10, a3, (union _LARGE_INTEGER *)(a1 + 96));
    if ( Frame >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji_EtwEventWriteTransfer(v11, &UdwmAnimationClock_Cancel, a1 + 120, *(_QWORD *)(a1 + 96));
      return (unsigned int)CAnimationClock::_SetState(a1, 5u);
    }
    return (unsigned int)Frame;
  }
  v12 = NtDCompositionCommitSynchronizationObject(v10);
  if ( v12 >= 0 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(a1 + 112),
      0LL);
    goto LABEL_15;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1E1,
           (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
           (const char *)(unsigned int)v12,
           v13);
}
