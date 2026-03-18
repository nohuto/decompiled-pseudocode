/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C0207A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D5CE0 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D5D8C (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v15 = 0;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v8 + 416) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v9 = 5LL;
LABEL_12:
    UserSetLastError(v9, v6, v7);
    return v2;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v15) < 0 || !v15 )
  {
    v9 = 12LL;
    goto LABEL_12;
  }
  v14 = *((_QWORD *)&gObjDummyLock + 2);
  v13 = gObjDummyLock;
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v8);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v8);
}
