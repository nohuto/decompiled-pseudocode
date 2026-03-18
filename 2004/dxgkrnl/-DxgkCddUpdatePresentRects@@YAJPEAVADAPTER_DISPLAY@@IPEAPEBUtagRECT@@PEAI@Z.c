/*
 * XREFs of ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C0156C40
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015634C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0016AF8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011F918 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C022E400 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddUpdatePresentRects(DXGADAPTER **a1, unsigned int a2, struct tagRECT **a3, unsigned int *a4)
{
  __int64 v6; // rbx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  DXGADAPTER *v10; // r15
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT *v14; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-10h] BYREF

  v14 = 0LL;
  v13 = -1;
  v6 = a2;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(a1, a2);
  if ( CddInterface )
  {
    (*((void (__fastcall **)(_QWORD, struct tagRECT **, unsigned int *))CddInterface + 3))(
      *(_QWORD *)CddInterface,
      &v14,
      &v13);
    if ( v13 )
    {
      if ( v13 != -1 )
      {
        v10 = a1[14];
        v15 = *(struct tagRECT *)((char *)v10 + 3968 * v6 + 652);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)a1, (unsigned int)v6, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v15.right;
          v15.right = v15.bottom;
          v15.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)a1, (unsigned int)v6, 0);
        DxgkpConvertRects(
          *((_DWORD *)v10 + 992 * v6 + 161),
          *((_DWORD *)v10 + 992 * v6 + 162),
          CurrentOrientation,
          &v15,
          v13,
          v14,
          v14);
        *a4 = v13;
        *a3 = v14;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  return 0LL;
}
