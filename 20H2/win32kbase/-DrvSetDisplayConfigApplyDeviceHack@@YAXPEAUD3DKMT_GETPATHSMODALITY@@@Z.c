/*
 * XREFs of ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C000CE40
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall DrvSetDisplayConfigApplyDeviceHack(struct D3DKMT_GETPATHSMODALITY *a1)
{
  __int64 v1; // rbx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // edx
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+90h] [rbp-70h]
  const wchar_t *v16; // [rsp+98h] [rbp-68h]
  char *v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  int v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  const wchar_t *v23; // [rsp+D0h] [rbp-30h]
  char *v24; // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+E0h] [rbp-20h]
  int *v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+100h] [rbp+0h]
  const wchar_t *v30; // [rsp+108h] [rbp+8h]
  char *v31; // [rsp+110h] [rbp+10h]
  int v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  int v36; // [rsp+138h] [rbp+38h]
  __int128 v37; // [rsp+140h] [rbp+40h]
  __int128 v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+60h]

  v1 = 0LL;
  QueryTable.DefaultLength = 4;
  v11 = 0;
  QueryTable.Flags = 288;
  v15 = 288;
  QueryTable.Name = L"ScreenPosition.Left";
  v22 = 288;
  v29 = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.EntryContext = &v12;
  v18 = 67108868;
  QueryTable.DefaultData = &v11;
  v25 = 67108868;
  v16 = L"ScreenPosition.Top";
  v17 = (char *)&v12 + 4;
  v19 = &v11;
  v23 = L"ScreenPosition.Right";
  v24 = (char *)&v12 + 8;
  v26 = &v11;
  v30 = L"ScreenPosition.Bottom";
  v31 = (char *)&v12 + 12;
  v33 = &v11;
  v32 = 67108868;
  v39 = 0LL;
  v12 = 0LL;
  QueryTable.QueryRoutine = 0LL;
  v14 = 0LL;
  v20 = 4;
  v21 = 0LL;
  v27 = 4;
  v28 = 0LL;
  v34 = 4;
  v35 = 0LL;
  v36 = 0;
  v37 = 0LL;
  v38 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0 )
  {
    v3 = DWORD2(v12);
    if ( (int)v12 >= SDWORD2(v12) || (v4 = HIDWORD(v12), SDWORD1(v12) >= SHIDWORD(v12)) )
    {
      v8 = WdLogNewEntry5_WdError();
      v9 = (_QWORD *)(v8 + 24);
      do
      {
        v10 = *((int *)&v12 + v1++);
        *v9++ = v10;
      }
      while ( v1 < 4 );
      WdLogEvent5_WdError(v8, v9);
    }
    else
    {
      v5 = 0;
      if ( *((_WORD *)a1 + 10) )
      {
        v6 = v12;
        do
        {
          v7 = 272LL * v5;
          if ( *(_DWORD *)((char *)a1 + v7 + 136) == 0x80000000 && *(_DWORD *)((char *)a1 + v7 + 200) )
          {
            if ( *(_DWORD *)((char *)a1 + v7 + 204) )
            {
              *(_DWORD *)((char *)a1 + v7 + 200) = v3 - v12;
              *(_DWORD *)((char *)a1 + v7 + 204) = v4 - DWORD1(v12);
              *(_OWORD *)((char *)a1 + v7 + 216) = v6;
            }
          }
          ++v5;
        }
        while ( v5 < *((unsigned __int16 *)a1 + 10) );
      }
    }
  }
}
