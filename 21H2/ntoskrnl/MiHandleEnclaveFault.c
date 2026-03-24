/*
 * XREFs of MiHandleEnclaveFault @ 0x1408D1D08
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025B250 (MiUnlockAndDereferenceVadShared.c)
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
