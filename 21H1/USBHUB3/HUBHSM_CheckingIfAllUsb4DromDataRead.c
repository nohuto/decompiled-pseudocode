/*
 * XREFs of HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x1C00096A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     FWUPDATE_ParseUsb4DromForVidPid @ 0x1C003E47C (FWUPDATE_ParseUsb4DromForVidPid.c)
 */

__int64 __fastcall HUBHSM_CheckingIfAllUsb4DromDataRead(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 2696) < *(_DWORD *)(v1 + 2680) )
  {
    return 2061;
  }
  else
  {
    v2 = 2053;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 4u, 3u, 0x35u, (__int64)&WPP_9aa0d3c30565357af50089cbd72f3b9b_Traceguids);
    FWUPDATE_ParseUsb4DromForVidPid(v1);
  }
  return v2;
}
