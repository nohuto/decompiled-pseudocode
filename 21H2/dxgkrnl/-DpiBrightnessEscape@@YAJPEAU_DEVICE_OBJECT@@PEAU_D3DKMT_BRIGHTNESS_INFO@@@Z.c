/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C038EE10
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C03905F4 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C0390670 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // rsi
  unsigned int v3; // ebx
  char *v4; // r10
  __int16 v6; // ax
  char *v7; // r9
  char *v8; // rdi
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  bool v10; // zf
  UCHAR v11; // al
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // ecx
  unsigned int (__fastcall *v18)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *); // rax
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v19; // rdx
  UCHAR *BrightnessLevels; // r9
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  __int64 Value; // r8
  __int32 v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int64 v26; // rdx
  void (__fastcall *v27)(__int64, int *); // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-39h] BYREF
  int v30; // [rsp+38h] [rbp-31h]
  const wchar_t *v31; // [rsp+40h] [rbp-29h]
  int *v32; // [rsp+48h] [rbp-21h]
  int v33; // [rsp+50h] [rbp-19h]
  int *v34; // [rsp+58h] [rbp-11h]
  int v35; // [rsp+60h] [rbp-9h]
  __int64 v36; // [rsp+68h] [rbp-1h]
  int v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+78h] [rbp+Fh]
  __int128 v39; // [rsp+88h] [rbp+1Fh]
  __int64 v40; // [rsp+98h] [rbp+2Fh]
  int v41; // [rsp+D0h] [rbp+67h] BYREF
  int v42; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  v4 = 0LL;
  v6 = DeviceExtension[2333];
  v7 = (char *)(DeviceExtension + 2332);
  if ( v6 == 1 )
    v4 = (char *)(DeviceExtension + 2332);
  if ( v6 == 2 )
  {
    v8 = (char *)(DeviceExtension + 2332);
  }
  else
  {
    v8 = 0LL;
    if ( v6 == 3 )
      goto LABEL_7;
  }
  v7 = 0LL;
LABEL_7:
  Type = a2->Type;
  if ( a2->Type != D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( Type > D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
    {
      if ( Type <= D3DKMT_BRIGHTNESS_INFO_SET )
      {
LABEL_16:
        if ( v4 )
          goto LABEL_21;
        goto LABEL_17;
      }
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS || Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
      {
LABEL_17:
        if ( !v8 && !v7 )
          return 3221225659LL;
        goto LABEL_21;
      }
      if ( Type > D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
      {
        if ( Type > D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
        {
          if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
          {
            v10 = v7 == 0LL;
            goto LABEL_28;
          }
          goto LABEL_20;
        }
        goto LABEL_16;
      }
    }
LABEL_20:
    if ( !v8 )
      return 3221225659LL;
LABEL_21:
    if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      v11 = *((_BYTE *)DeviceExtension + 4386) == 0;
      *((_BYTE *)DeviceExtension + 4386) = v11;
      a2->PossibleLevels.LevelCount = v11;
      return 0LL;
    }
    if ( Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
      goto LABEL_30;
    goto LABEL_24;
  }
  if ( !v4 )
  {
    v10 = v8 == 0LL;
LABEL_28:
    if ( v10 )
      return 3221225659LL;
  }
LABEL_24:
  if ( !*((_BYTE *)DeviceExtension + 4385) )
    return 3221226538LL;
LABEL_30:
  if ( Type > D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    v23 = Type - 7;
    if ( !v23 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v8 + 10))(
                             *((_QWORD *)v8 + 1),
                             &a2->PossibleLevels,
                             4LL);
    v24 = v23 - 1;
    if ( !v24 )
    {
      v33 = 4;
      v35 = 4;
      v31 = L"EnableManualBrightnessMode";
      v41 = 0;
      v32 = &v41;
      v29 = 0LL;
      v34 = &v41;
      v30 = 32;
      v40 = 0LL;
      v36 = 0LL;
      v37 = 0;
      v38 = 0LL;
      v39 = 0LL;
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v29, 0LL, 0LL);
      *((_BYTE *)DeviceExtension + 4385) = v41 != 0;
      if ( v8 )
        DpiCallDrvSetBacklightOptimizationLevel(a1, v8, 0LL);
      return v3;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      *((_BYTE *)DeviceExtension + 4385) = 0;
      v41 = 0;
      if ( v8 )
      {
        if ( (*((int (__fastcall **)(_QWORD, int *, __int64))v8 + 7))(*((_QWORD *)v8 + 1), &v41, 4LL) >= 0
          && (v41 & 1) != 0 )
        {
          v27 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v8 + 8);
          v28 = *((_QWORD *)v8 + 1);
          v42 = 1;
          v27(v28, &v42);
        }
        LOBYTE(v26) = *((_BYTE *)DeviceExtension + 4387);
        DpiCallDrvSetBrightness(a1, v26);
      }
      return v3;
    }
    if ( v25 != 2 )
      return (unsigned int)-1073741811;
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v7 + 7);
    return v18(*((_QWORD *)v7 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    Value = a2->BrightnessCaps.Value;
    if ( (int)Value > 3 )
      return 3221225485LL;
    if ( v7 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v7 + 8))(*((_QWORD *)v7 + 1), a2->ChildUid);
    else
      return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, v8, Value);
  }
  v13 = Type - 1;
  if ( !v13 )
  {
    BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
    p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
    if ( v8 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v8
                            + 4))(
                             *((_QWORD *)v8 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
    else
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v4
                            + 4))(
                             *((_QWORD *)v4 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( v7 )
    {
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v7 + 5))(
                             *((_QWORD *)v7 + 1),
                             a2->ChildUid,
                             &a2->PossibleLevels);
    }
    else
    {
      v19 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( v8 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v8
                              + 6))(
                               *((_QWORD *)v8 + 1),
                               v19,
                               4LL);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v4
                              + 6))(
                               *((_QWORD *)v4 + 1),
                               v19,
                               4LL);
    }
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !v7 )
    {
      LOBYTE(a2) = a2->PossibleLevels.LevelCount;
      return (unsigned int)DpiCallDrvSetBrightness(a1, a2);
    }
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v7 + 4);
    return v18(*((_QWORD *)v7 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !v7 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v8 + 7))(
                             *((_QWORD *)v8 + 1),
                             &a2->PossibleLevels,
                             4LL);
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v7 + 6);
    return v18(*((_QWORD *)v7 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  if ( v16 == 1 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v8 + 8))(
                           *((_QWORD *)v8 + 1),
                           &a2->PossibleLevels,
                           4LL);
  return (unsigned int)-1073741811;
}
