/*
 * XREFs of _NtUserfnOUTLPTITLEBARINFOEX@28 @ 0x16D188
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnOUTLPTITLEBARINFOEX(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  int v8; // [esp+20h] [ebp-ACh]
  _DWORD v9[36]; // [esp+24h] [ebp-A8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B4h] [ebp-18h]

  memset(v9, 0, 0x8Cu);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  qmemcpy(a4, a4, 0x8Cu);
  qmemcpy(v9, a4, 0x8Cu);
  if ( v9[0] == 140 )
  {
    ms_exc.registration.TryLevel = -2;
    v8 = ((int (__stdcall *)(int, int, int, _DWORD *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
    ms_exc.registration.TryLevel = 1;
    qmemcpy(a4, v9, 0x8Cu);
  }
  else
  {
    v8 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  return v8;
}
