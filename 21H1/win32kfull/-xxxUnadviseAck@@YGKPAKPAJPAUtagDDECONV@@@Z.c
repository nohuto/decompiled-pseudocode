/*
 * XREFs of ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FD40
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

unsigned int __stdcall xxxUnadviseAck(unsigned int *a1, int *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  unsigned int v4; // esi
  int *v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost((unsigned int *)a3, v5, (struct tagDDECONV *)v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 38, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v4 = xxxCopyAckIn(
         a2,
         a1,
         (unsigned int *)a3,
         (unsigned int *)&v6,
         (struct tagDDECONV *)v5,
         (struct tagINTDDEINFO **)v6);
  result = (*(_BYTE *)(_HMPheFromObject(a3) + 13) & 1) == 0 ? v4 : 0;
  if ( result == 2 )
  {
    PopState(a3);
    return 2;
  }
  return result;
}
