/*
 * XREFs of ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A81A8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C0144140 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0142388 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01428D0 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToHKLMRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rbx
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 *v12; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING v13; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v13, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v14 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v14, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v12) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v14, &v13, v6, v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = v5;
      WdLogEvent5_WdError(v10);
    }
  }
  operator delete[](v13.Buffer);
  return (unsigned int)v5;
}
