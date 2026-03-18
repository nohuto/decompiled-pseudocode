/*
 * XREFs of ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QAEPAGPAG@Z @ 0x1E61C
 * Callers:
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 * Callees:
 *     <none>
 */

int __thiscall tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
        _DWORD *this,
        int a2)
{
  int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = *(this - 20);
  if ( a2 )
    v3 = a2 + *(this - 19) - v2;
  else
    v3 = 0;
  *(_DWORD *)(v2 + 124) = v3;
  result = a2;
  *this = a2;
  return result;
}
