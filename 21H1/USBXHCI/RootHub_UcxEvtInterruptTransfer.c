/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0012E70 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     Controller_SetControllerGone @ 0x1C0032568 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     Register_ReadSecureMmio @ 0x1C003C240 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r13
  _BYTE *v9; // rdi
  bool v10; // zf
  size_t v11; // rbx
  int v12; // edx
  unsigned int v13; // r15d
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  int *v19; // rax
  int v20; // eax
  _BYTE *v21; // r8
  int v22; // edx
  unsigned int *v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  int v27; // r9d
  char v28; // [rsp+30h] [rbp-88h]
  int v29; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-74h] BYREF
  _BYTE *v31; // [rsp+48h] [rbp-70h]
  _OWORD v32[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  v33 = 0LL;
  memset(v32, 0, sizeof(v32));
  LOWORD(v32[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v32);
  v8 = *((_QWORD *)&v32[0] + 1);
  v9 = *(_BYTE **)(*((_QWORD *)&v32[0] + 1) + 40LL);
  v10 = *(_BYTE *)(*(_QWORD *)(v3 + 8) + 537LL) == 0;
  v11 = *(unsigned int *)(*((_QWORD *)&v32[0] + 1) + 36LL);
  v31 = v9;
  if ( !v10 && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v12,
        11,
        185,
        (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
    }
    *(_DWORD *)(v8 + 4) = -1073713152;
    v13 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v13);
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    v25 = *(_QWORD *)(v3 + 8);
    if ( !*(_DWORD *)(v25 + 464) && *(_DWORD *)(v25 + 512) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v25 + 504));
    *(_BYTE *)(v3 + 57) = 0;
  }
  v13 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_20;
  memset(v9, 0, v11);
  if ( (unsigned int)v11 > 0x20 )
    v14 = 255;
  else
    v14 = 8 * v11 - 1;
  if ( v14 > *(_DWORD *)(v3 + 16) )
    v14 = *(_DWORD *)(v3 + 16);
  v15 = 1;
  if ( !v14 )
  {
LABEL_20:
    *(_DWORD *)(v8 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v13);
  }
  while ( 1 )
  {
    v16 = v15 - 1;
    v17 = 104 * v16;
    v18 = *(unsigned __int8 *)(104 * v16 + *(_QWORD *)(v3 + 48) + 13);
    if ( (_BYTE)v18 != 2 )
      break;
    v19 = (int *)(*(_QWORD *)(v3 + 40) + 16 * v16);
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 537LL) )
    {
      v29 = 0;
      Register_ReadSecureMmio(v4, (int)v19, 2, 1, &v29);
      v20 = v29;
    }
    else
    {
      v20 = *v19;
    }
    if ( v20 == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v27 = 186;
      goto LABEL_53;
    }
    if ( (v20 & 0x1E0) == 0x1E0 )
      v20 &= ~0x400000u;
    if ( (v20 & 0x760000) != 0 )
    {
      v21 = &v31[(unsigned __int64)v15 >> 3];
      v22 = (unsigned __int8)*v21 | (1 << (v15 & 7));
      *v21 = v22;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v22,
          11,
          187,
          (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
          v15,
          v20);
      }
    }
LABEL_19:
    if ( ++v15 > v14 )
      goto LABEL_20;
  }
  if ( (_BYTE)v18 != 3 )
    goto LABEL_19;
  v24 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v16);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 537LL) )
  {
    v30 = 0;
    Register_ReadSecureMmio(v4, (int)v24, 2, 1, &v30);
    v18 = v30;
  }
  else
  {
    v18 = *v24;
  }
  if ( (_DWORD)v18 != -1 )
  {
    if ( (v18 & 0xFA0000) != 0
      || (v18 & 0x1E0) == 0x140
      && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 48) + v17 + 96), 0, 1) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = v18;
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v18,
          11,
          189,
          (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
          v15,
          v28);
      }
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v15) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v26,
            11,
            190,
            (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
            v15);
        }
      }
      else
      {
        v31[(unsigned __int64)v15 >> 3] |= 1 << (v15 & 7);
      }
    }
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 188;
LABEL_53:
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v18,
      11,
      v27,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids);
  }
LABEL_54:
  LOBYTE(v18) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v18);
  *(_DWORD *)(v8 + 4) = -1073713152;
  v13 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v13);
}
