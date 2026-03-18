/*
 * XREFs of _xxxClientFreeWindowClassExtraBytes@8 @ 0xA270A
 * Callers:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x436D4 (--1ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QAE@XZ @ 0x4372E (--0ReleaseAndReacquirePerObjectLocks@@QAE@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QAE@XZ @ 0x45044 (--1LeaveEnterCritProperDisposition@@QAE@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QAE@XZ @ 0x477AA (--0LeaveEnterCritProperDisposition@@QAE@XZ.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(int a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  _DWORD v5[2]; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+14h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-8h] BYREF
  char v8; // [esp+1Eh] [ebp-2h] BYREF
  char v9; // [esp+1Fh] [ebp-1h] BYREF

  v6 = 0;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v5[0] = *(_DWORD *)(a1 + 20) - *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 256);
  v5[1] = a2;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(124);
  KeUserModeCallback(124, v5, 8, &v6, &v7);
  EtwTraceEndCallback(124);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8);
}
