/*
 * XREFs of _xxxSleepTask@8 @ 0x457AA
 * Callers:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     ?HandleProcessSpinning@@YGHXZ @ 0x69E70 (-HandleProcessSpinning@@YGHXZ.c)
 *     _xxxUserYield@4 @ 0x9875A (_xxxUserYield@4.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     __ReplyMessage@4 @ 0xC4C9C (__ReplyMessage@4.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 *     _xxxDirectedYield@4 @ 0x155BCE (_xxxDirectedYield@4.c)
 *     _NtUserWaitForMsgAndEvent@4 @ 0x16B33B (_NtUserWaitForMsgAndEvent@4.c)
 * Callees:
 *     _zzzWakeInputIdle@4 @ 0x4584E (_zzzWakeInputIdle@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 *     _ClientDeliverUserApc@0 @ 0xAB94C (_ClientDeliverUserApc@0.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 *     _InsertTask@8 @ 0x155B50 (_InsertTask@8.c)
 *     _xxxClientWOWTask16SchedNotify@8 @ 0x194E4D (_xxxClientWOWTask16SchedNotify@8.c)
 */

int __fastcall xxxSleepTask(int a1, int a2)
{
  ULONG v2; // ebx
  _DWORD *v3; // edx
  int v4; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  char v9; // cl
  ULONG v10; // ebx
  _DWORD *i; // eax
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  int v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+4h] [ebp-1Ch]
  char v18; // [esp+Fh] [ebp-11h]
  ULONG Count; // [esp+14h] [ebp-Ch]
  ULONG Counta; // [esp+14h] [ebp-Ch]
  NTSTATUS Countb; // [esp+14h] [ebp-Ch]

  v2 = *(_DWORD *)(_gptiCurrent + 232);
  v3 = *(_DWORD **)(_gptiCurrent + 276);
  Count = v2;
  v4 = *(_DWORD *)(v2 + 200);
  if ( v3 && v3[5] == _gptiCurrent )
  {
    v6 = v3[4];
    if ( v6
      && (v3[11] & 0x4010) != 0
      && (v3[11] & 1) == 0
      && (*(_BYTE *)(v6 + 264) & 2) != 0
      && (v4 != *(_DWORD *)(*(_DWORD *)(v6 + 232) + 200) || (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0) )
    {
      DirectedScheduleTask(0, v3);
    }
    v2 = Count;
  }
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 )
    return 0;
  if ( _gptiCurrent == *(_DWORD *)(v4 + 4) )
  {
    if ( _gptiCurrent == *(_DWORD *)(v4 + 32) )
    {
      *(_DWORD *)(v4 + 32) = 0;
      --*(_DWORD *)(v4 + 36);
    }
    *(_DWORD *)(v4 + 4) = 0;
  }
  v7 = a2;
  if ( *(_DWORD *)(v4 + 20) == a2 )
  {
    InsertTask(v2, *(_DWORD *)(_gptiCurrent + 332));
    v7 = a2;
    *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = 15615;
    if ( (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) & *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 4)) != 0 )
    {
      ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 4);
      ++*(_DWORD *)(_gpsi + 4440);
    }
  }
  v8 = *(_DWORD *)(v4 + 4);
  v9 = 0;
  v10 = Count;
  v18 = 0;
  while ( 1 )
  {
    if ( v8 )
      goto LABEL_48;
    if ( *(_DWORD *)(v4 + 28) >= *(_DWORD *)(v4 + 24) )
    {
      while ( 1 )
      {
        for ( i = *(_DWORD **)(v4 + 8); i; i = (_DWORD *)*i )
        {
          if ( (int)i[1] > 0 && (v7 != -1 || i[3] != _gptiCurrent) )
          {
            *(_DWORD *)(v4 + 4) = i[3];
            break;
          }
        }
        if ( v9 )
          break;
        if ( !a1 )
          goto LABEL_41;
        v12 = *(_DWORD *)(v4 + 4);
        if ( v12 )
          goto LABEL_42;
        if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x1000) == 0 )
          goto LABEL_41;
        *(_DWORD *)(v4 + 4) = _gptiCurrent;
        xxxCallHook(0, 0xBu, v16, v17);
        *(_DWORD *)(v4 + 4) = 0;
        a1 = 0;
        v9 = v18;
        v7 = a2;
        if ( *(_DWORD *)(v4 + 28) < *(_DWORD *)(v4 + 24) )
          goto LABEL_35;
      }
      if ( *(_DWORD *)(v4 + 4) == _gptiCurrent )
        break;
    }
