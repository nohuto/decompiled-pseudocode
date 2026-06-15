/*
 * XREFs of sub_180015700 @ 0x180015700
 * Callers:
 *     sub_18001B358 @ 0x18001B358 (sub_18001B358.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180015700(__int64 a1, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( a3 == -1 || a3 == 12 )
  {
    v6 = *(_DWORD *)(a1 + 480);
    if ( a2 )
    {
      v7 = v6 | (1 << a3);
    }
    else if ( a3 == -1 )
    {
      v7 = v6 & 0xFFFFEFFF;
    }
    else
    {
      v7 = v6 & ~(1 << a3);
    }
    *(_DWORD *)(a1 + 480) = v7;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
