/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02CEB9C
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02CECE4 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02D02C4 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _WORD *DeviceExtension; // rbx
  char *v2; // rdx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // edi
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  int v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+50h] [rbp-30h]
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v14; // [rsp+54h] [rbp-2Ch]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  v2 = 0LL;
  v3 = DxgkBacklightOptimizationDynamic;
  if ( DeviceExtension[2369] == 2 )
    v2 = (char *)(DeviceExtension + 2368);
  if ( !v2 )
    return 3221225659LL;
  if ( *((_QWORD *)v2 + 9) )
  {
    if ( *((_BYTE *)DeviceExtension + 4376) )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( *((_BYTE *)DeviceExtension + 4360) )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else if ( *((_BYTE *)DeviceExtension + 4400) )
    {
      if ( *((_BYTE *)DeviceExtension + 4424) && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x7006u )
        v3 = DxgkBacklightOptimizationEDR;
    }
    else
    {
      v3 = DxgkBacklightOptimizationDesktop;
    }
    v5 = *((_BYTE *)DeviceExtension + 4448) == 0;
    *((_DWORD *)DeviceExtension + 1113) = v3;
    if ( v5 )
    {
      v6 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v9, 0, sizeof(v9));
      v12 = 0;
      v7 = *((_QWORD *)DeviceExtension + 334);
      v16 = 0;
      v11 = 0;
      v10 = 0LL;
      v17 = v7;
      v8[0] = 30;
      v8[1] = 72;
      memset(v9, 0, sizeof(v9));
      v13 = 66;
      v14 = v3;
      v15 = v6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8, 0x200000000LL);
    }
  }
  return 0LL;
}
