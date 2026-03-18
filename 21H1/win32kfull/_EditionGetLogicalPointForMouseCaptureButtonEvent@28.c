/*
 * XREFs of _EditionGetLogicalPointForMouseCaptureButtonEvent@28 @ 0x147930
 * Callers:
 *     <none>
 * Callees:
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 */

int __stdcall EditionGetLogicalPointForMouseCaptureButtonEvent(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  _DWORD *v7; // esi
  int v8; // edi
  int result; // eax

  v7 = a7;
  *a7 = a3;
  v7[1] = a4;
  v8 = *(_DWORD *)(a1 + 80);
  result = IsWindowDesktopComposed(v8);
  if ( result )
  {
    result = TransformVectorWithInputTargetPrecedence(0);
    if ( !result )
    {
      if ( *(_DWORD *)(a2 + 80) == v8 )
      {
        *v7 = a5;
        result = a6;
        v7[1] = a6;
      }
      else
      {
        return PhysicalToLogicalDPIPoint(v7, &a3, *(_DWORD *)(*(_DWORD *)(v8 + 20) + 184), 0);
      }
    }
  }
  return result;
}
