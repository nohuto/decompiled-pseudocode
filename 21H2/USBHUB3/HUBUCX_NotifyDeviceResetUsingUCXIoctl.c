/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C00240B0
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x1C001E810 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023D84 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *i; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rax
  __int64 j; // rdx
  __int64 v11; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)(a1 + 96) )
  {
LABEL_14:
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 432),
           0LL);
    *(_OWORD *)v9 = 0LL;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_OWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)v9 = 48;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
    *(_QWORD *)(v9 + 16) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(v9 + 40) = v3;
    *(_DWORD *)(v9 + 32) = v2;
    result = HUBUCX_SubmitUcxIoctl((__int64 *)a1, 0x49101Bu);
    if ( (int)result < 0 )
      goto LABEL_15;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 120);
  for ( i = *(_QWORD **)(v1 + 16); ; i = (_QWORD *)*i )
  {
    v6 = i - 1;
    if ( (_QWORD *)(v1 + 16) == i )
      goto LABEL_14;
    v7 = 0LL;
    if ( *((_DWORD *)v6 + 6) )
      break;
LABEL_10:
    ;
  }
  while ( LODWORD(v6[9 * v7 + 6]) != 4 )
  {
LABEL_9:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)v6 + 6) )
      goto LABEL_10;
  }
  if ( v3 )
  {
    LODWORD(v6[9 * v7 + 6]) = 5;
    *(_QWORD *)(v3 + 8 * v2) = v6[9 * v7 + 5];
    v2 = (unsigned int)(v2 + 1);
    goto LABEL_9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x16u,
      (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
  result = 3221225485LL;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x17u,
               (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
               result);
  if ( v1 )
  {
    for ( result = *(_QWORD *)(v1 + 16); ; result = *(_QWORD *)result )
    {
      v11 = result - 8;
      if ( v1 + 16 == result )
        break;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v11 + 24); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v11 + 72 * j + 48) == 5 )
          *(_DWORD *)(v11 + 72 * j + 48) = 4;
      }
    }
  }
  return result;
}
