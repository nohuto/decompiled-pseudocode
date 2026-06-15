/*
 * XREFs of sub_180015640 @ 0x180015640
 * Callers:
 *     sub_18001B274 @ 0x18001B274 (sub_18001B274.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180023460 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180015640(__int64 a1, int a2, int a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( a3 != -1 && a3 )
    goto LABEL_12;
  if ( a2 )
  {
    if ( ++*(_DWORD *)(a1 + 536) != 1 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 480) | (1 << a3);
  }
  else
  {
    if ( a3 == -1 )
    {
      *(_DWORD *)(a1 + 536) = 0;
      *(_DWORD *)(a1 + 480) &= ~1u;
      goto LABEL_12;
    }
    v7 = *(_DWORD *)(a1 + 536);
    if ( !v7 )
      goto LABEL_12;
    v8 = v7 - 1;
    *(_DWORD *)(a1 + 536) = v8;
    if ( v8 )
      goto LABEL_12;
    v6 = *(_DWORD *)(a1 + 480) & ~(1 << a3);
  }
  *(_DWORD *)(a1 + 480) = v6;
LABEL_12:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
