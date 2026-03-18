/*
 * XREFs of ?HandleProcessSpinning@@YGHXZ @ 0x69E70
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8 (--0LeaveEnterCrit@@QAE@XZ.c)
 *     ??1LeaveEnterCrit@@QAE@XZ @ 0xAEFC8 (--1LeaveEnterCrit@@QAE@XZ.c)
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C (-UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z.c)
 *     _xxxDirectedYield@4 @ 0x155BCE (_xxxDirectedYield@4.c)
 */

int __stdcall HandleProcessSpinning()
{
  int v0; // eax
  BOOL v1; // ecx
  int v3; // edx
  int v4; // eax
  LeaveEnterCrit *v5; // ecx
  PriorityBoost *v6; // [esp+0h] [ebp-38h]
  struct tagTHREADINFO *v7; // [esp+4h] [ebp-34h]
  char v8; // [esp+1Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v0 = *(_DWORD *)(_gptiCurrent + 260);
  v1 = *(_DWORD *)(v0 + 4) >= 0x64u;
  if ( *(_DWORD *)(v0 + 4) >= 0x64u )
  {
    *(_DWORD *)(v0 + 4) = 0;
    v3 = *(_DWORD *)(_gptiCurrent + 264);
    if ( (v3 & 0x400) == 0 )
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 20) = v3 | 0x400;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v1 )
  {
    v4 = *(_DWORD *)(_gptiCurrent + 264);
    if ( (v4 & 0x400) == 0 )
    {
      *(_DWORD *)(_gptiCurrent + 264) = v4 | 0x400;
      PriorityBoost::UpdateProcessPriorityForSpinning(v6, v7);
      v4 = *(_DWORD *)(_gptiCurrent + 264);
    }
    if ( (v4 & 2) != 0 )
    {
      xxxSleepTask(0, -1);
      if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v8);
      ZwYieldExecution();
      LeaveEnterCrit::~LeaveEnterCrit(v5);
      xxxDirectedYield(-1);
    }
  }
  return 1;
}
