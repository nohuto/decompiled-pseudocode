/*
 * XREFs of ??4?$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z @ 0xACF20
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

int __thiscall tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(int *this, int a2)
{
  int result; // eax
  int v4; // edx
  int v5; // ecx

  result = a2;
  v4 = *(this - 13);
  if ( (a2 & 0xFFFF0000) != 0 )
    v5 = -1;
  else
    v5 = a2;
  *(_DWORD *)(v4 + 28) = v5;
  *this = a2;
  return result;
}
