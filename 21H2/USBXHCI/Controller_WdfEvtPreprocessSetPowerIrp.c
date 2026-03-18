/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C000C440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C004AB84 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ebx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00613D8);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 16) )
    goto LABEL_14;
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v8 & 0xF00;
  if ( v9 == 256 )
  {
    v10 = ((v8 & 0xF0000) == 327680) + 1;
LABEL_9:
    *(_DWORD *)(v7 + 420) = v10;
    goto LABEL_10;
  }
  if ( v9 > 0x100 )
  {
    if ( v9 <= 0x400 )
    {
      v10 = 4 - ((v8 & 0xF000) != 20480);
      goto LABEL_9;
    }
    if ( v9 == 1280 )
    {
      *(_DWORD *)(v7 + 420) = 5;
      goto LABEL_10;
    }
    if ( v9 == 1536 )
    {
      v10 = ((v8 & 0xF000) != 20480) + 5;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 16),
      v9,
      4,
      208,
      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      *(_DWORD *)(v7 + 420));
  }
  v11 = *(_QWORD *)(v7 + 424);
  if ( v11 )
    Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v7 + 420));
LABEL_14:
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 272))(
          WdfDriverGlobals,
          a1,
          a2);
  v14 = v12;
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), v13, 4, 209, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v12);
  }
  return v14;
}
