/*
 * XREFs of _NtUserfnINSIZECLIPBRD@28 @ 0x16CAAD
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserfnINSIZECLIPBRD(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  int *v7; // esi
  int *v8; // esi
  int v10; // [esp+0h] [ebp-40h]
  int v11; // [esp+4h] [ebp-3Ch]
  int v12; // [esp+8h] [ebp-38h]
  int v13; // [esp+Ch] [ebp-34h]
  int v14; // [esp+10h] [ebp-30h]
  int v15; // [esp+14h] [ebp-2Ch] BYREF
  int v16; // [esp+18h] [ebp-28h]
  int v17; // [esp+1Ch] [ebp-24h]
  int v18; // [esp+20h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v7 = (int *)a4;
  v15 = *v7;
  v8 = v7 + 1;
  v16 = *v8++;
  v17 = *v8;
  v18 = v8[1];
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, int *, int, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v15,
           a5,
           v10,
           v11,
           v12,
           v13,
           v14);
}
