/*
 * XREFs of ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGEEPBEK@Z @ 0x1CEFF9
 * Callers:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGJEPBEK@Z @ 0x1CFF33 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGJEPBEK@Z.c)
 * Callees:
 *     <none>
 */

char __userpurge CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum@<al>(
        int a1@<edx>,
        char a2@<cl>,
        unsigned int a3,
        const unsigned __int8 *a4,
        unsigned int a5)
{
  unsigned int i; // eax

  if ( a2 == 111 )
    a2 = 80;
  for ( i = 0; i < a3; ++i )
    a2 ^= *(_BYTE *)(i + a1);
  return a2;
}
