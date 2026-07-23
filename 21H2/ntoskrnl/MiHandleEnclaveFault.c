/*
 * XREFs of MiHandleEnclaveFault @ 0x1408D1E68
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  v2 = -1073741819;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 48) & 0x3100000) == 0x2100000
      && (*(_DWORD *)(v1 + 64) & 1) != 0
      && (*(_BYTE *)(v1 + 72) & 1) != 0 )
    {
      v2 = -1073740638;
    }
    MiUnlockAndDereferenceVadShared((char *)v1);
  }
  return v2;
}
