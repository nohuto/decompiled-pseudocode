/*
 * XREFs of NVMeControllerPostPowerUp @ 0x1C0005120
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 * Callees:
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001AC44 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NVMeControllerPostPowerUp(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 3988);
  if ( (result & 2) != 0 )
  {
    *(_DWORD *)(a1 + 3988) = result & 0xFFFFFFFD;
    return NVMeSetNonOperationalPowerStatePermissiveMode(a1);
  }
  return result;
}
