/*
 * XREFs of _NtUserfnINCNTOUTSTRING@28 @ 0x16BA15
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINCNTOUTSTRING(int a1, int a2, int a3, unsigned __int16 *Address, int a5, char a6, int a7)
{
  unsigned __int16 *v7; // ecx
  unsigned int v8; // edx
  SIZE_T v9; // edx
  int result; // eax
  int v11; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-2Ch]
  unsigned __int16 *v13; // [esp+18h] [ebp-28h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v11 = 0;
  v13 = 0;
  ms_exc.registration.TryLevel = 0;
  v12 = a7 << 31;
  v7 = Address;
  if ( (unsigned int)Address >= _MmUserProbeAddress )
    v7 = (unsigned __int16 *)_MmUserProbeAddress;
  v8 = *v7 | v12 & 0x80000000;
  v12 = v8;
  if ( !a7 )
  {
    v8 = (2 * v8) | v8 & 0x80000000;
    v12 = v8;
  }
  v9 = v8 & 0x7FFFFFFF;
  if ( v9 < 2 )
    return 0;
  v11 = 0;
  v13 = Address;
  ProbeForWrite(Address, v9, 1u);
  ms_exc.registration.TryLevel = -2;
  result = ((int (__stdcall *)(int, int, int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v11, a5);
  if ( !result )
  {
    ms_exc.registration.TryLevel = 1;
    if ( a7 )
      *(_BYTE *)Address = 0;
    else
      *Address = 0;
  }
  return result;
}
