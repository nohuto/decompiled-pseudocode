/*
 * XREFs of ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

unsigned int __userpurge xxxAdviseDataAck@<eax>(
        struct tagDDECONV *a1@<edi>,
        unsigned int *a2,
        int *a3,
        struct tagDDECONV *a4)
{
  unsigned int result; // eax
  unsigned int v5; // esi
  int v6; // edx
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  int v10; // [esp-10h] [ebp-18h]
  int v11; // [esp-8h] [ebp-10h]
  void *v12; // [esp-4h] [ebp-Ch]
  int *v13; // [esp+0h] [ebp-8h]
  unsigned int v14; // [esp+0h] [ebp-8h]
  int v15; // [esp+4h] [ebp-4h] BYREF

  v15 = 0;
  if ( *a2 != 996 )
    return xxxUnexpectedClientPost((unsigned int *)a4, v13, (struct tagDDECONV *)v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 32, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v5 = xxxCopyAckIn((unsigned int *)a4, &v15, a1, (struct tagINTDDEINFO **)v13);
  result = (*(_BYTE *)(_HMPheFromObject(a4) + 13) & 1) == 0 ? v5 : 0;
  if ( result == 2 )
  {
    v7 = (_DWORD *)*((_DWORD *)a4 + 7);
    v8 = (_DWORD *)v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqq(
        (int)&WPP_RECORDER_INITIALIZED,
        v6,
        0xEu,
        33,
        (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
        v7[5],
        v7[6],
        *(_DWORD *)v15);
    }
    if ( (*v8 & 0x8000) != 0 )
    {
      v9 = v7[8];
      if ( (v9 & 0x400) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(14, 34, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
          v9 = v7[8];
        }
        FreeListAdd(v7[6], *((_DWORD *)a4 + 4), (struct tagDDECONV *)(v9 & 0xFFFFFFFE), v12, v14);
        goto LABEL_20;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_19:
        xxxFreeDDEHandle((struct tagDDECONV *)(v9 & 0xFFFFFFFE), v12, v14);
LABEL_20:
        if ( (*(_BYTE *)(_HMPheFromObject(a4) + 13) & 1) != 0 )
          return 0;
        PopState(a4);
        return 2;
      }
      v11 = v7[5];
      v10 = 35;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_18:
        v9 = v7[8];
        goto LABEL_19;
      }
      v11 = v7[5];
      v10 = 36;
    }
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      (int)&WPP_RECORDER_INITIALIZED,
      v6,
      0xEu,
      v10,
      (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      v11);
    goto LABEL_18;
  }
  return result;
}
