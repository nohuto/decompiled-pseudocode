/*
 * XREFs of _NtUserGetClipboardAccessToken@8 @ 0x161E7B
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserGetClipboardAccessToken(ULONG a1, ACCESS_MASK DesiredAccess)
{
  BOOL v2; // ebx
  void *v3; // ecx
  _DWORD *v4; // ecx
  _DWORD v6[2]; // [esp+10h] [ebp-2Ch] BYREF
  void *Handle; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v6[0] = 0x2000;
  v6[1] = -1;
  Handle = 0;
  EnterCrit(0, 1);
  if ( (unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v6)
    && (v3 = *(void **)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 20) + 84)) != 0 )
  {
    v2 = ObOpenObjectByPointer(v3, 0, 0, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    ms_exc.registration.TryLevel = 0;
    v4 = (_DWORD *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v4 = (_DWORD *)_MmUserProbeAddress;
    *v4 = Handle;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v2 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
