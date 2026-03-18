/*
 * XREFs of _NtUserfnINOUTNEXTMENU@28 @ 0x16C7A3
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINOUTNEXTMENU(int a1, int a2, int a3, _DWORD *a4, int a5, char a6, int a7)
{
  int v9; // [esp+10h] [ebp-2Ch] BYREF
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]
  int v13; // [esp+50h] [ebp+14h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  *a4 = *a4;
  a4[1] = a4[1];
  a4[2] = a4[2];
  v9 = *a4;
  v10 = a4[1];
  v11 = a4[2];
  ms_exc.registration.TryLevel = -2;
  v13 = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v9, a5);
  *a4 = v9;
  a4[1] = v10;
  a4[2] = v11;
  return v13;
}
