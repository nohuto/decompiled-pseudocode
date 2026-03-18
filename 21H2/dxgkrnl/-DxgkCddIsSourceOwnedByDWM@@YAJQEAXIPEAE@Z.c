/*
 * XREFs of ?DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z @ 0x1C01C43F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

__int64 __fastcall DxgkCddIsSourceOwnedByDWM(_DWORD *a1, unsigned int a2, bool *a3)
{
  __int64 v4; // rbx
  ADAPTER_DISPLAY *v6; // rcx
  unsigned int v7; // esi
  const wchar_t *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rbx
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+58h] [rbp-20h]
  char v15; // [rsp+60h] [rbp-18h]

  v14 = a1;
  v4 = a2;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  if ( a1[50] != 1 )
  {
    v7 = -1073741130;
    WdLogSingleEntry2(2LL, a1, -1073741130LL);
    v9 = L"Adapter 0x%I64x has been stopped, returning 0x%I64x.";
    v10 = -1073741130LL;
LABEL_9:
    v11 = v10;
    v12 = 0LL;
    goto LABEL_10;
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 349);
  if ( !v6 )
  {
    v10 = -1073741811LL;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v9 = L"Adapter 0x%I64x is not a display adapter, returning 0x%I64x.";
    v7 = -1073741811;
    goto LABEL_9;
  }
  if ( *((_DWORD *)v6 + 24) > (unsigned int)v4 )
  {
    *a3 = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, v4) == 1;
    v7 = 0;
    goto LABEL_5;
  }
  v11 = v4;
  v12 = -1073741811LL;
  WdLogSingleEntry3(2LL, a1, v11, -1073741811LL);
  v9 = L"Adapter 0x%I64x does not have VidPn source 0x%I64x, returning 0x%I64x.";
  v7 = -1073741811;
LABEL_10:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, (__int64)a1, v11, v12, 0LL, 0LL);
LABEL_5:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v7;
}
