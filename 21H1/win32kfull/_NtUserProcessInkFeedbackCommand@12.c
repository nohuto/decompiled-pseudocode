/*
 * XREFs of _NtUserProcessInkFeedbackCommand@12 @ 0x167B4C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z @ 0x1838DD (-InkProcessorProcessInkFeedbackCommand@@YGJIPAXI@Z.c)
 */

BOOL __stdcall NtUserProcessInkFeedbackCommand(int a1, volatile void *Address, SIZE_T Length)
{
  BOOL v3; // ebx
  void *v4; // eax
  void *v5; // edi
  void *v7; // [esp+0h] [ebp-38h]
  unsigned int v8; // [esp+4h] [ebp-34h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  if ( Length )
  {
    ProbeForRead(Address, Length, 1u);
    v4 = (void *)Win32AllocPoolWithQuota(Length, 1768452949);
    v5 = v4;
    if ( v4 )
    {
      memcpy(v4, (const void *)Address, Length);
      v3 = InkProcessorProcessInkFeedbackCommand(Length, v7, v8) >= 0;
      Win32FreePool(v5);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)8);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
