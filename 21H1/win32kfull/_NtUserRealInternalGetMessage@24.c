/*
 * XREFs of _NtUserRealInternalGetMessage@24 @ 0x167E36
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserRealInternalGetMessage(
        ULONG a1,
        unsigned int a2,
        struct tagMSG *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int Message; // ebx
  NTSTATUS *v7; // edi
  _DWORD v9[7]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v9, 0, sizeof(v9));
  EnterCrit(0, 1);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x3EC);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage(v9, a2, a3, a4, a5, a6);
    ms_exc.registration.TryLevel = 0;
    v7 = (NTSTATUS *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v7 = (NTSTATUS *)_MmUserProbeAddress;
    qmemcpy(v7, v9, 0x1Cu);
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return Message;
}
