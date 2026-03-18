/*
 * XREFs of _NtUserfnINOUTLPPOINT5@28 @ 0x16C313
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserfnINOUTLPPOINT5(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  int v8; // [esp+18h] [ebp-48h]
  _BYTE v9[44]; // [esp+1Ch] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  memset(v9, 0, 0x28u);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a4, a4, 0x28u);
  qmemcpy(v9, a4, 0x28u);
  ms_exc.registration.TryLevel = -2;
  v8 = ((int (__stdcall *)(int, int, int, _BYTE *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
  qmemcpy(a4, v9, 0x28u);
  return v8;
}
