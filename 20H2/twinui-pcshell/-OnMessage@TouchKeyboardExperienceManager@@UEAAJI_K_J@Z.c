/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18034DF30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B3B5C (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18034D278 (-OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        int a2,
        __int64 a3,
        const WCHAR *a4)
{
  if ( a2 == 26 )
  {
    if ( CompareStringOrdinal(a4, -1, L"ConvertibleSlateMode", -1, 1) == 2 )
      TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  else if ( a2 == 126 )
  {
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  return 0LL;
}
