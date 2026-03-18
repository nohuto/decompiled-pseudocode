/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C014369C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01452F0 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C0169900 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0143538 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01439C8 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0143A80 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct _UNICODE_STRING *SessionDataForSpecifiedSession; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  HANDLE v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct _UNICODE_STRING *v26; // r9
  HANDLE v28; // r8
  int v29; // eax
  HANDLE v30; // rdx
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int *v40; // [rsp+20h] [rbp-89h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v42; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v44; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v45; // [rsp+60h] [rbp-49h] BYREF
  __int64 v46; // [rsp+70h] [rbp-39h] BYREF
  int v47; // [rsp+78h] [rbp-31h]
  const WCHAR *v48; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v49; // [rsp+88h] [rbp-21h]
  int v50; // [rsp+90h] [rbp-19h]
  int *v51; // [rsp+98h] [rbp-11h]
  int v52; // [rsp+A0h] [rbp-9h]
  __int64 v53; // [rsp+A8h] [rbp-1h]
  int v54; // [rsp+B0h] [rbp+7h]
  __int128 v55; // [rsp+B8h] [rbp+Fh]
  __int128 v56; // [rsp+C8h] [rbp+1Fh]
  __int64 v57; // [rsp+D8h] [rbp+2Fh]
  int v58; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v58 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v45 = 0LL;
  KeyHandle = 0LL;
  SessionDataForSpecifiedSession = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  DestinationString = 0LL;
  LODWORD(v9) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v45, a4);
  if ( (int)v9 >= 0 )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 102);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
      SessionDataForSpecifiedSession = (struct _UNICODE_STRING *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                   v12,
                                                                   CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v32 = WdLogNewEntry5_WdError(v11, v10);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v32 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v34, v33);
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      goto LABEL_14;
    }
    if ( SessionDataForSpecifiedSession[1169].Buffer )
    {
      v16 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
      v17 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v16 + 24) = 861LL;
      v44 = SessionDataForSpecifiedSession[1169];
    }
    else
    {
      if ( SessionDataForSpecifiedSession[1169].Length )
      {
        v35 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v35 + 24) = 852LL;
        WdLogEvent5_WdAssertion(v35);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v13, v14) + 24) = 853LL;
      RtlInitUnicodeString(&v44, L"\\Registry\\Machine\\System");
      v17 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v17);
    v18 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v44, 0LL);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v21 = Handle;
      if ( !Handle )
      {
        v36 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v36 + 24) = 881LL;
        WdLogEvent5_WdAssertion(v36);
        v21 = Handle;
      }
      v22 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v21, &DestinationString, 0LL);
      v9 = v22;
      if ( v22 < 0 )
        goto LABEL_11;
      v28 = KeyHandle;
      if ( !KeyHandle )
      {
        v37 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v37 + 24) = 897LL;
        WdLogEvent5_WdAssertion(v37);
        v28 = KeyHandle;
      }
      v29 = OpenRegistrySubkey(&v42, 0xF003Fu, v28, &v45, 0LL);
      v9 = v29;
      if ( v29 < 0 )
      {
LABEL_11:
        v25 = WdLogNewEntry5_WdEvent(v24, v23);
        *(_QWORD *)(v25 + 24) = v9;
        WdLogEvent5_WdEvent(v25);
        goto LABEL_12;
      }
      v30 = v42;
      if ( !v42 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v24, 0LL);
        *(_QWORD *)(v38 + 24) = 913LL;
        WdLogEvent5_WdAssertion(v38);
        v30 = v42;
      }
      v46 = 0LL;
      v47 = 288;
      v48 = L"DpiValue";
      v49 = a4;
      v51 = &v58;
      v50 = 67108868;
      v57 = 0LL;
      v52 = 4;
      v53 = 0LL;
      v54 = 0;
      v55 = 0LL;
      v56 = 0LL;
      v31 = RtlQueryRegistryValuesEx(0x40000000LL, v30, &v46, 0LL, 0LL);
      v9 = v31;
      if ( v31 >= 0 )
        goto LABEL_12;
    }
    v39 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v39 + 24) = v9;
    WdLogEvent5_WdError(v39);
  }
LABEL_12:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *(_DWORD *)&a4->Length = v58;
  }
LABEL_14:
  if ( a3 && (int)v9 >= 0 && SessionDataForSpecifiedSession && SessionDataForSpecifiedSession[1169].Buffer )
  {
    RtlInitUnicodeString(&v44, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v40) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v44, &DestinationString, &v45, v26, (const unsigned __int16 *)v40);
  }
  operator delete[](v45.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v42 )
    ZwClose(v42);
  return (unsigned int)v9;
}
