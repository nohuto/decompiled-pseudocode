/*
 * XREFs of HUBACPI_ExecuteDSM @ 0x1C0082960
 * Callers:
 *     HUBPSM20_DisengagingSDM845HighSpeedWorkaround @ 0x1C0010800 (HUBPSM20_DisengagingSDM845HighSpeedWorkaround.c)
 *     HUBPSM20_EngagingSDM845HighSpeedWorkaround @ 0x1C0010870 (HUBPSM20_EngagingSDM845HighSpeedWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1C003C26C (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C003C34C (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C003C450 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C003C5E4 (WPP_RECORDER_SF_q_guid_Ld.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C0042910 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBACPI_ExecuteDSM(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  _OWORD *PoolWithTag; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // cl
  int v16; // [rsp+20h] [rbp-79h]
  _QWORD v17[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h]
  _QWORD v19[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h] BYREF
  int v22; // [rsp+98h] [rbp-1h] BYREF
  __int128 v23; // [rsp+9Ch] [rbp+3h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  HIDWORD(v19[0]) = 0;
  HIDWORD(v20) = 0;
  HIDWORD(v17[0]) = 0;
  HIDWORD(v18) = 0;
  v21 = 0LL;
  v23 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x70334855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *((_DWORD *)PoolWithTag + 14) = 0;
    *((_DWORD *)PoolWithTag + 2) = 60;
    *((_DWORD *)PoolWithTag + 3) = 4;
    *(_DWORD *)PoolWithTag = 1130980673;
    *((_DWORD *)PoolWithTag + 1) = 1297302623;
    *((_DWORD *)PoolWithTag + 4) = 1048578;
    memcpy_s((char *)PoolWithTag + 20, 0x10uLL, &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND, 0x10uLL);
    v9 = *((unsigned __int16 *)PoolWithTag + 9);
    if ( (unsigned __int16)v9 < 4u )
      v9 = 4LL;
    *(_DWORD *)((char *)PoolWithTag + v9 + 20) = 0x40000;
    *(_DWORD *)((char *)PoolWithTag + v9 + 24) = 1;
    *(_DWORD *)((char *)PoolWithTag + v9 + 28) = 0x40000;
    *(_DWORD *)((char *)PoolWithTag + v9 + 32) = a4;
    *(_DWORD *)((char *)PoolWithTag + v9 + 36) = 2;
    memcpy_s((char *)PoolWithTag + v9 + 40, 0LL, 0LL, 0LL);
    v17[1] = &v22;
    v19[0] = 1LL;
    v20 = 60LL;
    v19[1] = PoolWithTag;
    v23 = 0LL;
    v22 = 1114596673;
    v17[0] = 1LL;
    v18 = 20LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v4);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v10,
           0LL,
           3325956LL,
           v19,
           v17,
           0LL,
           &v21) >= 0 )
    {
      if ( v22 == 1114596673 )
      {
        if ( DWORD1(v23) && WORD5(v23) )
        {
          v14 = 3;
          if ( (unsigned __int64)WORD5(v23) - 1 <= 3 )
            v14 = BYTE10(v23) - 1;
          v5 = HIDWORD(v23) & ((256 << (8 * v14)) - 1);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLLLL(*(_QWORD *)(a1 + 2520), WORD5(v23), v12, DWORD1(v23), v16);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(*(_QWORD *)(a1 + 2520), v11, v12, v13, v16);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(*(_QWORD *)(a1 + 2520), v11, v12, v13, v16);
    }
    ExFreePoolWithTag(PoolWithTag, 0x70334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(*(_QWORD *)(a1 + 2520));
  }
  return v5;
}
