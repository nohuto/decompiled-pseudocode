/*
 * XREFs of Control_Initialize @ 0x1C0072470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  bool v2; // al
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int16 v8; // r9
  int v9; // r8d
  int v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+30h] [rbp-39h]
  int v12; // [rsp+38h] [rbp-31h]
  __int128 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+70h] [rbp+7h]
  _QWORD v18[3]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp+27h] BYREF
  __int128 v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+B0h] [rbp+47h]

  DWORD1(v13) = 0;
  HIDWORD(v18[0]) = 0;
  HIDWORD(v19[0]) = 0;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  v2 = (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x20000LL) == 0
    && (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu) >= 8;
  *(_BYTE *)(a1 + 320) = v2;
  v21 = 0LL;
  v20 = 0LL;
  LODWORD(v20) = 0;
  DWORD2(v20) = 0;
  v19[0] = 0LL;
  v19[1] = Control_WdfEvtTimerForTransferTimeout;
  v17 = 0LL;
  v3 = *(_QWORD *)(a1 + 72);
  v14 = 0LL;
  LODWORD(v19[0]) = 40;
  v16 = v3;
  v13 = 0LL;
  BYTE4(v20) = 1;
  LODWORD(v13) = 56;
  v15 = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
         WdfDriverGlobals,
         v19,
         &v13,
         a1 + 336);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
      v12 = v4;
      v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
LABEL_12:
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
      v10 = v9;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        v8,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        v10,
        v11,
        v12);
    }
  }
  else
  {
    v18[2] = 1LL;
    v18[0] = 24LL;
    v18[1] = Control_WdfDpcForCanceledOnQueueTransferCompletion;
    v17 = 0LL;
    v6 = *(_QWORD *)(a1 + 72);
    v14 = 0LL;
    v15 = 0x100000001LL;
    v16 = v6;
    v13 = 0LL;
    LODWORD(v13) = 56;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 888))(
           WdfDriverGlobals,
           v18,
           &v13,
           a1 + 328);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      v12 = v5;
      v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      goto LABEL_12;
    }
  }
  return (unsigned int)v5;
}
