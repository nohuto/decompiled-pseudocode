/*
 * XREFs of HalpAcpiValidateAcpiTable @ 0x1403BB920
 * Callers:
 *     HalpAcpiCopyBiosTable @ 0x1403BB898 (HalpAcpiCopyBiosTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiValidateAcpiTable(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v3; // eax
  unsigned int v4; // edx

  v1 = 0;
  if ( *(_DWORD *)a1 != 1346584902 )
    return v1;
  switch ( *(_BYTE *)(a1 + 8) )
  {
    case 0:
      v3 = 0;
      v1 = -1072431089;
LABEL_11:
      v4 = *(_DWORD *)(a1 + 4);
      if ( v4 > v3 )
        return v1;
      goto LABEL_8;
    case 1:
      v3 = 116;
      goto LABEL_11;
    case 2:
      v3 = 129;
      goto LABEL_11;
  }
  v3 = 244;
  if ( *(_BYTE *)(a1 + 8) == 3 )
    goto LABEL_11;
  v4 = *(_DWORD *)(a1 + 4);
LABEL_8:
  if ( v4 < v3 )
    return (unsigned int)-1072431089;
  return v1;
}
