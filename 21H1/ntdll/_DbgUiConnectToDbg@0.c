/*
 * XREFs of _DbgUiConnectToDbg@0 @ 0x4B32D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateDebugObject@16 @ 0x4B2F33D0 (_ZwCreateDebugObject@16.c)
 */

int __stdcall DbgUiConnectToDbg()
{
  int v0; // ecx
  _DWORD v2[6]; // [esp+0h] [ebp-18h] BYREF

  v0 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
  {
    memset(&v2[1], 0, 20);
    v2[0] = 24;
    return ZwCreateDebugObject((int)&NtCurrentTeb()->DbgSsReserved[1], 2031631, (int)v2, 1);
  }
  return v0;
}
