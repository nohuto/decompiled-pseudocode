/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C008DDE0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004D30 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C0021FC0 (UpdateTPCurrentActiveState.c)
 *     IsLegacyTouchPad @ 0x1C008DED8 (IsLegacyTouchPad.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x1C008DEF8 (TryUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *i; // rcx
  int v3; // edx
  __int64 v4; // rcx

  if ( a1 && *(_DWORD *)a1 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry();
  HIDWORD(gTouchPadParameters) &= 0xFFFFFFAE;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList;
        i && ((BYTE12(gTouchPadParameters) & 0x10) == 0 || (BYTE12(gTouchPadParameters) & 0x40) == 0);
        i = *(struct DEVICEINFO **)(v4 + 56) )
  {
    if ( (unsigned int)IsLegacyTouchPad() )
    {
      HIDWORD(gTouchPadParameters) = v3 | 0x10;
    }
    else if ( (*(_DWORD *)(v4 + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(v4 + 480) + 24LL) == 7 )
    {
      HIDWORD(gTouchPadParameters) = v3 | 0x40;
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 480) + 720LL) >= 5u )
        *(&qword_1C0248FC0 + 1) |= 0x20u;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( gPTPEnabled )
    HIDWORD(gTouchPadParameters) |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&qword_1C0248FC0;
    if ( DWORD2(gTouchPadParameters) == 4
      && (BYTE12(gTouchPadParameters) & 0x10) != 0
      && (BYTE12(gTouchPadParameters) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 8) = 3;
    }
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
