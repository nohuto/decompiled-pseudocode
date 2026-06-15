/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800B9EB0
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x180068390 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rcx
  __int64 v5; // r9
  struct IVolumeProvider *v6; // r12
  unsigned int i; // r14d
  unsigned int v8; // edi
  CAudioSessionManager *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]
  unsigned int v18; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = 0LL;
  v15 = 0LL;
  v5 = *((unsigned int *)this + 24);
  if ( a2 != (_DWORD)v5 )
  {
    *((_DWORD *)this + 24) = a2;
    v6 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
      goto LABEL_49;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           0LL,
           1LL,
           &v15) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v18) >= 0 )
    {
      for ( i = 0; i < v18; ++i )
      {
        v13 = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        v8 = v2;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, i, &v20) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 40LL))(v20, &pv) < 0
            || (*(int (__fastcall **)(struct IVolumeProvider *, LPVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, pv, &v13) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids, pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 2LL, &v21) >= 0 )
            {
              *(_OWORD *)pvar = 0LL;
              v17 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
                     v21,
                     &PKEY_Endpoint_Flags,
                     pvar) < 0
                || LOWORD(pvar[0]) != 19 && LOWORD(pvar[0]) )
              {
                PropVariantClear(pvar);
              }
              else if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 152LL))(v13, &v19) >= 0 )
              {
                v9 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    35LL,
                    &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids,
                    v19);
                  v9 = WPP_GLOBAL_Control;
                }
                if ( (_BYTE)v2 )
                {
                  LOWORD(pvar[0]) = 19;
                  if ( v19 )
                    LODWORD(pvar[1]) |= 4u;
                  else
                    LODWORD(pvar[1]) &= ~4u;
                  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 48LL))(
                          v21,
                          &PKEY_Endpoint_Flags,
                          pvar);
                  if ( v10 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1385, v10);
                }
                else
                {
                  v8 = (LODWORD(pvar[1]) >> 2) & 1;
                  if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)v9 + 28) & 0x10) != 0
                    && *((_BYTE *)v9 + 25) >= 4u )
                  {
                    WPP_SF_d(
                      *((_QWORD *)v9 + 2),
                      36LL,
                      &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids,
                      (LODWORD(pvar[1]) >> 2) & 1);
                  }
                }
                PropVariantClear(pvar);
                if ( v19 != v8 )
                {
                  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v13 + 144LL))(
                          v13,
                          v8,
                          &EVENTCONTEXT_POWEREVENT,
                          0LL);
                  if ( v11 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1408, v11);
                }
              }
            }
          }
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    goto LABEL_48;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids, v5);
LABEL_48:
    v4 = v15;
  }
LABEL_49:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
