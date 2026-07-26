/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008E0E4
 * Callers:
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C006455C (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008EA5C (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00043E0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF30 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall XRemoveBindingFromLists(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  _NDIS_OPEN_BLOCK *OpenList; // rax
  struct _X_FILTER *p_FilterNextOpen; // rcx
  _NDIS_OPEN_BLOCK **i; // rcx
  struct _NDIS_OPEN_BLOCK *v9; // rax
  _NDIS_OPEN_BLOCK **j; // rcx
  struct _NDIS_OPEN_BLOCK *v11; // rax
  unsigned int v12; // edx
  unsigned int NumEntries; // ecx
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  _NDIS_FRAME_TYPE_AND_OPEN *v16; // r10
  _NDIS_FRAME_TYPE_AND_OPEN v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  BindListLock = a1->BindListLock;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(BindListLock, &LockState, 0);
  if ( a1->SingleActiveOpen == a2 )
  {
    Miniport = a1->Miniport;
    a1->SingleActiveOpen = 0LL;
    ndisUpdateCheckForLoopbackFlag(Miniport);
  }
  OpenList = a1->OpenList;
  p_FilterNextOpen = a1;
  while ( OpenList )
  {
    if ( OpenList == a2 )
    {
      p_FilterNextOpen->OpenList = a2->FilterNextOpen;
      break;
    }
    p_FilterNextOpen = (struct _X_FILTER *)&OpenList->FilterNextOpen;
    OpenList = OpenList->FilterNextOpen;
  }
  for ( i = &a1->NoFTypeOpenList; ; i = &v9->FilterNextOpen )
  {
    v9 = *i;
    if ( !*i )
      break;
    if ( v9 == a2 )
    {
      *i = a2->FilterNextOpen;
      --a1->NumNoETypeOpens;
      break;
    }
  }
  for ( j = &a1->FTypeOpenList; ; j = &v11->FilterNextOpen )
  {
    v11 = *j;
    if ( !*j )
      break;
    if ( v11 == a2 )
    {
      *j = a2->FilterNextOpen;
      break;
    }
  }
  a2->FilterNextOpen = 0LL;
  --a1->NumOpens;
  v12 = 0;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      if ( a1->FrameTypeRecord.Entry[v12].Open == a2 )
      {
        v14 = v12 + 1;
        do
        {
          v15 = v12;
          if ( v14 < NumEntries )
          {
            v16 = &a1->FrameTypeRecord.Entry[v14];
            do
            {
              v17 = *v16++;
              v18 = v15++;
              a1->FrameTypeRecord.Entry[v18] = v17;
            }
            while ( v15 + 1 < NumEntries );
          }
          v19 = v15;
          a1->FrameTypeRecord.Entry[v19].Type = 0;
          a1->FrameTypeRecord.Entry[v19].Open = 0LL;
          NumEntries = a1->FrameTypeRecord.NumEntries - 1;
          a1->FrameTypeRecord.NumEntries = NumEntries;
        }
        while ( a1->FrameTypeRecord.Entry[v12].Open == a2 );
      }
      ++v12;
    }
    while ( v12 < NumEntries );
  }
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
