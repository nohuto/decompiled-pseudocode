/*
 * XREFs of ndisWmiDisableEvents @ 0x1C008D17C
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010BF0 (ndisWMIDispatch.c)
 * Callees:
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008A70 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisWmiDisableEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _GUID *a2)
{
  unsigned int v2; // ebx
  unsigned int Flags; // eax
  struct _NDIS_GUID *v7; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x46u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  ndisWmiGetGuid(&v7, a1, a2, 0);
  if ( v7 )
  {
    Flags = v7->Flags;
    if ( (Flags & 2) != 0 )
      v7->Flags = Flags & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        (_DWORD)v7 + 18,
        (_WORD)v7 + 71,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    v2 = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x48u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      v2);
  return v2;
}
