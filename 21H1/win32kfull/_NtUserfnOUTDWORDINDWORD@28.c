/*
 * XREFs of _NtUserfnOUTDWORDINDWORD@28 @ 0x16CE7B
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnOUTDWORDINDWORD(int a1, int a2, ULONG a3, int a4, int a5, char a6, int a7)
{
  int v7; // edx
  _DWORD *v8; // ecx
  int v10; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v10 = 0;
  v7 = ((int (__stdcall *)(int, int, int *, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, &v10, a4, a5);
  ms_exc.registration.TryLevel = 0;
  v8 = (_DWORD *)a3;
  if ( a3 >= _MmUserProbeAddress )
    v8 = (_DWORD *)_MmUserProbeAddress;
  *v8 = v10;
  return v7;
}
