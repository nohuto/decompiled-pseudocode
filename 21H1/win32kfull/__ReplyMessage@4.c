/*
 * XREFs of __ReplyMessage@4 @ 0xC4C9C
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 */

int __stdcall _ReplyMessage(int a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v6; // ecx
  int v7; // ecx
  int v8[7]; // [esp+8h] [ebp-28h] BYREF
  _DWORD v9[3]; // [esp+24h] [ebp-Ch] BYREF

  v1 = *(_DWORD *)(_gptiCurrent + 276);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 44);
  if ( (v2 & 1) != 0 )
    return 0;
  v3 = *(_DWORD *)(v1 + 16);
  if ( v3 )
  {
    *(_DWORD *)(v1 + 36) = a1;
    *(_DWORD *)(v1 + 44) = v2 | 1;
    SetWakeBit(v3, 512);
  }
  else if ( (v2 & 0x100) != 0 )
  {
    v6 = v2 | 1;
    v9[2] = 0;
    memset(&v8[4], 0, 12);
    *(_DWORD *)(v1 + 44) = v6;
    if ( (v6 & 4) == 0 )
    {
      v8[0] = 33;
      if ( (v6 & 0x400) != 0 )
        v8[0] = 289;
      v7 = *(_DWORD *)(v1 + 60);
      v8[1] = *(_DWORD *)(v1 + 24);
      v8[2] = *(_DWORD *)(v1 + 28);
      v8[3] = a1;
      v9[0] = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = v9;
      v9[1] = v7;
      if ( v7 )
        HMLockObject(v7);
      xxxInterSendMsgEx(
        *(struct tagPROCESSINFO **)(v1 + 60),
        *(struct tagPROCESSINFO **)(v1 + 56),
        0,
        0,
        0,
        *(_DWORD *)(v1 + 32),
        (int)v8,
        1u,
        (*(_WORD *)(v1 + 46) & 1) == 0);
      ThreadUnlock1();
    }
  }
  v4 = *(_DWORD *)(v1 + 16);
  if ( v4 && ((*(_BYTE *)(v4 + 264) & 2) != 0 || (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0) )
  {
    DirectedScheduleTask(0, v1);
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 && *(_DWORD *)(*(_DWORD *)(v1 + 16) + 272) == v1 )
      xxxSleepTask(1, 0);
  }
  return 1;
}
