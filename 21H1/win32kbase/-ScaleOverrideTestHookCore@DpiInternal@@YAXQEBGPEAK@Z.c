/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00C7F20
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00C80E0 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C003C318 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h]
  const wchar_t *v30; // [rsp+88h] [rbp-78h]
  int *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  wchar_t Dest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v41[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(Dest, 0x16uLL, L"%d", v10);
  v16 = v11;
  if ( v11 < 0
    || (v17 = RtlStringCbPrintfW(
                v41,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                Dest),
        v16 = v17,
        v17 < 0) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v23 + 24) = v16;
    *(_QWORD *)(v23 + 32) = v10;
    WdLogEvent5_WdAssertion(v23);
  }
  else
  {
    v25 = 0;
    v26 = 0;
    QueryTable.Name = v41;
    QueryTable.QueryRoutine = 0LL;
    v30 = L"DesktopScaleFactor";
    QueryTable.Flags = 5;
    v31 = &v25;
    QueryTable.EntryContext = 0LL;
    v33 = &v26;
    QueryTable.DefaultType = 0;
    v39 = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v28 = 0LL;
    v29 = 288;
    v32 = 0x4000000;
    v34 = 4;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v38 = 0LL;
    v18 = RtlQueryRegistryValues(0, L"\\Registry\\Machine\\", &QueryTable, 0LL, 0LL);
    v22 = v18;
    if ( v18 >= 0 )
    {
      if ( v25 != v26 )
        *(_DWORD *)a2 = v25;
    }
    else if ( v18 != -1073741772 )
    {
      v24 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v24 + 24) = v22;
      WdLogEvent5_WdError(v24);
    }
  }
}
