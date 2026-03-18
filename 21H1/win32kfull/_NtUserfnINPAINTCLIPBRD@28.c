/*
 * XREFs of _NtUserfnINPAINTCLIPBRD@28 @ 0x16C912
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnINPAINTCLIPBRD(int a1, int a2, int a3, ULONG a4, int a5, int a6, int a7)
{
  const void *v7; // esi
  int v9; // [esp+0h] [ebp-74h]
  int v10; // [esp+4h] [ebp-70h]
  int v11; // [esp+8h] [ebp-6Ch]
  int v12; // [esp+Ch] [ebp-68h]
  int v13; // [esp+10h] [ebp-64h]
  _BYTE v14[68]; // [esp+18h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  memset(v14, 0, 0x40u);
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (const void *)a4;
  qmemcpy(v14, v7, 0x40u);
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, _BYTE *, int, int, int, int, int, int, int))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v14,
           a5,
           v9,
           v10,
           v11,
           v12,
           v13,
           a6);
}
