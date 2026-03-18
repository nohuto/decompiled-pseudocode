/*
 * XREFs of ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3
 * Callers:
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z @ 0x17E7A7 (-AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z.c)
 *     ?Request@@YGKPAUtagDDECONV@@@Z @ 0x17EBEA (-Request@@YGKPAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z @ 0x17EC27 (-SpontaneousTerminate@@YGKPAKPAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YGKPAUtagDDECONV@@@Z @ 0x17EC69 (-Unadvise@@YGKPAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17ED57 (-xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E (-xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

unsigned int __userpurge xxxUnexpectedClientPost@<eax>(
        int *a1@<edx>,
        int *a2@<ecx>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  unsigned int result; // eax
  int *v7; // [esp+0h] [ebp-4h]
  struct tagDDECONV *savedregs; // [esp+4h] [ebp+0h]

  switch ( *a2 )
  {
    case 993:
      result = SpontaneousTerminate(a2, (int)a3);
      break;
    case 994:
      result = xxxAdvise(a1, a2, a3, v7, savedregs);
      break;
    case 995:
      result = Unadvise((struct tagDDECONV *)v7);
      break;
    case 996:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(14, 24, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      xxxFreeDDEHandle(*a1, (int)a3, (struct tagDDECONV *)1, v7, (unsigned int)savedregs);
      result = 3;
      break;
    case 997:
      result = AbnormalDDEPost((int)a3, *a2);
      break;
    case 998:
      result = Request((struct tagDDECONV *)v7);
      break;
    case 999:
      result = xxxPoke(a1, a2, a3, v7, savedregs);
      break;
    case 1000:
      result = xxxExecute(a1, a2, a3, v7, savedregs);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
