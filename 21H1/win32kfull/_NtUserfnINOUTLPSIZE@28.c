/*
 * XREFs of _NtUserfnINOUTLPSIZE@28 @ 0x16C55D
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINOUTLPSIZE(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  int *v7; // ecx
  _DWORD *v8; // esi
  int v10; // [esp+10h] [ebp-28h] BYREF
  int v11; // [esp+14h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]
  int v13; // [esp+4Ch] [ebp+14h]

  v10 = 0;
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)_MmUserProbeAddress;
  v8 = (_DWORD *)a4;
  if ( a4 < _MmUserProbeAddress )
    v7 = (int *)a4;
  v10 = *v7;
  v11 = v7[1];
  ms_exc.registration.TryLevel = -2;
  v13 = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v10, a5);
  ms_exc.registration.TryLevel = 1;
  if ( (unsigned int)v8 >= _MmUserProbeAddress )
    v8 = (_DWORD *)_MmUserProbeAddress;
  *v8 = v10;
  v8[1] = v11;
  return v13;
}
