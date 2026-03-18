/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C0010AE0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // edi
  int v8; // edx
  int v9; // edx
  _OWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v10[0] + 1) + 16LL),
         off_1C00612C0);
  v4 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_QWORD *)v3;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      12,
      26,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
  }
  if ( !*(_BYTE *)(v4 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        12,
        27,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    v7 = -1073741823;
    goto LABEL_13;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    v7 = -1073741810;
LABEL_13:
    *(_QWORD *)(v4 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v7);
  }
  *(_QWORD *)(v4 + 424) = a2;
  *(_BYTE *)(v4 + 432) = 0;
  result = UsbDevice_SetAddress(v4, 0LL);
  v7 = result;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v9,
        12,
        28,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(_BYTE *)(v4 + 135),
        result);
    }
    goto LABEL_13;
  }
  return result;
}
