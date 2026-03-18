/*
 * XREFs of _NtUserfnINLPHELPINFOSTRUCT@28 @ 0x16BD1D
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINLPHELPINFOSTRUCT(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  int v7; // ebx
  const void *v8; // esi
  _DWORD v10[9]; // [esp+10h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v10, 0, 0x1Cu);
  v7 = 0;
  ms_exc.registration.TryLevel = 0;
  v8 = (const void *)_MmUserProbeAddress;
  if ( a4 < _MmUserProbeAddress )
    v8 = (const void *)a4;
  qmemcpy(v10, v8, 0x1Cu);
  if ( v10[0] == 28 )
  {
    ms_exc.registration.TryLevel = -2;
    return ((int (__stdcall *)(int, int, int, _DWORD *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v10, a5);
  }
  else
  {
    v10[8] = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
  }
  return v7;
}
