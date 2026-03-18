/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C02902A8
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C02D5800 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C020CE30 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C020D540 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0211060 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0290118 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02D83FC (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02D8BF4 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02D9208 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DA880 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, __int64 a2, char *Source1)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // esi
  unsigned __int8 v23; // r12
  int v24; // eax
  int CurrentTvStandard; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int updated; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int8 v34[4]; // [rsp+20h] [rbp-99h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v35; // [rsp+24h] [rbp-95h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v37[16]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v38[144]; // [rsp+40h] [rbp-79h] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return (unsigned int)v10;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, *((struct DXGFASTMUTEX *const *)Current + 42), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v13);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, (struct DXGADAPTER *const)a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v10 = -1073741637;
    v16[3] = a1;
    v16[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v16);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[334] + 20) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v10 = -1071774975;
    v16[3] = v4;
    v16[4] = a1;
    v16[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v10 = -1073741811;
    v16[3] = -1073741811LL;
    goto LABEL_11;
  }
  v36 = 0;
  v34[0] = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v4, v34, &v36);
  v21 = *((_DWORD *)Source1 + 5);
  v22 = 1;
  v23 = v34[0];
  if ( v21 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v10 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v23 == 1 )
    {
      v35 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v35);
      v24 = (v35 == 2) + 1;
    }
    else
    {
      v24 = 1;
    }
    *((_DWORD *)Source1 + 7) = v24;
    *((_DWORD *)Source1 + 9) = 3;
    if ( v23 == 1 )
      CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)a1, v36);
    else
      CurrentTvStandard = 0x8000;
    *((_DWORD *)Source1 + 8) = CurrentTvStandard;
    *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
    if ( v23 == 1 )
    {
      v35 = 0;
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, v4, &v35);
      if ( (*(_BYTE *)&v35 & 4) == 0 && (*(_BYTE *)&v35 & 2) == 0 )
        v22 = 0;
    }
    *((_DWORD *)Source1 + 20) = v22;
    if ( v22 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v21 != 2 )
    goto LABEL_45;
  v10 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v23 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        v4,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_45;
  }
  v26 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v26 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[334], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v27 = WdLogNewEntry5_WdWarning(v26, v19, v20);
        v28 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v27 + 24) = v28;
        v10 = -1073741811;
        *(_QWORD *)(v27 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v27);
        goto LABEL_45;
      }
      v29 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v29 > 3 )
      {
LABEL_32:
        v27 = WdLogNewEntry5_WdWarning(v26, v19, v29);
        v28 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[334], v4, v29, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v29 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v29 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[334], v4, v29, (unsigned int *)Source1 + 23);
LABEL_39:
    v10 = updated;
    goto LABEL_41;
  }
  v31 = WdLogNewEntry5_WdWarning(v26, v19, v29);
  v10 = -1073741811;
  *(_QWORD *)(v31 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v31 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v31);
LABEL_41:
  if ( v10 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38, v19);
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v32);
  return (unsigned int)v10;
}
