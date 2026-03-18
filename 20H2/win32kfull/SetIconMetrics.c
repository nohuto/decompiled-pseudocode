/*
 * XREFs of SetIconMetrics @ 0x1C00237E0
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C67C (xxxInitWindowStation.c)
 *     UserOnGreTextReady @ 0x1C0022DC8 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6328 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0023DA4 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C0023E18 (-GetLocalizedInt@@YAHIH@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0023EB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C00242BC (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C0025288 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C0026F48 (UserSetAltScaleFont.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  HBRUSH *v4; // rbx
  int v5; // edi
  int v6; // edx
  int LocalizedInt; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  _DWORD v13[28]; // [rsp+40h] [rbp-98h] BYREF

  memset(v13, 0, 0x6CuLL);
  v4 = (HBRUSH *)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    Get96DpiMetrics();
    v5 = UserSetAltScaleFont(*v4);
    if ( !v5 )
    {
      GreMarkDeletableFont((struct HLFONT__ *)*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  if ( !v5 )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL);
    v13[3] = 0;
    LocalizedInt = GetLocalizedInt(0x71u, v6);
    v13[1] = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v9 = GetLocalizedInt(0x72u, v8);
    v13[2] = GetTWIPSMetricById(a1, 0x41u, v9);
    a2 = v13;
  }
  v10 = a2[1];
  v11 = a2[2];
  if ( v10 <= *(_DWORD *)(gpsi + 2304LL) )
    v10 = *(_DWORD *)(gpsi + 2304LL);
  a2[1] = v10;
  if ( v11 <= *(_DWORD *)(gpsi + 2308LL) )
    v11 = *(_DWORD *)(gpsi + 2308LL);
  a2[2] = v11;
  SetDpiDepSysMet(18LL);
  SetDpiDepSysMet(19LL);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( a2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
