/*
 * XREFs of ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800BEA30
 * Callers:
 *     ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x1800BE7D0 (-GetLevelData@CMuteSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800BF584 (WPP_SF_Sd.c)
 *     WPP_SF_Sl @ 0x1800BF604 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::LoadMuteState(CMuteSoftware *this)
{
  int v2; // esi
  int v3; // edi
  int v4; // r8d
  BOOL v5; // eax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v10);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9);
    if ( v2 >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v8 = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
          *((const wchar_t **)this + 4));
      }
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
             v9,
             &PKEY_APO_MasterMute,
             pvar);
      if ( v3 >= 0 && LOWORD(pvar[0]) == 11 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            22,
            (unsigned int)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
            *((_QWORD *)this + 4),
            (char)pvar[1]);
        }
        v5 = LOWORD(pvar[1]) == 0xFFFF;
        *((_DWORD *)this + 6) = v5;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v4, *((_QWORD *)this + 4), v5);
        }
      }
      PropVariantClear(pvar);
      if ( v3 < 0 )
        AudSrvTraceLoggingErrorHelper("CMuteSoftware::LoadMuteState", 666, v3);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v2;
}
