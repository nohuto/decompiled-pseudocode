/*
 * XREFs of _NtUserfnOUTLPCOMBOBOXINFO@28 @ 0x11622
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnOUTLPCOMBOBOXINFO(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  int v8; // [esp+1Ch] [ebp-54h]
  _BYTE v9[56]; // [esp+20h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  memset(v9, 0, 0x34u);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a4, a4, 0x34u);
  qmemcpy(v9, a4, 0x34u);
  ms_exc.registration.TryLevel = -2;
  v8 = ((int (__stdcall *)(int, int, int, _BYTE *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
  qmemcpy(a4, v9, 0x34u);
  return v8;
}
