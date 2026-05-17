/*
 * XREFs of _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 */

int __stdcall RtlQueryWnfStateDataWithExplicitScope(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int (__thiscall *a5)(_DWORD, int, int, int, int, int, _DWORD *, int),
        int a6,
        int a7)
{
  void *v7; // esp
  int result; // eax
  int v9; // eax
  _DWORD v10[1029]; // [esp-1000h] [ebp-104Ch] BYREF
  int v11; // [esp+14h] [ebp-38h]
  _DWORD *v12; // [esp+18h] [ebp-34h]
  _DWORD v13[2]; // [esp+1Ch] [ebp-30h] BYREF
  int v14; // [esp+24h] [ebp-28h] BYREF
  int v15; // [esp+28h] [ebp-24h] BYREF
  int v16; // [esp+2Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v12 = a1;
  v15 = a2;
  v16 = a3;
  v13[1] = a4;
  v11 = a6;
  v7 = alloca(4096);
  ms_exc.old_esp = (DWORD)v10;
  v10[1028] = v10;
  ms_exc.registration.TryLevel = -2;
  v14 = 4096;
  result = NtQueryWnfStateData((int)&v15, a7, a4, (int)v13, (int)v10, (int)&v14);
  if ( result >= 0 )
  {
    v9 = v13[0];
    *v12 = v13[0];
    return a5(a5, v15, v16, v9, a7, v11, v10, v14);
  }
  return result;
}
