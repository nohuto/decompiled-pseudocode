/*
 * XREFs of ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

unsigned int __userpurge xxxAdviseAck@<eax>(
        struct tagINTDDEINFO **a1@<ebx>,
        struct tagDDECONV *a2@<edi>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  unsigned int result; // eax
  unsigned int v6; // esi
  _DWORD *v7; // esi
  struct tagDDECONV *v8; // ecx
  int v9; // edx
  void *v10; // [esp-8h] [ebp-10h]
  unsigned int v11; // [esp-4h] [ebp-Ch]
  int *v12; // [esp+0h] [ebp-8h]
  int v13; // [esp+4h] [ebp-4h] BYREF

  v13 = 0;
  if ( *a3 != 996 )
    return xxxUnexpectedServerPost((unsigned int *)a5, v12, (struct tagDDECONV *)v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 26, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v6 = xxxCopyAckIn((unsigned int *)a5, &v13, a2, a1);
  result = (*(_BYTE *)(_HMPheFromObject(a5) + 13) & 1) == 0 ? v6 : 0;
  if ( result == 2 )
  {
    if ( (*((_BYTE *)a5 + 40) & 6) != 0 )
    {
      return 1;
    }
    else
    {
      v7 = (_DWORD *)*((_DWORD *)a5 + 7);
      if ( (*(_DWORD *)v13 & 0x8000) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(14, 27, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        v8 = (struct tagDDECONV *)*((_DWORD *)a5 + 4);
        v9 = v7[5];
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(14, 28, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        v9 = v7[6];
        v8 = a5;
      }
      FreeListAdd(v9, (int)v8, (struct tagDDECONV *)(v7[8] & 0xFFFFFFFE), v10, v11);
      PopState(a5);
      return 2;
    }
  }
  return result;
}
