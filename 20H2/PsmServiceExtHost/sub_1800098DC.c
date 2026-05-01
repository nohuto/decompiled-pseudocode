/*
 * XREFs of sub_1800098DC @ 0x1800098DC
 * Callers:
 *     sub_1800096AC @ 0x1800096AC (sub_1800096AC.c)
 * Callees:
 *     sub_180009444 @ 0x180009444 (sub_180009444.c)
 *     sub_180009A04 @ 0x180009A04 (sub_180009A04.c)
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_18002EA88 @ 0x18002EA88 (sub_18002EA88.c)
 */

int __fastcall sub_1800098DC(__int64 a1, __int64 a2, void *a3)
{
  int v5; // ecx
  void *v6; // r10
  int result; // eax
  HANDLE CurrentProcess; // rbx
  HANDLE v9; // rax
  __int64 v10; // r8

  if ( !(unsigned int)sub_180009A04(*(unsigned int *)(a1 + 136))
    || (*(_BYTE *)(a1 + 128) & 2) != 0
    || v5 < 0
    || v5 >= 4 && v5 != 6
    || (result = sub_18002EA88(v6), result >= 0) && (result = sub_180009444((_QWORD *)(a1 + 112)), result >= 0) )
  {
    if ( !a3
      || (CurrentProcess = GetCurrentProcess(),
          v9 = GetCurrentProcess(),
          result = NtDuplicateObject(v9, a3, CurrentProcess, (PHANDLE)(a1 + 160), 8u, 0, 0),
          result >= 0) )
    {
      v10 = *(unsigned int *)(a1 + 140);
      if ( !(_DWORD)v10 )
        return 0;
      result = sub_180009F08(a1 + 168, 1052672LL, v10);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
