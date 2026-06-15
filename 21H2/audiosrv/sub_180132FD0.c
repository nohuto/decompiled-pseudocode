/*
 * XREFs of sub_180132FD0 @ 0x180132FD0
 * Callers:
 *     sub_180132E0C @ 0x180132E0C (sub_180132E0C.c)
 * Callees:
 *     sub_180133058 @ 0x180133058 (sub_180133058.c)
 */

__int64 __fastcall sub_180132FD0(int a1, HKEY a2, int a3, _WORD *a4)
{
  int v7; // r8d
  unsigned int v9; // ebx
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = a2;
  *a4 = 0;
  if ( RegOpenCurrentUser(1u, &hKey) )
    return 0LL;
  v9 = sub_180133058((_DWORD)hKey, a1, v7, a3, (__int64)a4);
  RegCloseKey(hKey);
  return v9;
}
