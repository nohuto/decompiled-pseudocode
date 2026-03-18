/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01428D0
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01424EC (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A81A8 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A826C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0142978 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C0142FD4 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 */

__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // ebx
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  struct _UNICODE_STRING *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int appended; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  bool *v20; // [rsp+20h] [rbp-18h]
  struct _UNICODE_STRING v21; // [rsp+50h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  a3->Length = 0;
  v7 = (wchar_t *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
  a3->Buffer = v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    LOBYTE(v21.Length) = 0;
    v12 = DpiPersistence::CreateMonitorSetId(this, (const struct _LUID *)v5, (unsigned int)a3, &v21, v20);
    v15 = v12;
    if ( LOBYTE(v21.Length) )
    {
      return 3221225659LL;
    }
    else
    {
      if ( v12 < 0 || (appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a3, v13), v15 = appended, appended < 0) )
      {
        v19 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v19 + 24) = v15;
        WdLogEvent5_WdError(v19);
      }
      return (unsigned int)v15;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v18 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
}
