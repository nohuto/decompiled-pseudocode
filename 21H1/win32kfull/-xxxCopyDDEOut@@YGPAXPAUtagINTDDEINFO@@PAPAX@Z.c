/*
 * XREFs of ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5
 * Callers:
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _WPP_RECORDER_SF_DDD@32 @ 0x17FF96 (_WPP_RECORDER_SF_DDD@32.c)
 *     _xxxClientCopyDDEOut1@4 @ 0x193E2A (_xxxClientCopyDDEOut1@4.c)
 */

int __fastcall xxxCopyDDEOut(_DWORD *a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v9; // [esp-18h] [ebp-24h]
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-10h] [ebp-1Ch]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(v9, v10, v11, a1[5], a1[8], a1[2]);
  v4 = xxxClientCopyDDEOut1(a1);
  v7 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qqq(v6, v5, 0xEu, 61, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *a1, a1[1], v4);
  }
  if ( v7 && a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(v6, v5, 0xEu, 62, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, a1[3]);
    }
    *a2 = a1[3];
  }
  return v7;
}
