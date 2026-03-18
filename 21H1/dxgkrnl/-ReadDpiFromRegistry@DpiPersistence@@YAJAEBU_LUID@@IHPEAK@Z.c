/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0138E3C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C0135D50 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C015A1C0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0138CD8 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0139168 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0139220 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
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
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int *v39; // [rsp+20h] [rbp-89h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v41; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v43; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v44; // [rsp+60h] [rbp-49h] BYREF
  __int64 v45; // [rsp+70h] [rbp-39h] BYREF
  int v46; // [rsp+78h] [rbp-31h]
  const WCHAR *v47; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v48; // [rsp+88h] [rbp-21h]
  int v49; // [rsp+90h] [rbp-19h]
  int *v50; // [rsp+98h] [rbp-11h]
  int v51; // [rsp+A0h] [rbp-9h]
  __int64 v52; // [rsp+A8h] [rbp-1h]
  int v53; // [rsp+B0h] [rbp+7h]
  __int128 v54; // [rsp+B8h] [rbp+Fh]
  __int128 v55; // [rsp+C8h] [rbp+1Fh]
  __int64 v56; // [rsp+D8h] [rbp+2Fh]
  int v57; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v57 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v44 = 0LL;
  KeyHandle = 0LL;
  SessionDataForSpecifiedSession = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  LODWORD(v9) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v44, a4);
  if ( (int)v9 >= 0 )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 88);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      SessionDataForSpecifiedSession = (struct _UNICODE_STRING *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                   v12,
                                                                   CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v32 = WdLogNewEntry5_WdError(v11, v10);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v32 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v33);
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      goto LABEL_14;
    }
    if ( SessionDataForSpecifiedSession[1169].Buffer )
    {
      v16 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
      v17 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v16 + 24) = 861LL;
      v43 = SessionDataForSpecifiedSession[1169];
    }
    else
    {
      if ( SessionDataForSpecifiedSession[1169].Length )
      {
        v34 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v34 + 24) = 852LL;
        WdLogEvent5_WdAssertion(v34);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v13, v14) + 24) = 853LL;
      RtlInitUnicodeString(&v43, L"\\Registry\\Machine\\System");
      v17 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v17);
    v18 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v43, 0LL);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v21 = Handle;
      if ( !Handle )
      {
        v35 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v35 + 24) = 881LL;
        WdLogEvent5_WdAssertion(v35);
        v21 = Handle;
      }
      v22 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v21, &DestinationString, 0LL);
      v9 = v22;
      if ( v22 < 0 )
        goto LABEL_11;
      v28 = KeyHandle;
      if ( !KeyHandle )
      {
        v36 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v36 + 24) = 897LL;
        WdLogEvent5_WdAssertion(v36);
        v28 = KeyHandle;
      }
      v29 = OpenRegistrySubkey(&v41, 0xF003Fu, v28, &v44, 0LL);
      v9 = v29;
      if ( v29 < 0 )
      {
LABEL_11:
        v25 = WdLogNewEntry5_WdEvent(v24, v23);
        *(_QWORD *)(v25 + 24) = v9;
        WdLogEvent5_WdEvent(v25);
        goto LABEL_12;
      }
      v30 = v41;
      if ( !v41 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v24, 0LL);
        *(_QWORD *)(v37 + 24) = 913LL;
        WdLogEvent5_WdAssertion(v37);
        v30 = v41;
      }
      v45 = 0LL;
      v46 = 288;
      v47 = L"DpiValue";
      v48 = a4;
      v50 = &v57;
      v49 = 67108868;
      v56 = 0LL;
      v51 = 4;
      v52 = 0LL;
      v53 = 0;
      v54 = 0LL;
      v55 = 0LL;
      v31 = RtlQueryRegistryValuesEx(0x40000000LL, v30, &v45, 0LL, 0LL);
      v9 = v31;
      if ( v31 >= 0 )
        goto LABEL_12;
    }
    v38 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v38 + 24) = v9;
    WdLogEvent5_WdError(v38);
  }
LABEL_12:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *(_DWORD *)&a4->Length = v57;
  }
LABEL_14:
  if ( a3 && (int)v9 >= 0 && SessionDataForSpecifiedSession && SessionDataForSpecifiedSession[1169].Buffer )
  {
    RtlInitUnicodeString(&v43, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v39) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v43, &DestinationString, &v44, v26, (const unsigned __int16 *)v39);
  }
  operator delete[](v44.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v41 )
    ZwClose(v41);
  return (unsigned int)v9;
}
