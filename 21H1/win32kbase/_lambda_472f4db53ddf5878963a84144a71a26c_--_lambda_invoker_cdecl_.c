/*
 * XREFs of _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C009ECE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00A1A1C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

void __fastcall lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_(__int64 a1)
{
  unsigned int i; // edi
  int v3; // edx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a1, i) < 0
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v3, 1, 118, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a1);
        }
      }
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
}
