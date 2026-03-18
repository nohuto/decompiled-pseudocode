/*
 * XREFs of xxxMessageBeep @ 0x1C014FA70
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     EditionMessageBeep @ 0x1C0214B60 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C0238274 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0244A24 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FD010 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0214B78 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = (unsigned int)a1;
  v2 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v2, v1);
  }
  return 1LL;
}
