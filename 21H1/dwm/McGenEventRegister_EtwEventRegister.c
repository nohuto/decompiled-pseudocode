/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140001B8C
 * Callers:
 *     WinMain @ 0x1400018F0 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventRegister_EtwEventRegister(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*a4 )
    return EtwEventRegister(a1, McGenControlCallbackV2);
  return result;
}
