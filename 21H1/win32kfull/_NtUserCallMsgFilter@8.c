/*
 * XREFs of _NtUserCallMsgFilter@8 @ 0x94C5A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCallMsgFilter(void *a1, int a2)
{
  int v2; // ebx
  int v4[7]; // [esp+10h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  memset(v4, 0, sizeof(v4));
  v2 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a1, a1, 0x1Cu);
  qmemcpy(v4, a1, sizeof(v4));
  ms_exc.registration.TryLevel = -2;
  if ( (v4[1] & 0xFFFE0000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    v2 = xxxCallMsgFilter((int)v4);
    qmemcpy(a1, v4, 0x1Cu);
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
