/*
 * XREFs of ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18007F2FC
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002CE60 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18004CEE0 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x18007F488 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

__int64 __fastcall wil_StagingConfig_RecordFeatureUsage(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  HANDLE ProcessHeap; // rax
  _BYTE v9[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v11; // [rsp+80h] [rbp-108h]
  _BYTE v12[208]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = a3;
  v6 = wil_details_StagingConfig_Load((__int64)v9, 0, a3, v12);
  if ( !v6 )
  {
    v6 = wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v9, a1, a2, v5);
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  return v6;
}
