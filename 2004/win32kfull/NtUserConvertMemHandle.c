/*
 * XREFs of NtUserConvertMemHandle @ 0x1C0056560
 * Callers:
 *     <none>
 * Callees:
 *     _ConvertMemHandle @ 0x1C00565D0 (_ConvertMemHandle.c)
 */

__int64 __fastcall NtUserConvertMemHandle(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = Size;
  EnterCrit(0LL, 1LL);
  ProbeForRead(Src, v2, 1u);
  v4 = ConvertMemHandle(Src, v2);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
