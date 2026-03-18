/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C011C480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // ebx
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  String = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  v6 = 0;
  if ( v4 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)a1;
    String.Buffer = *(PWSTR *)(a1 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v4 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v4 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87LL, v2, v5);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v6 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v3, v2, v5);
  return v6;
}
