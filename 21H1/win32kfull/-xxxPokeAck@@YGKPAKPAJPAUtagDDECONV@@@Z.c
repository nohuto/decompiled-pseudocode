/*
 * XREFs of ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

unsigned int __userpurge xxxPokeAck@<eax>(
        struct tagDDECONV *a1@<edi>,
        unsigned int *a2,
        int *a3,
        struct tagDDECONV *a4)
{
  unsigned int result; // eax
  unsigned int v5; // esi
  int *v6; // esi
  int v7; // eax
  void *v8; // [esp-4h] [ebp-Ch]
  int *v9; // [esp+0h] [ebp-8h]
  unsigned int v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+4h] [ebp-4h] BYREF

  v11 = 0;
  if ( *a2 != 996 )
    return xxxUnexpectedServerPost((unsigned int *)a4, v9, (struct tagDDECONV *)v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 43, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v5 = xxxCopyAckIn(a3, a2, (unsigned int *)a4, (unsigned int *)&v11, a1, (struct tagINTDDEINFO **)v9);
  result = (*(_BYTE *)(_HMPheFromObject(a4) + 13) & 1) == 0 ? v5 : 0;
  if ( result == 2 )
  {
    v6 = (int *)*((_DWORD *)a4 + 7);
    if ( (*(_DWORD *)v11 & 0x8000) != 0 )
    {
      v7 = v6[8];
      if ( (v7 & 0x400) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(14, 44, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
          v7 = v6[8];
        }
        FreeListAdd(v6[5], *((_DWORD *)a4 + 4), (struct tagDDECONV *)(v7 & 0xFFFFFFFE), v8, v10);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(14, 45, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      xxxFreeDDEHandle(v6[6], (int)a4, (struct tagDDECONV *)(v6[8] & 0xFFFFFFFE), v8, v10);
    }
    if ( (*(_BYTE *)(_HMPheFromObject(a4) + 13) & 1) != 0 )
    {
      return 0;
    }
    else
    {
      PopState(a4);
      return 2;
    }
  }
  return result;
}
