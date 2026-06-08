/*
 * XREFs of PepPerfCheckComplete @ 0x1C000E260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 */

void __fastcall PepPerfCheckComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( !PepSkipPerfCheckNotification )
  {
    v3 = a2;
    v2 = PoFxProcessorNotification(a1, 33LL, &v3);
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x13u,
          (__int64)&WPP_05532f4140ac3fcdf0360a89dbdc65db_Traceguids,
          v2);
      PepSkipPerfCheckNotification = 1;
    }
  }
}
