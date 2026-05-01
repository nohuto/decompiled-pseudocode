/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18030F92C
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18030F70C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18030F74C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_CreateSessionKey @ 0x18030F804 (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x18030F8A0 (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx
  HKEY v3; // rcx

  result = byte_1805A1EC1;
  if ( !byte_1805A1EC1 )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_1805A1EC1 = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey(v3);
      goto LABEL_3;
    }
    return byte_1805A1EC1;
  }
  return result;
}
