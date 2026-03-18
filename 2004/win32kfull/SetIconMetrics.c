/*
 * XREFs of SetIconMetrics @ 0x1C000AFC0
 * Callers:
 *     xxxInitWindowStation @ 0x1C0009574 (xxxInitWindowStation.c)
 *     UserOnGreTextReady @ 0x1C0009D2C (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6FE8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C000B584 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C000B5F8 (-GetLocalizedInt@@YAHIH@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B698 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C000B7BC (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C000CEA4 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C000CF04 (UserSetAltScaleFont.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
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
