/*
 * XREFs of _xxxDesktopThreadWaiter@8 @ 0xA6EF2
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxDesktopThread@4 @ 0xE3DD4 (_xxxDesktopThread@4.c)
 * Callees:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _zzzWakeInputIdle@4 @ 0x4584E (_zzzWakeInputIdle@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SleepInputIdle@4 @ 0xA709C (_SleepInputIdle@4.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxDesktopThreadWaiter(char a1, int a2)
{
  int v3; // eax
  int v4; // edi
  char v5; // bh
  int v6; // eax
  LeaveEnterCrit *v7; // ecx
  bool v8; // al
  int result; // eax
  struct tagTHREADINFO *v10; // [esp+0h] [ebp-48h]
  int v11; // [esp+4h] [ebp-44h]
  _DWORD v12[2]; // [esp+14h] [ebp-34h] BYREF
  int v13; // [esp+1Ch] [ebp-2Ch]
  struct IRegisterInputDispatcherObjects *v14; // [esp+28h] [ebp-20h]
  char v15; // [esp+2Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v13 = a2;
  v3 = dword_2742DC;
  if ( _gptiCurrent != _gTermIO[2] )
    v3 = dword_2742D8;
  v14 = (struct IRegisterInputDispatcherObjects *)v3;
  v4 = *(_DWORD *)(v3 + 40);
  v5 = 0;
  if ( !a1 )
    goto LABEL_27;
  *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = 15615;
  KeClearEvent(*(PRKEVENT *)(_gptiCurrent + 400));
  if ( (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 4) & 0x1CFF) != 0 )
    goto LABEL_20;
  if ( !a1 )
  {
LABEL_27:
    xxxSleepTask(0, 0);
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x400) == 0 || (result = CheckProcessForeground(v10), result >= 0) )
  {
    ms_exc.registration.TryLevel = 0;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 4) = 0;
    ms_exc.registration.TryLevel = -2;
    if ( _gptiCurrent == _gptiForeground
      && ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0, 0, 0xBu, (int)v10, v11);
    }
    xxxUpdateInputHangInfo(0, 0);
    zzzWakeInputIdle(_gptiCurrent);
    while ( 1 )
    {
LABEL_9:
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v15);
      if ( a1 )
      {
        v6 = LegacyInputDispatcher::WaitAndDispatch(v14);
      }
      else
      {
        v12[0] = 0;
        v12[1] = 1536;
        v4 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(_gpMouseSensor, (struct CEventBitmap *)v12, v14);
        if ( v4 < 0 )
          goto LABEL_13;
        v6 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v14);
      }
      v4 = v6;
LABEL_13:
      LeaveEnterCrit::~LeaveEnterCrit(v7);
      if ( v4 != *((_DWORD *)v14 + 10) )
        goto LABEL_35;
      v8 = xxxRemoveQueueCompletion();
      if ( a1 )
      {
LABEL_15:
        if ( !v5 )
        {
          if ( a1 )
            xxxUpdateInputHangInfo(0, 1);
          if ( v4 == *((_DWORD *)v14 + 10) )
          {
            SleepInputIdle(_gptiCurrent);
            v4 = a1 != 0 ? v4 : 0;
          }
LABEL_20:
          if ( a1 )
            *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = 0;
          return v4;
        }
      }
      else
      {
        if ( !v8 || (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) & 8) != 0 && (v13 & 8) != 0 )
        {
LABEL_35:
          v5 = 0;
          goto LABEL_15;
        }
        v5 = 1;
      }
    }
  }
  return result;
}
