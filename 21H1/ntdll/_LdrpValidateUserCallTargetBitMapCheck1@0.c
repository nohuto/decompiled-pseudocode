/*
 * XREFs of _LdrpValidateUserCallTargetBitMapCheck1@0 @ 0x4B30868B
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 */

unsigned int __usercall LdrpValidateUserCallTargetBitMapCheck1@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // edx
  unsigned int result; // eax
  unsigned int v5; // eax

  v3 = *(_DWORD *)(a2 + 4 * a1);
  result = a3 >> 3;
  if ( (a3 & 0xF) == 0 )
  {
    if ( _bittest(&v3, result) )
      return result;
    return RtlpHandleInvalidUserCallTarget((PVOID)a3);
  }
  v5 = result & 0xFFFFFFFE;
  if ( !_bittest(&v3, v5) )
    return RtlpHandleInvalidUserCallTarget((PVOID)a3);
  result = v5 | 1;
  if ( !_bittest(&v3, result) )
    return RtlpHandleInvalidUserCallTarget((PVOID)a3);
  return result;
}
