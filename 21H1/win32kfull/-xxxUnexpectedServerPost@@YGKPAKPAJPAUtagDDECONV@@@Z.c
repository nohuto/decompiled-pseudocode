/*
 * XREFs of ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83
 * Callers:
 *     ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02 (-xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F516 (-xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D (-xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FD40 (-xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z @ 0x17E7A7 (-AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z.c)
 *     ?SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z @ 0x17EC27 (-SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 */

unsigned int __userpurge xxxUnexpectedServerPost@<eax>(
        int *a1@<edx>,
        unsigned int *a2@<ecx>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  unsigned int v6; // edx
  int *v8; // [esp+0h] [ebp-4h]
  struct tagDDECONV *savedregs; // [esp+4h] [ebp+0h]

  v6 = *a2;
  if ( *a2 == 993 )
    return SpontaneousTerminate(a2, (int)a3);
  if ( *a2 <= 0x3E1 )
    return 0;
  if ( v6 <= 0x3E3 )
    return AbnormalDDEPost((int)a3, v6);
  if ( v6 != 996 )
  {
    if ( v6 == 997 )
      return xxxAdviseData(a1, a2, a3, v8, savedregs);
    if ( v6 > 0x3E8 )
      return 0;
    return AbnormalDDEPost((int)a3, v6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 23, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  xxxFreeDDEHandle(*a1, (int)a3, (struct tagDDECONV *)1, v8, (unsigned int)savedregs);
  return 3;
}
