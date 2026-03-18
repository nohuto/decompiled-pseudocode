/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C003D3E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C003DB84 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // edx
  unsigned int v12; // esi
  __int64 v13; // r8
  int v14; // edx
  unsigned __int16 Ulong; // bx
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  _OWORD v20[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v21; // [rsp+90h] [rbp-48h]

  v3 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v8 + 88);
  if ( *(_BYTE *)(v8 + 537) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v10 = *((_QWORD *)&v20[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v7 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        v11,
        11,
        180,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
    }
    *(_DWORD *)(v10 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v12 = *(unsigned __int16 *)(v10 + 132);
  if ( *(_WORD *)(v10 + 128) != 3491
    || *(_WORD *)(v10 + 130)
    || !*(_WORD *)(v10 + 132)
    || v12 > *(_DWORD *)(v7 + 16)
    || *(_WORD *)(v10 + 134) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = *(unsigned __int8 *)(v10 + 134);
      v16 = 181;
      v18 = *(unsigned __int8 *)(v10 + 133);
      goto LABEL_27;
    }
LABEL_28:
    v3 = -1073741823;
    *(_DWORD *)(v10 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v3);
  }
  v13 = v12 - 1;
  if ( *(_BYTE *)(104 * v13 + *(_QWORD *)(v7 + 48) + 13) != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 184;
      v17 = *(unsigned __int8 *)(v10 + 134);
      v18 = *(unsigned __int8 *)(v10 + 133);
LABEL_27:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL), v17, v18, v16);
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  Ulong = XilRegister_ReadUlong(v9, (unsigned int *)(16 * v13 + 8 + *(_QWORD *)(v7 + 40)));
  **(_WORD **)(v10 + 40) = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      v14,
      11,
      182,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v12,
      Ulong);
  }
  if ( Ulong > 0xAu && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      v14,
      11,
      183,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v12,
      Ulong);
  }
  *(_DWORD *)(v10 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v3);
}
