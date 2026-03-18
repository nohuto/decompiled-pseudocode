/*
 * XREFs of _NtUserfnOUTLPRECT@28 @ 0x16D034
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserfnOUTLPRECT(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  _DWORD *v7; // ebx
  int v8; // edx
  int v10; // [esp+14h] [ebp-2Ch] BYREF
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+1Ch] [ebp-24h]
  int v13; // [esp+20h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v7 = (_DWORD *)a4;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v10, a5);
  ms_exc.registration.TryLevel = 0;
  if ( a4 >= _MmUserProbeAddress )
    v7 = (_DWORD *)_MmUserProbeAddress;
  *v7 = v10;
  v7[1] = v11;
  v7[2] = v12;
  v7[3] = v13;
  return v8;
}
