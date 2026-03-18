/*
 * XREFs of _NtUserfnCOPYDATA@28 @ 0x9E3BA
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnCOPYDATA(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  _DWORD *v7; // esi
  SIZE_T *v8; // esi
  int v10; // [esp+10h] [ebp-28h] BYREF
  SIZE_T Length; // [esp+14h] [ebp-24h]
  volatile void *Address; // [esp+18h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v10 = 0;
  Length = 0;
  Address = 0;
  if ( !a4 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (_DWORD *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (_DWORD *)a4;
  v10 = *v7;
  v8 = v7 + 1;
  Length = *v8;
  Address = (volatile void *)v8[1];
  if ( Address )
    ProbeForRead(Address, Length, 1u);
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v10, a5);
}
