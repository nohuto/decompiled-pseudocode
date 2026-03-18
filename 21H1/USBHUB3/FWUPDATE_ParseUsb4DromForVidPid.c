/*
 * XREFs of FWUPDATE_ParseUsb4DromForVidPid @ 0x1C003E47C
 * Callers:
 *     HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x1C00096A0 (HUBHSM_CheckingIfAllUsb4DromDataRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00322CC (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall FWUPDATE_ParseUsb4DromForVidPid(__int64 a1)
{
  unsigned __int8 *v1; // rbx
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rdx
  unsigned __int8 *v6; // rcx
  char v7; // al
  __int64 result; // rax
  unsigned __int16 v9; // r9
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v1 = *(unsigned __int8 **)(a1 + 2688);
  v3 = *(unsigned int *)(a1 + 2684);
  v4 = *v1;
  if ( *v1 )
  {
    v5 = (unsigned __int64)&v1[v3];
    while ( 1 )
    {
      v6 = &v1[v4];
      if ( (unsigned __int64)v6 > v5 )
        break;
      v7 = v1[1];
      if ( v7 >= 0 && (v7 & 0x3F) == 9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = v1[14];
          v12 = *((unsigned __int16 *)v1 + 4);
          v11 = *((unsigned __int16 *)v1 + 3);
          v10 = *((unsigned __int16 *)v1 + 2);
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x2Eu,
            (__int64)&WPP_9aa0d3c30565357af50089cbd72f3b9b_Traceguids,
            v10,
            v11,
            v12,
            v13);
        }
        *(_WORD *)(a1 + 2720) = *((_WORD *)v1 + 2);
        *(_WORD *)(a1 + 2722) = *((_WORD *)v1 + 3);
        *(_WORD *)(a1 + 2724) = *((_WORD *)v1 + 4);
        result = v1[14];
        *(_WORD *)(a1 + 2726) = result;
        *(_BYTE *)(a1 + 2728) = 1;
        return result;
      }
      v1 = v6;
      if ( (unsigned __int64)v6 >= v5 )
      {
        result = (__int64)&WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v9 = 47;
        return WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 v9,
                 (__int64)&WPP_9aa0d3c30565357af50089cbd72f3b9b_Traceguids);
      }
      v4 = *v6;
      if ( !*v6 )
        goto LABEL_8;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v9 = 45;
  }
  else
  {
LABEL_8:
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v9 = 44;
  }
  return WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v9, (__int64)&WPP_9aa0d3c30565357af50089cbd72f3b9b_Traceguids);
}
