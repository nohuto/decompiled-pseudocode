/*
 * XREFs of ??_G?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0059870
 * Callers:
 *     ??_E?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C0026960 (--_E-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
  P[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v4 = (void *)P[4];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    P[4] = 0LL;
    P[5] = 0LL;
  }
  P[3] = &SetElement::`vftable';
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