LABEL_41:
    v12 = *(_DWORD *)(v4 + 4);
    if ( v12 )
    {
LABEL_42:
      KeSetEvent(*(PRKEVENT *)(v12 + 400), 1, 0);
LABEL_48:
      v14 = a2;
      goto LABEL_49;
    }
LABEL_35:
    if ( (*(_DWORD *)(v10 + 8) & 0x10000) != 0 )
    {
      if ( *(_DWORD *)(v4 + 20) == a2 )
      {
        *(_DWORD *)(v4 + 4) = _gptiCurrent;
        *(_DWORD *)(v10 + 8) &= ~0x10000u;
        InsertTask(v10, *(_DWORD *)(_gptiCurrent + 332));
        v13 = (*(_DWORD *)(v4 + 36))++ == -1;
        if ( v13 )
          *(_DWORD *)(v4 + 32) = _gptiCurrent;
        return 1;
      }
      KeSetEvent(*(PRKEVENT *)(v4 + 16), 1, 0);
      goto LABEL_48;
    }
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x1000) == 0 )
      goto LABEL_48;
    v14 = a2;
    if ( !v9 && *(_DWORD *)(v4 + 20) == a2 )
    {
      zzzWakeInputIdle(_gptiCurrent);
      goto LABEL_48;
    }
LABEL_49:
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 )
      return 0;
    if ( v14 == -1 )
    {
      InsertTask(v10, *(_DWORD *)(_gptiCurrent + 332));
      KeClearEvent(*(PRKEVENT *)(_gptiCurrent + 400));
      return 0;
    }
    v15 = *(_DWORD *)(_gptiCurrent + 492);
    if ( !v15 )
    {
      v15 = Win32AllocPoolNonPaged(20, 1819308885);
      *(_DWORD *)(_gptiCurrent + 492) = v15;
      if ( !v15 )
        return 0;
    }
    *(_DWORD *)(v15 + 12) = *(_DWORD *)(_gptiCurrent + 812);
    if ( *(_DWORD *)(v4 + 20) == a2 )
    {
      Counta = 2;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 492) + 16) = *(_DWORD *)(v4 + 16);
    }
    else
    {
      Counta = 1;
    }
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x800000) != 0 )
      xxxClientWOWTask16SchedNotify(0);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    Countb = KeWaitForMultipleObjects(
               Counta,
               (PVOID *)(*(_DWORD *)(_gptiCurrent + 492) + 12),
               WaitAny,
               WrUserRequest,
               1,
               1u,
               0,
               0);
    EnterCrit(0, 1);
    if ( !Countb )
      xxxRemoveQueueCompletion();
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x800000) != 0 )
      xxxClientWOWTask16SchedNotify(1);
    v9 = 1;
    v18 = 1;
    if ( Countb == 1 )
    {
      *(_DWORD *)(v10 + 8) |= 0x10000u;
    }
    else if ( Countb == 192 )
    {
      ClientDeliverUserApc();
      v9 = 1;
    }
    v8 = *(_DWORD *)(v4 + 4);
    if ( v8 == _gptiCurrent )
      break;
    v7 = a2;
  }
  --*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 4);
  --*(_DWORD *)(_gpsi + 4440);
  InsertTask(v10, *(_DWORD *)(_gptiCurrent + 332));
  *(_DWORD *)(v10 + 8) &= ~0x10000u;
  v13 = (*(_DWORD *)(v4 + 36))++ == -1;
  if ( v13 )
    *(_DWORD *)(v4 + 32) = _gptiCurrent;
  return 0;
}
