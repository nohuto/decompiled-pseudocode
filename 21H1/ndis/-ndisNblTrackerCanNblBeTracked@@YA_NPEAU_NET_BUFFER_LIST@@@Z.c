/*
 * XREFs of ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003E4A0
 * Callers:
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C003E554 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 */

char __fastcall ndisNblTrackerCanNblBeTracked(struct _NET_BUFFER_LIST *a1)
{
  _BYTE *SourceHandle; // rax
  char v3[4]; // [rsp+30h] [rbp-18h]

  SourceHandle = a1->SourceHandle;
  if ( !SourceHandle )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0xBu,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        a1);
    return 0;
  }
  if ( *SourceHandle != 5 && (unsigned __int8)(*SourceHandle - 17) > 1u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = (unsigned __int8)*SourceHandle;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0xCu,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        (char)a1,
        *(_DWORD *)v3);
    }
    return 0;
  }
  return 1;
}
