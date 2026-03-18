/*
 * XREFs of FWUPDATE_ParseUsb4DromForVidPid @ 0x1C003EAFC
 * Callers:
 *     HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x1C00099A0 (HUBHSM_CheckingIfAllUsb4DromDataRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0032B34 (WPP_RECORDER_SF_DDDD.c)
 */

void __fastcall FWUPDATE_ParseUsb4DromForVidPid(__int64 a1)
{
  __int64 v2; // rcx
  _BYTE *v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rdx
  _BYTE *v6; // rcx
  char v7; // al
  unsigned __int16 v8; // r9

  v2 = *(_QWORD *)(a1 + 2688);
  if ( *(_BYTE *)(v2 + 13) == 1 )
  {
    v3 = (_BYTE *)(v2 + 22);
    v4 = *(_BYTE *)(v2 + 22);
    if ( v4 )
    {
      v5 = v2 + *(unsigned int *)(a1 + 2684);
      while ( 1 )
      {
        v6 = &v3[v4];
        if ( (unsigned __int64)v6 > v5 )
          break;
        v7 = v3[1];
        if ( v7 >= 0 && (v7 & 0x3F) == 9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDD(
              *(_QWORD *)(a1 + 2520),
              4u,
              3u,
              0x2Eu,
              (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
              *((unsigned __int16 *)v3 + 2),
              *((unsigned __int16 *)v3 + 3),
              *((unsigned __int16 *)v3 + 4),
              (unsigned __int8)v3[14]);
          *(_WORD *)(a1 + 2720) = *((_WORD *)v3 + 2);
          *(_WORD *)(a1 + 2722) = *((_WORD *)v3 + 3);
          *(_WORD *)(a1 + 2724) = *((_WORD *)v3 + 4);
          *(_WORD *)(a1 + 2726) = (unsigned __int8)v3[14];
          *(_BYTE *)(a1 + 2728) = 1;
          return;
        }
        v3 = v6;
        if ( (unsigned __int64)v6 >= v5 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v8 = 47;
          goto LABEL_11;
        }
        v4 = *v6;
        if ( !*v6 )
          goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 45;
    }
    else
    {
LABEL_9:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 44;
    }
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v8, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
  }
}
