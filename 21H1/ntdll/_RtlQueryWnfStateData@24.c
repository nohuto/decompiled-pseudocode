/*
 * XREFs of _RtlQueryWnfStateData@24 @ 0x4B2AE840
 * Callers:
 *     _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5 (_RtlpFcStartSubscriptionManager@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 */

int __stdcall RtlQueryWnfStateData(
        _DWORD *a1,
        int a2,
        int a3,
        int (__thiscall *a4)(_DWORD, int, int, int, int, int, _DWORD *, int),
        int a5,
        int a6)
{
  void *v6; // esp
  int result; // eax
  int v8; // eax
  _DWORD v9[1029]; // [esp-1000h] [ebp-1048h] BYREF
  int v10; // [esp+14h] [ebp-34h]
  _DWORD *v11; // [esp+18h] [ebp-30h]
  int v12; // [esp+1Ch] [ebp-2Ch] BYREF
  int v13; // [esp+20h] [ebp-28h] BYREF
  int v14; // [esp+24h] [ebp-24h] BYREF
  int v15; // [esp+28h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v11 = a1;
  v14 = a2;
  v15 = a3;
  v10 = a5;
  v6 = alloca(4096);
  ms_exc.old_esp = (DWORD)v9;
  v9[1028] = v9;
  ms_exc.registration.TryLevel = -2;
  v13 = 4096;
  result = NtQueryWnfStateData(&v14, a6, 0, &v12, v9, &v13);
  if ( result >= 0 )
  {
    v8 = v12;
    *v11 = v12;
    return a4(a4, v14, v15, v8, a6, v10, v9, v13);
  }
  return result;
}
