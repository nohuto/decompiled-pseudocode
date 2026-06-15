/*
 * XREFs of sub_180133058 @ 0x180133058
 * Callers:
 *     sub_180132E0C @ 0x180132E0C (sub_180132E0C.c)
 *     sub_180132FD0 @ 0x180132FD0 (sub_180132FD0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180133058(HKEY a1, const WCHAR *a2, __int64 a3, DWORD a4, _WORD *a5)
{
  void *v6; // [rsp+28h] [rbp-20h]
  DWORD v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a5;
  *a5 = 0;
  return RegGetValueW(a1, a2, 0LL, 2u, 0LL, v6, &v7) == 0;
}
