/*
 * XREFs of _NtUserfnINLPWINDOWPOS@28 @ 0x16C10B
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINLPWINDOWPOS(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  const void *v7; // esi
  int v9; // [esp+0h] [ebp-48h]
  int v10; // [esp+4h] [ebp-44h]
  int v11; // [esp+8h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-3Ch]
  _BYTE v13[28]; // [esp+10h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  memset(v13, 0, sizeof(v13));
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (const void *)a4;
  qmemcpy(v13, v7, sizeof(v13));
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, _BYTE *, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v13,
           a5,
           v9,
           v10,
           v11,
           v12);
}
