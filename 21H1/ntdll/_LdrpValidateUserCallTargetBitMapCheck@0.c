/*
 * XREFs of _LdrpValidateUserCallTargetBitMapCheck@0 @ 0x4B3085EB
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 */

unsigned int __usercall LdrpValidateUserCallTargetBitMapCheck@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // edx
  unsigned int v4; // eax
  unsigned int result; // eax

  v3 = *(_DWORD *)(a2 + 4 * a1);
  v4 = a3 >> 3;
  if ( (a3 & 0xF) == 0 )
  {
    if ( _bittest(&v3, v4) )
      return LdrpValidateUserCallTargetBitMapRet();
LABEL_5:
    result = v4 | 1;
    if ( _bittest(&v3, result) )
      return result;
    return RtlpHandleInvalidUserCallTarget((PVOID)a3);
  }
  v4 &= ~1u;
  if ( _bittest(&v3, v4) )
    goto LABEL_5;
  return RtlpHandleInvalidUserCallTarget((PVOID)a3);
}
