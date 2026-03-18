/*
 * XREFs of _DirectedScheduleTask@16 @ 0x1559F9
 * Callers:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _ClearSendMessages@4 @ 0x719D2 (_ClearSendMessages@4.c)
 *     __ReplyMessage@4 @ 0xC4C9C (__ReplyMessage@4.c)
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 * Callees:
 *     _InsertTask@8 @ 0x155B50 (_InsertTask@8.c)
 *     _WakeWowTask@4 @ 0x155BA7 (_WakeWowTask@4.c)
 */

int __fastcall DirectedScheduleTask(int a1, int a2, int a3, int a4)
{
  bool v7; // zf
  _DWORD *v8; // ecx
  int result; // eax
  _DWORD *v10; // ebx
  _DWORD *v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+20h] [ebp+Ch]

  v7 = (*(_BYTE *)(a1 + 264) & 2) == 0;
  v8 = *(_DWORD **)(*(_DWORD *)(a1 + 232) + 200);
  result = *(_DWORD *)(a2 + 232);
  v12 = v8;
  v10 = *(_DWORD **)(result + 200);
  if ( v7 )
    goto LABEL_11;
  if ( v8[1] == a1 )
  {
    ++*(_DWORD *)(*(_DWORD *)(a1 + 332) + 4);
    ++*(_DWORD *)(_gpsi + 4440);
    result = InsertTask(*(_DWORD *)(a1 + 232), *(_DWORD *)(a1 + 332));
    v8 = v12;
  }
  if ( v8 != v10 || (*(_BYTE *)(a2 + 264) & 2) == 0 )
  {
    if ( a3 )
    {
      ++v8[6];
      *(_DWORD *)(a4 + 44) |= 0x2000u;
    }
    else
    {
      result = v8[7];
      if ( result && (*(_DWORD *)(a4 + 44) & 0x1000) != 0 )
      {
        v8[7] = --result;
        *(_DWORD *)(a4 + 44) &= ~0x1000u;
      }
    }
LABEL_11:
    if ( (*(_BYTE *)(a2 + 264) & 2) == 0 )
      return result;
  }
  ++*(_DWORD *)(*(_DWORD *)(a2 + 332) + 4);
  ++*(_DWORD *)(_gpsi + 4440);
  if ( a3 || a4 == *(_DWORD *)(a2 + 272) )
  {
    v13 = 1;
    --*(_DWORD *)(*(_DWORD *)(a2 + 332) + 8);
  }
  else
  {
    v13 = 0;
  }
  result = InsertTask(*(_DWORD *)(a2 + 232), *(_DWORD *)(a2 + 332));
  if ( v13 )
  {
    ++*(_DWORD *)(*(_DWORD *)(a2 + 332) + 8);
    result = WakeWowTask(a2);
  }
  if ( v12 != v10 || (result = a1, (*(_BYTE *)(a1 + 264) & 2) == 0) )
  {
    if ( a3 )
    {
      ++v10[7];
      *(_DWORD *)(a4 + 44) |= 0x1000u;
    }
    else
    {
      result = v10[6];
      if ( result )
      {
        if ( (*(_DWORD *)(a4 + 44) & 0x2000) != 0 )
        {
          v10[6] = --result;
          *(_DWORD *)(a4 + 44) &= ~0x2000u;
        }
      }
    }
  }
  return result;
}
