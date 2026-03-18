/*
 * XREFs of _xxxMessageBeep@4 @ 0x178F72
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _EditionMessageBeep@4 @ 0xF3C6A (_EditionMessageBeep@4.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxFlashEnabledPopup@4 @ 0x1A1F03 (_xxxFlashEnabledPopup@4.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AAEJK@Z @ 0xA1BB8 (-PlaySync@CUserPlaySound@@AAEJK@Z.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     _xxxOldMessageBeep@0 @ 0x178FE8 (_xxxOldMessageBeep@0.c)
 */

int __stdcall xxxMessageBeep(char a1)
{
  int v1; // eax
  unsigned int v2; // eax
  int v4; // [esp-4h] [ebp-4h]

  if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) == 0 )
  {
    if ( ((unsigned int)&loc_80000 & _gdwPUDFlags) == 0 )
    {
LABEL_15:
      xxxSoundSentry();
      return 1;
    }
    v1 = a1 & 0xF0;
    switch ( v1 )
    {
      case 16:
        v2 = 1;
        goto LABEL_14;
      case 32:
        v4 = 2;
        break;
      case 48:
        v4 = 3;
        break;
      case 64:
        v4 = 4;
        break;
      default:
        v2 = 0;
LABEL_14:
        CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v2);
        goto LABEL_15;
    }
    v2 = v4;
    goto LABEL_14;
  }
  xxxOldMessageBeep();
  return 1;
}
