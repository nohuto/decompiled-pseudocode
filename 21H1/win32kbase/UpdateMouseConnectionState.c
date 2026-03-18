/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0010FD4
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0010E50 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     WPP_RECORDER_SF_l @ 0x1C001109C (WPP_RECORDER_SF_l.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C0011118 (ApiSetIsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebx
  struct DEVICEINFO *i; // rdi
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // ebx
  __int64 result; // rax

  v0 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( !*((_BYTE *)i + 48)
      && !*((_WORD *)i + 444)
      && (*((_DWORD *)i + 46) & 0x400) == 0
      && !(unsigned int)ApiSetIsMouseDeviceOnIgnoreList(i) )
    {
      v0 = 1;
      break;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_l(v3, v2, v4, v5);
  v6 = 16 * v0;
  result = v6 | *(&qword_1C0250FC0 + 1) & 0xFFFFFFEF;
  *(&qword_1C0250FC0 + 1) = v6 | *(&qword_1C0250FC0 + 1) & 0xFFFFFFEF;
  return result;
}
