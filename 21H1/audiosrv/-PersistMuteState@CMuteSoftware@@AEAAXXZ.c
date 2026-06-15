/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800BEDA8
 * Callers:
 *     ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800BED50 (-OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800BEFC0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_Sl @ 0x1800BF514 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMuteSoftware::PersistMuteState(const wchar_t **this)
{
  int v2; // r8d
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h]
  __int64 v5; // [rsp+70h] [rbp+20h] BYREF
  __int64 v6; // [rsp+78h] [rbp+28h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids,
      this[4]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[4],
         &v6) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, 1LL, &v5) >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v4 = 0LL;
    LOWORD(pvar[0]) = 11;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 25, v2, (unsigned int)this[4], *((_DWORD *)this + 6));
    }
    if ( *((_DWORD *)this + 6) )
      LOWORD(pvar[1]) = -1;
    else
      LOWORD(pvar[1]) = 0;
    (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v5 + 48LL))(v5, &PKEY_APO_MasterMute, pvar);
    PropVariantClear(pvar);
    *((_BYTE *)this + 104) = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
