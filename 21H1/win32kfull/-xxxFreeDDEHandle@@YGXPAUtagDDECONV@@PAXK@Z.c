/*
 * XREFs of ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786
 * Callers:
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     _xxxClientFreeDDEHandle@8 @ 0x19428F (_xxxClientFreeDDEHandle@8.c)
 */

void __userpurge xxxFreeDDEHandle(int a1@<edx>, int a2@<ecx>, struct tagDDECONV *a3, void *a4, unsigned int a5)
{
  int v5; // esi
  char v7; // [esp-4h] [ebp-Ch]
  char v8; // [esp-4h] [ebp-Ch]
  void *v9; // [esp+0h] [ebp-8h]
  unsigned int v10; // [esp+4h] [ebp-4h]

  v5 = a1;
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = a1;
      LOBYTE(a1) = 4;
      WPP_RECORDER_SF_q(a2, a1, 0xEu, 53, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v7);
    }
    FreeListAdd(v5, a2, a3, v9, v10);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = a1;
      LOBYTE(a1) = 4;
      WPP_RECORDER_SF_q(a2, a1, 0xEu, 54, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v8);
    }
    xxxClientFreeDDEHandle(v5, a3);
  }
}
