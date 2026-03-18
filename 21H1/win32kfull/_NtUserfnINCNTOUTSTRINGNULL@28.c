/*
 * XREFs of _NtUserfnINCNTOUTSTRINGNULL@28 @ 0x16BB16
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINCNTOUTSTRINGNULL(int a1, int a2, unsigned int a3, _WORD *Address, int a5, char a6, int a7)
{
  int v7; // esi
  int v8; // ecx
  SIZE_T v9; // ecx
  int v11; // [esp+10h] [ebp-2Ch] BYREF
  int v12; // [esp+14h] [ebp-28h]
  _WORD *v13; // [esp+18h] [ebp-24h]
  int v14; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v11 = 0;
  v13 = 0;
  v7 = 0;
  ms_exc.registration.TryLevel = 0;
  v8 = (a7 << 31) | a3 & 0x7FFFFFFF;
  v12 = v8;
  if ( !a7 )
  {
    v12 = v8 ^ (v8 ^ (2 * v8)) & 0x7FFFFFFF;
    v8 = v12;
  }
  v9 = v8 & 0x7FFFFFFF;
  if ( v9 < 2 || v9 < a3 )
  {
    v14 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v11 = 0;
    v13 = Address;
    ProbeForWrite(Address, v9, 1u);
    *Address = 0;
    ms_exc.registration.TryLevel = -2;
    return ((int (__stdcall *)(int, int, unsigned int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v11, a5);
  }
  return v7;
}
