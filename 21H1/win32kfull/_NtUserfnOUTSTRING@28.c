/*
 * XREFs of _NtUserfnOUTSTRING@28 @ 0xA37B6
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnOUTSTRING(int a1, int a2, unsigned int a3, _BYTE *Address, int a5, char a6, int a7)
{
  int v7; // ecx
  int v8; // esi
  int v10; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+14h] [ebp-2Ch]
  _BYTE *v12; // [esp+18h] [ebp-28h]
  int v13; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v10 = 0;
  v12 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = (a7 << 31) | a3 & 0x7FFFFFFF;
  v11 = v7;
  if ( !a7 )
  {
    v11 = v7 ^ (v7 ^ (2 * v7)) & 0x7FFFFFFF;
    v7 = v11;
  }
  if ( (v7 & 0x7FFFFFFFu) < a3 )
  {
    v8 = 0;
    v13 = 0;
    UserSetLastError(0);
LABEL_10:
    ms_exc.registration.TryLevel = -2;
    return v8;
  }
  v10 = 0;
  v12 = Address;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    ProbeForWrite(Address, v7 & 0x7FFFFFFF, 1u);
  }
  else if ( Address )
  {
    ProbeForWrite(Address, (v7 >> 31) + 2, 1u);
  }
  ms_exc.registration.TryLevel = -2;
  v8 = ((int (__stdcall *)(int, int, unsigned int, int *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, &v10, a5);
  if ( !v8 && a3 )
  {
    ms_exc.registration.TryLevel = 1;
    if ( a7 )
      *Address = 0;
    else
      *(_WORD *)Address = 0;
    goto LABEL_10;
  }
  return v8;
}
