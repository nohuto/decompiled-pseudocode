/*
 * XREFs of HalpSetSystemInformation @ 0x1407F8580
 * Callers:
 *     <none>
 * Callees:
 *     HalpSetProfileSourceInterval @ 0x140376DC4 (HalpSetProfileSourceInterval.c)
 *     HalpGetCpuInfo @ 0x1403AAE80 (HalpGetCpuInfo.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpRegisterProcessorTraceInterruptHandler @ 0x140524894 (HalpRegisterProcessorTraceInterruptHandler.c)
 *     HalpRegisterProfileSourceInterruptHandler @ 0x140524990 (HalpRegisterProfileSourceInterruptHandler.c)
 *     HalpRegisterTimerInterruptHandler @ 0x140524A8C (HalpRegisterTimerInterruptHandler.c)
 *     HaliSetSystemInformation @ 0x14090A644 (HaliSetSystemInformation.c)
 */

__int64 __fastcall HalpSetSystemInformation(int a1, int a2, __int64 (__fastcall **a3)(_QWORD))
{
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  switch ( a1 )
  {
    case 0:
      if ( a2 == 8 )
        return HalpSetProfileSourceInterval();
      return 3221225476LL;
    case 1:
      if ( a2 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 1) != 0 )
        return HalpRegisterProfileSourceInterruptHandler(*a3);
      else
        return 3221225473LL;
    case 10:
      if ( a2 != 8 )
        return 3221225476LL;
      return HalpRegisterTimerInterruptHandler(*a3);
    case 19:
      if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) || v6 != 2 )
        return 3221225659LL;
      if ( a2 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 0x41) == 0x41 )
        return HalpRegisterProcessorTraceInterruptHandler(*a3);
      else
        return 3221225659LL;
    case 20:
      if ( (unsigned int)(a2 - 288) > 0x1F6 )
        return 3221225476LL;
      return ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD), _QWORD))HalpProfileInterface[11])(a3, 0LL);
    case 21:
      if ( a2 == 272 )
        return ((__int64 (__fastcall *)(_QWORD))HalpProfileInterface[12])(a3);
      return 3221225476LL;
    default:
      return HaliSetSystemInformation();
  }
}
