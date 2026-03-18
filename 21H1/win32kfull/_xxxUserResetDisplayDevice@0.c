/*
 * XREFs of _xxxUserResetDisplayDevice@0 @ 0xD38BE
 * Callers:
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxUserResetDisplayDevice()
{
  int result; // eax
  int v1; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v4[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = _grpdeskRitInput;
  if ( _grpdeskRitInput )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(-1);
    v4[2] = 0;
    _gpqCursor = 0;
    zzzInternalSetCursorPos(*(struct tagPOINT **)(_gpsi + 4428), *(_DWORD *)(_gpsi + 4432), 2, 1);
    SetPointerInternal(1, 6);
    v1 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v4[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v4;
    v4[1] = v1;
    if ( v1 )
      HMLockObject(v1);
    xxxRedrawWindow(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), 0, 0, 645);
    ThreadUnlock1();
    return EtwTracexxxUserResetDisplayDeviceEnd(-1);
  }
  return result;
}
