/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C0206B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D5020 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D50CC (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v16 = 0;
  v4 = a2;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v9 + 424) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v10 = 5LL;
LABEL_12:
    UserSetLastError(v10, v7, v8);
    return v3;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v16) < 0 || !v16 )
  {
    v10 = 12LL;
    goto LABEL_12;
  }
  v15 = *((_QWORD *)&gObjDummyLock + 2);
  v14 = gObjDummyLock;
  if ( v4 )
    return (int)RegisterModernAppThreadForRawKeyboard(v9);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v9);
}
