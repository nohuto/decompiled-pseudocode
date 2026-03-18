/*
 * XREFs of ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QAEPADPAD@Z @ 0x475E6
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

int __thiscall tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = *(this - 14);
  if ( a2 )
    v3 = a2 + *(this - 13) - v2;
  else
    v3 = 0;
  *(_DWORD *)(v2 + 32) = v3;
  result = a2;
  *this = a2;
  return result;
}
