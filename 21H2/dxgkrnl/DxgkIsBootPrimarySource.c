/*
 * XREFs of DxgkIsBootPrimarySource @ 0x1C016A480
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00099E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C001A4C0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C02DDD28 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 */

unsigned __int8 __fastcall DxgkIsBootPrimarySource(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  ADAPTER_DISPLAY *v6; // rcx
  int IsSourcePresentedOnClientVidPnUsedByFirmware; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rax
  unsigned __int8 v12[4]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-B4h] BYREF
  _BYTE v14[4]; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v16[144]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = a2;
  v4 = 0;
  v12[0] = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL) >= 0 )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 87);
    if ( (v5 & 1) != 0 || DXGADAPTER::IsBddFallbackDriver(a1) )
    {
      if ( (v5 & 0x8000) != 0 )
      {
        IsSourcePresentedOnClientVidPnUsedByFirmware = DmmIsSourcePresentedOnClientVidPnUsedByFirmware(a1, v2, v12);
        v10 = IsSourcePresentedOnClientVidPnUsedByFirmware;
        if ( IsSourcePresentedOnClientVidPnUsedByFirmware >= 0 )
        {
          v4 = v12[0];
        }
        else
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v5);
          v11[3] = a1;
          v11[4] = v2;
          v11[5] = v10;
          WdLogEvent5_WdError(v11);
        }
      }
      else
      {
        v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 337);
        v13 = 0;
        ADAPTER_DISPLAY::GetPrimaryPath(v6, &v13, &v15, (enum _DXGK_PRIMARY_TARGET_TYPE *)v14);
        v4 = (_DWORD)v2 == v13;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5);
  return v4;
}
