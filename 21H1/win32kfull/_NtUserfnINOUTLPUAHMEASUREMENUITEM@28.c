/*
 * XREFs of _NtUserfnINOUTLPUAHMEASUREMENUITEM@28 @ 0x16C61E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnINOUTLPUAHMEASUREMENUITEM(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  int v8; // [esp+1Ch] [ebp-7Ch]
  _BYTE v9[96]; // [esp+20h] [ebp-78h] BYREF
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  memset(v9, 0, 0x5Cu);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a4, a4, 0x5Cu);
  qmemcpy(v9, a4, 0x5Cu);
  ms_exc.registration.TryLevel = -2;
  v8 = ((int (__stdcall *)(int, int, int, _BYTE *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
  qmemcpy(a4, v9, 0x5Cu);
  return v8;
}
