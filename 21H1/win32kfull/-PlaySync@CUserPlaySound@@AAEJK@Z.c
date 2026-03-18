/*
 * XREFs of ?PlaySync@CUserPlaySound@@AAEJK@Z @ 0xA1BB8
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     _PostPlaySoundMessage@4 @ 0xAC482 (_PostPlaySoundMessage@4.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 * Callees:
 *     _PlaySoundPostMessage@12 @ 0x27A3F0 (_PlaySoundPostMessage@12.c)
 */

int __thiscall CUserPlaySound::PlaySync(CUserPlaySound *this, unsigned int a2)
{
  int v3; // ebx
  char *v4; // edi

  v3 = 0;
  v4 = (char *)this + 4;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0);
  if ( *(_DWORD *)this )
    v3 = PlaySoundPostMessage(a2);
  if ( v4 )
  {
    ExReleasePushLockSharedEx(v4, 0);
    KeLeaveCriticalRegion();
  }
  return v3;
}
