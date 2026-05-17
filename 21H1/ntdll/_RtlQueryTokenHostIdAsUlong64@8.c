/*
 * XREFs of _RtlQueryTokenHostIdAsUlong64@8 @ 0x4B369B10
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySecurityAttributesToken@24 @ 0x4B2F3F20 (_ZwQuerySecurityAttributesToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlQueryTokenHostIdAsUlong64(int a1, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  _BYTE v4[4]; // [esp+4h] [ebp-2FCh] BYREF
  _BYTE v5[4]; // [esp+8h] [ebp-2F8h] BYREF
  int v6; // [esp+Ch] [ebp-2F4h]
  int v7; // [esp+10h] [ebp-2F0h]

  result = ZwQuerySecurityAttributesToken(a1, (int)&dword_4B281DC8, 1, (int)v5, 752, (int)v4);
  if ( result >= 0 )
  {
    if ( v6 )
    {
      v3 = *(_DWORD **)(v7 + 20);
      *a2 = *v3;
      a2[1] = v3[1];
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
