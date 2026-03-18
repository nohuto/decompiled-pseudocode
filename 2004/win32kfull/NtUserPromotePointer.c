/*
 * XREFs of NtUserPromotePointer @ 0x1C02011F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01F0D14 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx

  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  v6 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( v6 <= 0x10000
      || v6 > 0x10002 && (v6 <= 0x20000 || v6 > 0x20002 && (v6 <= 0x40000 || v6 > 0x40002 && v6 - 524289 > 1)) )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v8 = 0;
    UserSetLastError(87LL, v4, v5);
    goto LABEL_16;
  }
  v8 = xxxPromotePointerToMouse(a1, a2);
  if ( !v8 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v7, v4, v5);
  return v8;
}
