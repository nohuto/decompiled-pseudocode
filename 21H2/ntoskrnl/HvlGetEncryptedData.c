/*
 * XREFs of HvlGetEncryptedData @ 0x1404F8DD0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1404F9018 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1404F9204 (HvlpGetEncryptedDataFromSecureKernel.c)
 */

__int64 __fastcall HvlGetEncryptedData(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  if ( !(_DWORD)a3 || (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  if ( VslVsmEnabled )
    return HvlpGetEncryptedDataFromSecureKernel(a1, a2, a3, a5, (__int64)a4);
  if ( (HvlpFlags & 2) != 0 )
    return HvlpGetEncryptedDataFromHypervisor(a1, a2, a3, a5, a4);
  *a4 = 0;
  return 3221226021LL;
}
