/*
 * XREFs of ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00346C8
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x1C003C650 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F38 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiIsWaitingOnAsyncCompletion @ 0x1C001BF14 (VidSchiIsWaitingOnAsyncCompletion.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z @ 0x1C0034488 (-VidSchiAbortSoftwarePacket@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@_K@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0037FB4 (McTemplateK0qq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCancelQueuedIndependentFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int *v9; // r15
  char *v10; // r11
  char *v11; // r10
  unsigned int *v13; // r12
  _QWORD *v16; // r9
  _QWORD *i; // r8
  _QWORD *v18; // r8
  _QWORD *v19; // r9
  _QWORD *j; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // rdi
  _QWORD *k; // r8
  _QWORD *v24; // r11
  _QWORD *m; // r9
  _QWORD *v26; // rbx
  _QWORD *n; // r10
  _QWORD *v28; // r10
  unsigned int v29; // r10d
  int v30; // r8d
  unsigned int v31; // edx
  bool ii; // zf
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // ecx
  __int64 v36; // r9
  unsigned int v37; // ebx
  int v38; // ecx
  __int64 v39; // rdi
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v41; // r8
  int v42; // ecx
  int v43; // ebx
  _QWORD v44[2]; // [rsp+40h] [rbp-48h] BYREF
  char v45; // [rsp+50h] [rbp-38h]

  v9 = a8;
  v10 = (char *)a3 + 72;
  v11 = (char *)*((_QWORD *)a3 + 9);
  v13 = a9;
  while ( v11 != v10 )
  {
    v16 = v11 + 640;
    for ( i = (_QWORD *)*((_QWORD *)v11 + 80); i != v16; i = (_QWORD *)*v18 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(i - 4), a5) == 1 )
        ++*a7;
    }
    v19 = v11 + 656;
    for ( j = (_QWORD *)*((_QWORD *)v11 + 82); j != v19; j = (_QWORD *)*v21 )
    {
      if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(j - 4), a5) == 1 )
        ++*a7;
    }
    v11 = *(char **)v11;
  }
  v22 = (_QWORD *)((char *)a3 + 88);
  for ( k = (_QWORD *)*v22; k != v22; k = (_QWORD *)*k )
  {
    v24 = k + 4;
    for ( m = (_QWORD *)k[4]; m != v24; m = (_QWORD *)*m )
    {
      v26 = m + 19;
      for ( n = (_QWORD *)m[19]; n != v26; n = (_QWORD *)*v28 )
      {
        if ( VidSchiAbortSoftwarePacket((struct _VIDSCH_QUEUE_PACKET *)(n - 4), a5) == 1 )
          ++*a7;
      }
    }
  }
  v29 = *((_DWORD *)a4 + 16);
  v30 = *((_DWORD *)a4 + 14);
  v31 = v29;
  for ( ii = v29 == v30; !ii; ii = v31 == v30 )
  {
    v33 = *((_DWORD *)a4 + 344 * v31 + 293);
    if ( v33 > 0xC || (v34 = 4673, !_bittest(&v34, v33)) )
    {
      if ( !VidSchiIsWaitingOnAsyncCompletion(v33) && v35 != 13 && *(unsigned int *)((char *)a4 + v36 + 1176) >= a5 )
      {
        *v9 = v31;
        break;
      }
    }
    v31 = (v31 + 1) & 0x3F;
  }
  v37 = *v9;
  if ( *v9 != -1 )
  {
    v45 = 0;
    v44[1] = v44;
    v38 = (v30 - 1) & 0x3F;
    LOBYTE(a8) = 0;
    *v13 = v38;
    v44[0] = v44;
    *a6 = v29;
    if ( v37 != ((v38 + 1) & 0x3F) )
    {
      do
      {
        v39 = 1376LL * v37;
        FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)((char *)a4 + v39 + 1440));
        if ( FlipManagerAuxiliaryPresentInfo )
        {
          *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 11) = 1;
          if ( (byte_1C006E944 & 1) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              *(unsigned int *)((char *)a4 + v39 + 1176),
              &EventFlipManagerIFlipPresentCancel,
              v41,
              *((unsigned int *)FlipManagerAuxiliaryPresentInfo + 2),
              *(_DWORD *)((char *)a4 + v39 + 1176));
        }
        v38 = *v13;
        v37 = (v37 + 1) & 0x3F;
      }
      while ( v37 != ((*v13 + 1) & 0x3F) );
      v37 = *v9;
    }
    VidSchiCompleteFlipEntry((__int64)v44, (__int64)a1, a2, (__int64)a4, v37, v38, 6u, &a8);
    v42 = *v13 + 1;
    if ( !*((_BYTE *)a1 + 59) )
      *((_DWORD *)a4 + 16) = v42 & 0x3F;
    v43 = *v9;
    if ( *v9 != (v42 & 0x3F) )
    {
      do
      {
        VidSchiUpdateFlipQueueHistory(4u, (__int64)a1, a2);
        v43 = (v43 + 1) & 0x3F;
      }
      while ( v43 != ((*v13 + 1) & 0x3F) );
    }
    if ( !v45 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v44);
  }
}
