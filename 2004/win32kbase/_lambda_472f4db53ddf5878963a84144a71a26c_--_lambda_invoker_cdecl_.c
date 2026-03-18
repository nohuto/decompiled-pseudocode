/*
 * XREFs of _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C00AF210
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00AB898 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 */

void __fastcall lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // r8
  unsigned int i; // edi
  int v4; // edx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a1, i, v2) < 0
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v4, 1, 118, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1);
        }
      }
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
}
