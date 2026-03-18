/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0011710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0013F4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Controller_SetControllerGone @ 0x1C0033A48 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     Register_ReadSecureMmio @ 0x1C003D720 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r12
  _BYTE *v9; // rbp
  bool v10; // zf
  size_t v11; // rdi
  int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rdx
  unsigned int *v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  _BYTE *v24; // rdx
  unsigned int *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  int v30; // r9d
  char v31; // [rsp+30h] [rbp-98h]
  unsigned int v32; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-84h] BYREF
  _BYTE *v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  _OWORD v36[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v37; // [rsp+78h] [rbp-50h]

  v35 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  v37 = 0LL;
  memset(v36, 0, sizeof(v36));
  LOWORD(v36[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v36);
  v8 = *((_QWORD *)&v36[0] + 1);
  v9 = *(_BYTE **)(*((_QWORD *)&v36[0] + 1) + 40LL);
  v10 = *(_BYTE *)(*(_QWORD *)(v3 + 8) + 553LL) == 0;
  v11 = *(unsigned int *)(*((_QWORD *)&v36[0] + 1) + 36LL);
  v34 = v9;
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
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    *(_DWORD *)(v8 + 4) = -1073713152;
    v13 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v35,
             v13);
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    v14 = *(_QWORD *)(v3 + 8);
    if ( !*(_DWORD *)(v14 + 464) && *(_DWORD *)(v14 + 528) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v14 + 520));
    *(_BYTE *)(v3 + 57) = 0;
  }
  v13 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_49;
  memset(v9, 0, v11);
  v15 = 255;
  if ( (unsigned int)v11 <= 0x20 )
    v15 = 8 * v11 - 1;
  v16 = *(_DWORD *)(v3 + 16);
  v17 = 1;
  if ( v15 <= v16 )
    v16 = v15;
  if ( !v16 )
  {
LABEL_49:
    *(_DWORD *)(v8 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v35,
             v13);
  }
  while ( 1 )
  {
    v18 = v17 - 1;
    v19 = 112 * v18;
    v20 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 112 * v18 + 13);
    if ( (_BYTE)v20 != 2 )
      break;
    v21 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v18);
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 553LL) )
    {
      v32 = 0;
      Register_ReadSecureMmio(v4, (int)v21, 2, 1, &v32);
      v22 = v32;
    }
    else
    {
      v22 = *v21;
    }
    if ( v22 == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v30 = 186;
      goto LABEL_55;
    }
    v23 = v22 & 0xFFBFFFFF;
    if ( (v22 & 0x1E0) != 0x1E0 )
      v23 = v22;
    if ( (v23 & 0x760000) != 0 )
    {
      v24 = &v34[(unsigned __int64)v17 >> 3];
      *v24 |= 1 << (v17 & 7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v24,
          11,
          187,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v17,
          v23);
      }
    }
LABEL_48:
    if ( ++v17 > v16 )
      goto LABEL_49;
  }
  if ( (_BYTE)v20 != 3 )
    goto LABEL_48;
  v25 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v18);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 553LL) )
  {
    v33 = 0;
    Register_ReadSecureMmio(v4, (int)v25, 2, 1, &v33);
    v20 = v33;
  }
  else
  {
    v20 = *v25;
  }
  if ( (_DWORD)v20 != -1 )
  {
    if ( (v20 & 0xFA0000) != 0
      || ((v26 = *(_QWORD *)(v3 + 48), v27 = v20 & 0x1E0, v27 == 320) || v27 == 192 && *(_DWORD *)(v26 + v19 + 108))
      && _InterlockedCompareExchange((volatile signed __int32 *)(v26 + v19 + 100), 0, 1) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = v20;
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v20,
          11,
          189,
          (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
          v17,
          v31);
      }
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v17) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v28,
            11,
            190,
            (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
            v17);
        }
      }
      else
      {
        v34[(unsigned __int64)v17 >> 3] |= 1 << (v17 & 7);
      }
    }
    goto LABEL_48;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_56;
  v30 = 188;
LABEL_55:
  LOBYTE(v20) = 2;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v20,
    11,
    v30,
    (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
LABEL_56:
  LOBYTE(v20) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v20);
  *(_DWORD *)(v8 + 4) = -1073713152;
  v13 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v35,
           v13);
}
