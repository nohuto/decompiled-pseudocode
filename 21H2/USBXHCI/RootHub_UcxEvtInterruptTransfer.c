/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0013700
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00139F0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     Controller_SetControllerGone @ 0x1C0032DC8 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned int v5; // ebx
  unsigned __int8 *v6; // rbp
  size_t v7; // rsi
  int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r12
  char v14; // cl
  int Ulong; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23; // rdx
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // r9d
  int v28; // edx
  char v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  _OWORD v32[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v33; // [rsp+78h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v30 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  v33 = 0LL;
  memset(v32, 0, sizeof(v32));
  LOWORD(v32[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v32);
  v4 = *((_QWORD *)&v32[0] + 1);
  v5 = 0;
  v6 = *(unsigned __int8 **)(*((_QWORD *)&v32[0] + 1) + 40LL);
  v7 = *(unsigned int *)(*((_QWORD *)&v32[0] + 1) + 36LL);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 553LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v24, v25, v26);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v8,
        11,
        186,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    }
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    v23 = *(_QWORD *)(v3 + 8);
    if ( !*(_DWORD *)(v23 + 464) && *(_DWORD *)(v23 + 528) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v23 + 520));
    *(_BYTE *)(v3 + 57) = 0;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_23;
  memset(v6, 0, v7);
  v9 = 255;
  if ( (unsigned int)v7 <= 0x20 )
    v9 = 8 * v7 - 1;
  v10 = *(_DWORD *)(v3 + 16);
  v11 = 1;
  if ( v9 <= v10 )
    v10 = v9;
  if ( !v10 )
  {
LABEL_23:
    *(_DWORD *)(v4 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v5);
  }
  while ( 1 )
  {
    v12 = v11 - 1;
    v13 = 112 * v12;
    v14 = *(_BYTE *)(112 * v12 + *(_QWORD *)(v3 + 48) + 13);
    if ( v14 != 2 )
      break;
    Ulong = XilRegister_ReadUlong(v30, *(_QWORD *)(v3 + 40) + 16 * v12);
    if ( Ulong == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 187;
LABEL_36:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v16,
          11,
          v27,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
        goto LABEL_37;
      }
      goto LABEL_37;
    }
    if ( (Ulong & 0x1E0) == 0x1E0 )
      Ulong &= ~0x400000u;
    if ( (Ulong & 0x760000) != 0 )
    {
      v17 = (unsigned __int64)v11 >> 3;
      v18 = v6[v17] | (1 << (v11 & 7));
      v6[v17] = v18;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v18,
          11,
          188,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v11,
          Ulong);
      }
    }
LABEL_22:
    if ( ++v11 > v10 )
      goto LABEL_23;
  }
  if ( v14 != 3 )
    goto LABEL_22;
  v19 = XilRegister_ReadUlong(v30, *(_QWORD *)(v3 + 40) + 16 * v12);
  v16 = v19;
  if ( v19 != -1 )
  {
    if ( (v19 & 0xFA0000) != 0
      || ((v20 = *(_QWORD *)(v3 + 48), v21 = v19 & 0x1E0, v21 == 320) || v21 == 192 && *(_DWORD *)(v13 + v20 + 108))
      && _InterlockedCompareExchange((volatile signed __int32 *)(v13 + v20 + 100), 0, 1) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = v16;
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v16,
          11,
          190,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v11,
          v29);
      }
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v28,
            11,
            191,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v11);
        }
      }
      else
      {
        v6[(unsigned __int64)v11 >> 3] |= 1 << (v11 & 7);
      }
    }
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 189;
    goto LABEL_36;
  }
LABEL_37:
  LOBYTE(v16) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v16);
LABEL_38:
  *(_DWORD *)(v4 + 4) = -1073713152;
  v5 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v5);
}
