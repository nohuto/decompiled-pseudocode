/*
 * XREFs of __EnableModernAppWindowKeyboardIntercept@8 @ 0x16D736
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _RegisterModernAppThreadForRawKeyboard@4 @ 0x14438A (_RegisterModernAppThreadForRawKeyboard@4.c)
 *     _UnregisterModernAppThreadForRawKeyboard@4 @ 0x14441B (_UnregisterModernAppThreadForRawKeyboard@4.c)
 */

int __stdcall _EnableModernAppWindowKeyboardIntercept(int a1, int a2)
{
  int v2; // ebx
  _DWORD *CurrentProcessWin32Process; // eax
  _DWORD *v4; // edi
  int v5; // edx
  int v6; // esi
  int i; // ecx
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-Ch] BYREF
  char v11; // [esp+13h] [ebp-1h] BYREF

  v2 = 0;
  v11 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
  v4 = *(_DWORD **)(a1 + 8);
  if ( (_DWORD *)v4[58] == CurrentProcessWin32Process
    && (HasImmersiveAppRight(CurrentProcessWin32Process) || IsImmersiveBroker(v5)) )
  {
    RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
    if ( (int)RtlCapabilityCheck(0, &DestinationString, &v11) >= 0 && v11 )
    {
      v6 = gObjDummyLock;
      for ( i = 3; i; --i )
        v6 += 4;
      if ( a2 )
        return RegisterModernAppThreadForRawKeyboard(v4);
      else
        return UnregisterModernAppThreadForRawKeyboard(v4);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0xC);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  return v2;
}
