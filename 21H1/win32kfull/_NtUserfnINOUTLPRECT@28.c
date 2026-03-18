/*
 * XREFs of _NtUserfnINOUTLPRECT@28 @ 0x16C3D8
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserfnINOUTLPRECT(int a1, int a2, int a3, int *a4, int a5, char a6, int a7)
{
  int *v7; // esi
  int *v8; // esi
  int v10; // [esp+18h] [ebp-30h]
  int v11; // [esp+1Ch] [ebp-2Ch] BYREF
  int v12; // [esp+20h] [ebp-28h]
  int v13; // [esp+24h] [ebp-24h]
  int v14; // [esp+28h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)_MmUserProbeAddress;
  if ( (unsigned int)a4 < _MmUserProbeAddress )
    v7 = a4;
  v11 = *v7;
  v8 = v7 + 1;
  v12 = *v8++;
  v13 = *v8;
  v14 = v8[1];
  ms_exc.registration.TryLevel = -2;
  v10 = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v11, a5);
  *a4 = v11;
  a4[1] = v12;
  a4[2] = v13;
  a4[3] = v14;
  return v10;
}
