/*
 * XREFs of _NtUserfnINOUTSTYLECHANGE@28 @ 0x16C85A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINOUTSTYLECHANGE(int a1, int a2, int a3, int *a4, int a5, char a6, int a7)
{
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+10h] [ebp-28h] BYREF
  int v12; // [esp+14h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]
  int v14; // [esp+4Ch] [ebp+14h]

  v11 = 0;
  v12 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  v8 = *a4;
  v9 = a4[1];
  *a4 = *a4;
  a4[1] = v9;
  v11 = v8;
  v12 = v9;
  ms_exc.registration.TryLevel = -2;
  v14 = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v11, a5);
  *a4 = v11;
  a4[1] = v12;
  return v14;
}
