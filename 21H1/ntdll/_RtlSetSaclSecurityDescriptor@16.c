/*
 * XREFs of _RtlSetSaclSecurityDescriptor@16 @ 0x4B2E7F40
 * Callers:
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSetSaclSecurityDescriptor(int a1, char a2, int a3, char a4)
{
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx

  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      v5 = v4 | 0x10;
      if ( a3 )
        *(_DWORD *)(a1 + 12) = a3;
      v6 = v5 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v6;
      if ( !a4 )
        return 0;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v8;
    return 0;
  }
  return -1073741703;
}
