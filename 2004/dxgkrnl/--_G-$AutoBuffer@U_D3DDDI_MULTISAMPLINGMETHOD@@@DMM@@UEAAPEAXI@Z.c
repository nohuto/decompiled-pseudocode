/*
 * XREFs of ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C005A830
 * Callers:
 *     ??_E?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C00275D0 (--_E-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0008954 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
