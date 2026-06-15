/*
 * XREFs of sub_18001B358 @ 0x18001B358
 * Callers:
 *     PbmRegisterPlaybackManagerNotifications @ 0x1800233A0 (PbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180015700 @ 0x180015700 (sub_180015700.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 */

__int64 __fastcall sub_18001B358(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebx

  v5 = qword_18004FE78;
  v6 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v7 = sub_18001B50C(v5, a2);
  if ( v7 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x13u, &stru_1800445C8, v7);
    }
    sub_180005724("CApplicationManager::RegisterTrackStateNotificationClient", 685, v7);
  }
  else
  {
    sub_180015700(a2, 1, a3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v7;
}
