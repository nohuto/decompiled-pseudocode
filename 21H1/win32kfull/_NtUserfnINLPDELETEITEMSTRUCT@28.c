/*
 * XREFs of _NtUserfnINLPDELETEITEMSTRUCT@28 @ 0x16BC97
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINLPDELETEITEMSTRUCT(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  const void *v7; // esi
  int v9; // [esp+0h] [ebp-40h]
  int v10; // [esp+4h] [ebp-3Ch]
  int v11; // [esp+8h] [ebp-38h]
  int v12; // [esp+Ch] [ebp-34h]
  _BYTE v13[20]; // [esp+10h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

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
