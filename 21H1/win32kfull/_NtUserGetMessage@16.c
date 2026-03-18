/*
 * XREFs of _NtUserGetMessage@16 @ 0x9343A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetMessage(ULONG a1, int a2, int a3, int a4)
{
  int Message; // ebx
  void *v5; // edi
  _BYTE v7[28]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v7, 0, sizeof(v7));
  EnterCrit(0, 1);
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    Message = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    Message = xxxInternalGetMessage(a3, a4, 1, 1);
    ms_exc.registration.TryLevel = 0;
    v5 = (void *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v5 = (void *)_MmUserProbeAddress;
    qmemcpy(v5, v7, 0x1Cu);
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return Message;
}
