/*
 * XREFs of ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x140028788
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140027EA0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x140028A64 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x140028C10 (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x140028C58 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 */

__int64 __fastcall wil_StagingConfig_RecordFeatureUsage(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  _BYTE v8[96]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v9[208]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = a3;
  v6 = wil_details_StagingConfig_Load(v8, 0LL, a3, v9);
  if ( !v6 )
  {
    v6 = wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v8, a1, a2, v5);
    wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v8);
  }
  return v6;
}
