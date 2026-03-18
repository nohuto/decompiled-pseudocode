/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C0384354
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C0398640 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C02BF554 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02BFD18 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C02C2DD0 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C03841C4 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C039B11C (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039BBE0 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C039C1C8 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(__int64 a1, __int64 a2, char *Source1, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  struct DXGPROCESS *Current; // rax
  int v9; // esi
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbx
  const wchar_t *v13; // r9
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int8 v16; // r12
  int v17; // eax
  int CurrentTvStandard; // eax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  int CopyProtection; // eax
  unsigned __int8 v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v23; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = (unsigned int)a2;
  v6 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, (__int64)Source1, a4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGPROCESS *)((char *)Current + 376), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v9 = 1;
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 65LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 65LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v6, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v6) )
  {
    v11 = -1073741637;
    WdLogSingleEntry2(2LL, v6, -1073741637LL);
    v12 = v6;
    v13 = L"DxgkHandleVideoParameters is called on a render only or display only adapter 0x%I64x, returning 0x%I64x.";
    v6 = -1073741637LL;
LABEL_11:
    v14 = 0LL;
    goto LABEL_12;
  }
  if ( (unsigned int)v5 < *(_DWORD *)(*(_QWORD *)(v6 + 2792) + 96LL) )
  {
    if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
    {
      v12 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v13 = L"Specified GUID does not match VIDEOPARAMETERS GUID, returning 0x%I64x.";
      v11 = -1073741811;
      v6 = 0LL;
      goto LABEL_11;
    }
    v24 = 0;
    v22[0] = 0;
    DmmIsSourcePresentedOnClientVidPnAnalogTvOut((void *const)v6, v5, v22, &v24);
    v15 = *((_DWORD *)Source1 + 5);
    v16 = v22[0];
    if ( v15 == 1 )
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
      if ( v16 == 1 )
      {
        v23 = 0;
        DmmGetPathContentFromClientVidPnSource((void *const)v6, v5, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v23);
        v17 = (v23 == 2) + 1;
      }
      else
      {
        v17 = 1;
      }
      *((_DWORD *)Source1 + 7) = v17;
      *((_DWORD *)Source1 + 9) = 3;
      if ( v16 == 1 )
        CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)v6, v24);
      else
        CurrentTvStandard = 0x8000;
      *((_DWORD *)Source1 + 8) = CurrentTvStandard;
      *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
      if ( v16 == 1 )
      {
        v23 = 0;
        DmmGetMacrovisonSupportFromClientVidPnSource((void *const)v6, v5, &v23);
        if ( (*(_BYTE *)&v23 & 4) == 0 && (*(_BYTE *)&v23 & 2) == 0 )
          v9 = 0;
      }
      *((_DWORD *)Source1 + 20) = v9;
      if ( v9 )
      {
        *((_DWORD *)Source1 + 6) |= 0x100u;
        *((_DWORD *)Source1 + 22) = 196799;
      }
      goto LABEL_44;
    }
    if ( v15 != 2 )
    {
LABEL_44:
      v11 = v10;
      goto LABEL_45;
    }
    v10 = 0;
    if ( (*((_DWORD *)Source1 + 6) & 0x100) != 0 )
    {
      switch ( *((_DWORD *)Source1 + 21) )
      {
        case 1:
          v19 = *((unsigned int *)Source1 + 24);
          if ( (unsigned int)(v19 - 1) > 2 || *((_DWORD *)Source1 + 20) != 1 )
            goto LABEL_34;
          CopyProtection = ADAPTER_DISPLAY::CreateCopyProtection(
                             *(DXGADAPTER ***)(v6 + 2792),
                             v5,
                             v19,
                             (unsigned int *)Source1 + 23);
          break;
        case 2:
          CopyProtection = ADAPTER_DISPLAY::DestroyCopyProtection(
                             *(DXGADAPTER ***)(v6 + 2792),
                             v5,
                             *((_DWORD *)Source1 + 23));
          break;
        case 4:
          v20 = *((_DWORD *)Source1 + 24);
          if ( v20 > 3 )
          {
            v19 = v20;
            goto LABEL_34;
          }
          CopyProtection = ADAPTER_DISPLAY::UpdateCopyProtection(
                             *(DXGADAPTER ***)(v6 + 2792),
                             v5,
                             v20,
                             *((_DWORD *)Source1 + 23));
          break;
        default:
          v19 = *((unsigned int *)Source1 + 21);
LABEL_34:
          v10 = -1073741811;
          WdLogSingleEntry2(3LL, v19, -1073741811LL);
          goto LABEL_44;
      }
      v10 = CopyProtection;
      if ( CopyProtection < 0 )
        goto LABEL_44;
    }
    if ( v16 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        (void *const)v6,
        v5,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_44;
  }
  v14 = -1071774975LL;
  v12 = v5;
  WdLogSingleEntry3(2LL, v5, v6, -1071774975LL);
  v13 = L"Caller specified VidPn source 0x%I64x is not valid on  adapter 0x%I64x, returning 0x%I64x.";
  v11 = -1071774975;
LABEL_12:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, v6, v14, 0LL, 0LL);
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return v11;
}
