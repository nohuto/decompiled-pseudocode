/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C0204130
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C00459C8 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx

  v4 = a1;
  EnterCrit(0LL, 1LL);
  v6 = zzzSetWindowsHookEx(0LL, 0LL, gptiCurrent, v4, a2, a3);
  v10 = v6;
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v8 = byte_1C02EA461;
      if ( (byte_1C02EA461[v4] & 8) == 0 )
        v10 = 0LL;
    }
    if ( v10 != -1 && v10 )
      v10 = *(_QWORD *)v10;
  }
  else
  {
    v10 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
