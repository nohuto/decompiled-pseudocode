/*
 * XREFs of Controller_ExecuteDSM @ 0x1C006CDA8
 * Callers:
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0016944 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0018BAC (Controller_QuerySupportedDSMs.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00310A4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006AFA4 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C006F7E0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C006FBB4 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00746CC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C0015648 (WPP_RECORDER_SF_q_guid_Ld.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C0018DF0 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0034FE0 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C00351B8 (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C00352C0 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 */

__int64 __fastcall Controller_ExecuteDSM(__int64 *a1, const void *a2, int a3, int a4, void *a5, unsigned __int16 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r13
  int v9; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdi
  __int64 v17; // rax
  void *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  char v25; // cl
  int v26; // [rsp+20h] [rbp-99h]
  unsigned int Size; // [rsp+60h] [rbp-59h]
  _QWORD v29[2]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+94h] [rbp-25h]
  void *Src; // [rsp+98h] [rbp-21h]
  __int64 v33; // [rsp+A0h] [rbp-19h]
  int v34; // [rsp+A8h] [rbp-11h]
  __int128 v35; // [rsp+ACh] [rbp-Dh]

  v6 = 0;
  v7 = *a1;
  Src = a5;
  v9 = a6;
  HIDWORD(v29[0]) = 0;
  v31 = 0;
  v33 = 0LL;
  v35 = 0LL;
  if ( a6 < 4u )
    v9 = 4;
  Size = v9 + 56;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 56), 0x49434858u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    *v16 = 1130980673;
    v16[1] = 1297302623;
    v16[2] = Size;
    v16[3] = 4;
    v16[4] = 1048578;
    memcpy_s(v16 + 5, 0x10uLL, a2, 0x10uLL);
    v17 = *((unsigned __int16 *)v16 + 9);
    if ( (unsigned __int16)v17 < 4u )
      v17 = 4LL;
    v18 = Src;
    *(_DWORD *)((char *)v16 + v17 + 24) = a3;
    *(_DWORD *)((char *)v16 + v17 + 20) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 28) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 32) = a4;
    *(_WORD *)((char *)v16 + v17 + 36) = 2;
    *(_WORD *)((char *)v16 + v17 + 38) = a6;
    memcpy_s((char *)v16 + v17 + 40, a6, v18, a6);
    v30 = Size;
    v29[0] = 1LL;
    v31 = 0;
    v29[1] = v16;
    v35 = 0LL;
    v34 = 1114596673;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, v7);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01023 + 1488))(
            WdfDriverGlobals,
            v19,
            0LL,
            3325956LL);
    if ( v20 >= 0 )
    {
      if ( DWORD1(v35) && WORD5(v35) )
      {
        v25 = 3;
        if ( (unsigned __int64)WORD5(v35) - 1 <= 3 )
          v25 = BYTE10(v35) - 1;
        v6 = HIDWORD(v35) & ((256 << (8 * v25)) - 1);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q_guid_LLLLL(
          a1[9],
          WORD5(v35),
          v22,
          DWORD1(v35),
          (unsigned int)v29,
          v7,
          (__int64)a2,
          a3,
          a4,
          v6,
          SBYTE4(v35),
          SBYTE10(v35));
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(a1[9], v21, v22, v23, (unsigned int)v29, v7, (__int64)a2, a4, v20);
    }
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(a1[9], v13, v14, v15, v26, (__int64)a2);
  }
  return v6;
}
