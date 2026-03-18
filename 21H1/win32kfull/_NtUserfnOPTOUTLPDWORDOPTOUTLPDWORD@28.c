/*
 * XREFs of _NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD@28 @ 0x16CC87
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(int a1, int a2, ULONG a3, ULONG a4, int a5, char a6, int a7)
{
  int v7; // edx
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  int v11; // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v12 = 0;
  v11 = 0;
  v7 = ((int (__stdcall *)(int, int, int *, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, &v12, &v11, a5);
  ms_exc.registration.TryLevel = 0;
  v8 = (_DWORD *)a3;
  if ( a3 )
  {
    if ( a3 >= _MmUserProbeAddress )
      v8 = (_DWORD *)_MmUserProbeAddress;
    *v8 = v12;
  }
  v9 = (_DWORD *)a4;
  if ( a4 )
  {
    if ( a4 >= _MmUserProbeAddress )
      v9 = (_DWORD *)_MmUserProbeAddress;
    *v9 = v11;
  }
  return v7;
}
