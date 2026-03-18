/*
 * XREFs of _NtUserGetDManipHookInitFunction@8 @ 0xAD6D6
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetDManipHookInitFunction(volatile void *Address, volatile void *a2)
{
  unsigned int v3; // [esp+0h] [ebp-34h]
  unsigned int v4; // [esp+0h] [ebp-34h]
  const unsigned __int16 *v5; // [esp+4h] [ebp-30h]
  const unsigned __int16 *v6; // [esp+4h] [ebp-30h]

  EnterSharedCrit(0, 1);
  ProbeForWrite(Address, 0x208u, 1u);
  ProbeForWrite(a2, 0x208u, 1u);
  RtlStringCchCopyW(260, (char *)Address, &gszModuleDManipHook, v3, v5);
  RtlStringCchCopyW(260, (char *)a2, L"InitializeDManipHook", v4, v6);
  UserSessionSwitchLeaveCrit();
  return 1;
}
