/*
 * XREFs of _NtGdiDdDDIGetPresentQueueEvent@8 @ 0x1D45B4
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiDdDDIGetPresentQueueEvent(int a1, ULONG a2)
{
  int PresentQueueEvent; // esi
  _DWORD *v3; // ecx
  HANDLE Handle; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  Handle = 0;
  PresentQueueEvent = 0;
  if ( !UserUnsafeIsCurrentProcessDwm() )
    PresentQueueEvent = -1073741790;
  if ( PresentQueueEvent < 0 )
    goto LABEL_8;
  PresentQueueEvent = GreSfmGetPresentQueueEvent(a1, &Handle);
  if ( PresentQueueEvent < 0 )
    goto LABEL_8;
  ms_exc.registration.TryLevel = 0;
  v3 = (_DWORD *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v3 = (_DWORD *)_MmUserProbeAddress;
  *v3 = Handle;
  ms_exc.registration.TryLevel = -2;
  if ( PresentQueueEvent < 0 )
  {
LABEL_8:
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  return PresentQueueEvent;
}
