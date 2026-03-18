/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C00A4CD8
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C00A37A8 (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C016CEB0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00960A0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0096190 (DrvQueryDisplayConfig.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int DisplayConfigBufferSizes; // esi
  __int64 v6; // rax
  void *v7; // rax
  bool v8; // sf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  const wchar_t *v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C8h] [rbp-38h]
  const wchar_t *v25; // [rsp+D0h] [rbp-30h]
  char *v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+E0h] [rbp-20h]
  int *v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+100h] [rbp+0h]
  const wchar_t *v32; // [rsp+108h] [rbp+8h]
  char *v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  int v38; // [rsp+138h] [rbp+38h]
  __int128 v39; // [rsp+140h] [rbp+40h]
  __int128 v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+60h]

  v3 = 0LL;
  *(_OWORD *)a1 = 0LL;
  if ( gProtocolType )
    DisplayConfigBufferSizes = -1073741823;
  else
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, (__int64)a1, a3);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v6 = *a1;
    if ( !(_DWORD)v6 )
      goto LABEL_9;
    v7 = Win32AllocPoolZInit(200 * v6, 0x6D707352u);
    *((_QWORD *)a1 + 1) = v7;
    if ( !v7 )
    {
      DisplayConfigBufferSizes = -1073741801;
      goto LABEL_9;
    }
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(2147483666LL, a1, (__int64)v7, 0LL);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      if ( *a1 )
      {
        v13 = 0;
        QueryTable.DefaultLength = 4;
        QueryTable.Flags = 288;
        QueryTable.DefaultType = 67108868;
        v17 = 288;
        QueryTable.Name = L"ScreenPosition.Left";
        v20 = 67108868;
        QueryTable.EntryContext = &v14;
        QueryTable.DefaultData = &v13;
        v18 = L"ScreenPosition.Top";
        v19 = (char *)&v14 + 4;
        v21 = &v13;
        v25 = L"ScreenPosition.Right";
        v26 = (char *)&v14 + 8;
        v28 = &v13;
        v32 = L"ScreenPosition.Bottom";
        v33 = (char *)&v14 + 12;
        v35 = &v13;
        v22 = 4;
        v24 = 288;
        v27 = 67108868;
        v29 = 4;
        v31 = 288;
        v34 = 67108868;
        v36 = 4;
        v14 = 0LL;
        QueryTable.QueryRoutine = 0LL;
        v16 = 0LL;
        v23 = 0LL;
        v30 = 0LL;
        v37 = 0LL;
        v38 = 0;
        v39 = 0LL;
        v40 = 0LL;
        v41 = 0LL;
        if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
          && (int)v14 < SDWORD2(v14)
          && SDWORD1(v14) < SHIDWORD(v14) )
        {
          a2 = 0LL;
          if ( *a1 )
          {
            v10 = *((_QWORD *)a1 + 1) + 140LL;
            do
            {
              if ( *(_DWORD *)(v10 - 60) == 0x80000000 && *(_DWORD *)(v10 - 84) && *(_DWORD *)(v10 - 80) )
              {
                *(_QWORD *)v10 = 0LL;
                v11 = DWORD2(v14) - v14;
                *(_DWORD *)(v10 - 52) = DWORD2(v14) - v14;
                *(_DWORD *)(v10 - 84) = v11;
                *(_DWORD *)(v10 + 8) = v11;
                v12 = HIDWORD(v14) - DWORD1(v14);
                *(_DWORD *)(v10 - 48) = HIDWORD(v14) - DWORD1(v14);
                *(_DWORD *)(v10 - 80) = v12;
                *(_DWORD *)(v10 + 12) = v12;
              }
              a2 = (unsigned int)(a2 + 1);
              v10 += 200LL;
            }
            while ( (unsigned int)a2 < *a1 );
          }
        }
      }
LABEL_9:
      v8 = DisplayConfigBufferSizes < 0;
      if ( DisplayConfigBufferSizes >= 0 )
        goto LABEL_10;
    }
  }
  RIMFreeQDCActivePathsData((__int64)a1, a2, a3);
  v8 = DisplayConfigBufferSizes < 0;
LABEL_10:
  if ( !v8 )
    return a1;
  return (unsigned int *)v3;
}
