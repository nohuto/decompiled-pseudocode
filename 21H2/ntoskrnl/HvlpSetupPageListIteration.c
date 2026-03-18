/*
 * XREFs of HvlpSetupPageListIteration @ 0x14054D424
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14054A25C (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14054A4B0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14054AE18 (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpStartSecurePageListIteration @ 0x14054D4B8 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  PHYSICAL_ADDRESS *v3; // rbx
  PHYSICAL_ADDRESS *v4; // rcx
  PHYSICAL_ADDRESS *result; // rax

  v3 = (PHYSICAL_ADDRESS *)&HvlpIteratorCrashdump;
  if ( !a1 )
    v3 = (PHYSICAL_ADDRESS *)&HvlpIteratorHibernate;
  v3->LowPart = 0;
  BYTE4(v3->QuadPart) = 0;
  if ( a1 == 1 )
  {
    v4 = (PHYSICAL_ADDRESS *)HvlpFallbackScratchPage;
    result = (PHYSICAL_ADDRESS *)HvlpHibernateScratchPage;
  }
  else
  {
    v4 = (PHYSICAL_ADDRESS *)HvlpHibernateScratchPage;
    result = (PHYSICAL_ADDRESS *)HvlpFallbackScratchPage;
  }
  if ( v4 )
  {
    v3[1].QuadPart = (LONGLONG)v4;
LABEL_8:
    v3[2] = MmGetPhysicalAddress(v4);
    BYTE3(v3->QuadPart) = a2 & 1;
    BYTE4(v3->QuadPart) = (a2 & 2) != 0;
    result = v3;
    BYTE2(v3->u.LowPart) = 1;
    return result;
  }
  v3[1].QuadPart = (LONGLONG)result;
  v4 = result;
  if ( result )
    goto LABEL_8;
  return result;
}
