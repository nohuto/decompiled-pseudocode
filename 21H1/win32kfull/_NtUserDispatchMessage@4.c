/*
 * XREFs of _NtUserDispatchMessage@4 @ 0x45A6E
 * Callers:
 *     <none>
 * Callees:
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserDispatchMessage(ULONG a1)
{
  int v1; // ebx
  const void *v2; // esi
  unsigned int v3; // esi
  int v4; // eax
  int v5; // eax
  _DWORD v7[7]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v7, 0, sizeof(v7));
  v1 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v2 = (const void *)_MmUserProbeAddress;
  if ( a1 < _MmUserProbeAddress )
    v2 = (const void *)a1;
  qmemcpy(v7, v2, sizeof(v7));
  ms_exc.registration.TryLevel = -2;
  v3 = v7[1];
  if ( (v7[1] & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
  }
  else if ( v7[0]
         && ((v4 = ValidateHwnd(v7[0])) != 0
          && (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 10) & 4) != 0
          && *(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) != *(_DWORD *)(_gptiCurrent + 232)
          || ((v3 = v7[1], IsPointerInputMessageWithState()) || IsPointerParentNotify())
          && v7[3] >= (unsigned int)_MmSystemRangeStart)
         || (v3 >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[v3] >> 13) & 1), v5) )
  {
    UserSetLastError(5);
  }
  else
  {
    v1 = xxxDispatchMessage(v7);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
