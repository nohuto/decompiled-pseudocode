/*
 * XREFs of ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012EDB0
 * Callers:
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002AEB4 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  char v4; // si
  unsigned int FrameTypeArraySize; // ecx
  unsigned int NumEntries; // edx
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  _NDIS_FRAME_TYPE_AND_OPEN *v11; // rcx

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xBu,
      (struct _GUID *)&WPP_ba9d28aa62533678c00453c015d6f224_Traceguids,
      a2);
  FrameTypeArraySize = a2->FrameTypeArraySize;
  if ( !FrameTypeArraySize
    || (NumEntries = a1->FrameTypeRecord.NumEntries, NumEntries + FrameTypeArraySize < FrameTypeArraySize)
    || NumEntries + FrameTypeArraySize >= 0x10 )
  {
LABEL_22:
    a2->FilterNextOpen = a1->NoFTypeOpenList;
    ++a1->NumNoETypeOpens;
    a1->NoFTypeOpenList = a2;
    goto LABEL_17;
  }
  v7 = 0;
  if ( NumEntries )
  {
    do
    {
      v8 = 0LL;
      while ( a2->FrameTypeArray[v8] != a1->FrameTypeRecord.Entry[v7].Type )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= FrameTypeArraySize )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      if ( v4 == 1 )
        goto LABEL_22;
    }
    while ( ++v7 < NumEntries );
  }
  v9 = 0LL;
  do
  {
    v10 = a2->FrameTypeArray[v9];
    v11 = &a1->FrameTypeRecord.Entry[NumEntries];
    if ( v10 == 8 && NumEntries )
    {
      v11->Type = a1->FrameTypeRecord.Entry[0].Type;
      v11->Open = a1->FrameTypeRecord.Entry[0].Open;
      a1->FrameTypeRecord.Entry[0].Type = 8;
      a1->FrameTypeRecord.Entry[0].Open = a2;
    }
    else
    {
      v11->Type = v10;
      v11->Open = a2;
    }
    ++a1->FrameTypeRecord.NumEntries;
    v9 = (unsigned int)(v9 + 1);
    NumEntries = a1->FrameTypeRecord.NumEntries;
  }
  while ( (unsigned int)v9 < a2->FrameTypeArraySize );
  a2->FilterNextOpen = a1->FTypeOpenList;
  a1->FTypeOpenList = a2;
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xCu,
      (struct _GUID *)&WPP_ba9d28aa62533678c00453c015d6f224_Traceguids,
      a2);
}
