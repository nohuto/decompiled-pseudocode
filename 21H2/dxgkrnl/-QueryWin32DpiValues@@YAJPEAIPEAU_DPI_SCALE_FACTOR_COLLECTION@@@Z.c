/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01D7C48
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01D4920 (DxgkUpdateGdiInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FA820 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(
        unsigned int *a1,
        struct _DPI_SCALE_FACTOR_COLLECTION *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(int *); // rax
  __int64 (__fastcall *v10)(int *); // rax
  __int64 v12; // rdi
  int v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+54h] [rbp-14h]
  unsigned int *v15; // [rsp+58h] [rbp-10h]

  v6 = -1073741275;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, a4);
  if ( Current )
  {
    v8 = *((_QWORD *)Current + 11);
    if ( v8 )
    {
      v9 = *(__int64 (__fastcall **)(int *))(v8 + 352);
      if ( v9 )
      {
        if ( a1 && (v13 = 0, v14 = 4, v15 = a1, v6 = v9(&v13), v6 < 0) )
        {
          v12 = 1429LL;
          WdLogSingleEntry1(1LL, 1429LL);
        }
        else
        {
          if ( !a2 )
            return (unsigned int)v6;
          v10 = *(__int64 (__fastcall **)(int *))(v8 + 352);
          v13 = 1;
          v14 = 32;
          v15 = (unsigned int *)a2;
          v6 = v10(&v13);
          if ( v6 >= 0 )
            return (unsigned int)v6;
          v12 = 1442LL;
          WdLogSingleEntry1(1LL, 1442LL);
        }
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", v12, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return (unsigned int)v6;
}
