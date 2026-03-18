/*
 * XREFs of _NtUserPeekMessage@24 @ 0x686A0
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __stdcall NtUserPeekMessage(ULONG a1, int a2, int a3, int a4, int a5, char a6)
{
  PKTHREAD CurrentThread; // edi
  int v7; // esi
  int *ThreadWin32Thread; // eax
  int Message; // ebx
  void *v11; // edi
  _DWORD v12[7]; // [esp+10h] [ebp-4Ch] BYREF
  union _LARGE_INTEGER Timeout; // [esp+2Ch] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  if ( (a6 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
    }
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v7 + 812), WrUserRequest, 1, 0, &Timeout) == 258 )
      return 0;
    if ( (a6 & 2) != 0 )
    {
      ms_exc.registration.TryLevel = 0;
      --*(_DWORD *)(*(_DWORD *)(v7 + 260) + 4);
      ms_exc.registration.TryLevel = -2;
    }
  }
  memset(v12, 0, sizeof(v12));
  EnterCrit(0, 1);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
    Message = 0;
  }
  else
  {
    Message = xxxInternalGetMessage(a3, a4, a5, 0);
    if ( Message )
    {
      ms_exc.registration.TryLevel = 1;
      v11 = (void *)a1;
      if ( a1 >= _MmUserProbeAddress )
        v11 = (void *)_MmUserProbeAddress;
      qmemcpy(v11, v12, 0x1Cu);
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return Message;
}
