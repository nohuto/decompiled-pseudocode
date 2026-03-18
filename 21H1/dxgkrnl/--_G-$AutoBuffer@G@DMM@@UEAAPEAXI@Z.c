/*
 * XREFs of ??_G?$AutoBuffer@G@DMM@@UEAAPEAXI@Z @ 0x1C00597D0
 * Callers:
 *     ??_E?$AutoBuffer@G@DMM@@WBI@EAAPEAXI@Z @ 0x1C0026940 (--_E-$AutoBuffer@G@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C00097CC (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<unsigned short>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
