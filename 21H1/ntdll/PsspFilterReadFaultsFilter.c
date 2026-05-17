/*
 * XREFs of PsspFilterReadFaultsFilter @ 0x4B386F8E
 * Callers:
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PsspFilterReadFaultsFilter(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ecx
  BOOL result; // eax

  result = 0;
  if ( (a1 == -1073741818 || a1 == -1073741819) && !*(_DWORD *)(*(_DWORD *)a2 + 20) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)a2 + 24);
    if ( v4 >= a3 && v4 < a3 + 4 )
      return 1;
  }
  return result;
}
