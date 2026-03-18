/*
 * XREFs of _NtUserfnINLPUAHINITMENU@28 @ 0x16BFE0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINLPUAHINITMENU(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  int *v7; // esi
  int *v8; // esi
  int v10; // [esp+0h] [ebp-38h]
  int v11; // [esp+4h] [ebp-34h]
  int v12; // [esp+8h] [ebp-30h]
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+18h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (int *)a4;
  v14 = *v7;
  v8 = v7 + 1;
  v15 = *v8;
  v16 = v8[1];
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, int *, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v14,
           a5,
           v10,
           v11,
           v12,
           v13);
}
