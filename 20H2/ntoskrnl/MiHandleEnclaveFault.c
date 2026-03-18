/*
 * XREFs of MiHandleEnclaveFault @ 0x1408D4548
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  volatile signed __int32 *v1; // rax
  unsigned int v2; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  v2 = -1073741819;
  if ( v1 )
  {
    if ( (v1[12] & 0x3100000) == 0x2100000 && (v1[16] & 1) != 0 && (v1[18] & 1) != 0 )
      v2 = -1073740638;
    MiUnlockAndDereferenceVadShared((char *)v1);
  }
  return v2;
}
