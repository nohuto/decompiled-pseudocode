/*
 * XREFs of ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0089250
 * Callers:
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008890C (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 * Callees:
 *     McTemplateK0pppxqpq_EtwWriteTransfer @ 0x1C002FFFC (McTemplateK0pppxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pppxqq_EtwWriteTransfer @ 0x1C00300B8 (McTemplateK0pppxqq_EtwWriteTransfer.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0097060 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00E16EC (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::AppendReadyPacket(
        VIDMM_PAGING_QUEUE *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2,
        unsigned __int64 *a3)
{
  bool v4; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  VIDMM_PAGING_QUEUE **v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  VIDMM_DEVICE *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  VIDMM_PAGING_QUEUE *v29; // rax
  VIDMM_PAGING_QUEUE **v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+38h] [rbp-20h]
  int v34; // [rsp+38h] [rbp-20h]
  int v35; // [rsp+40h] [rbp-18h]
  int v36; // [rsp+48h] [rbp-10h]

  v4 = *((_BYTE *)a2 + 24) == 0;
  *((_QWORD *)a2 + 2) = KeGetCurrentThread();
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
  }
  v8 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 144, 0LL);
  *(_QWORD *)(v8 + 152) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 25) )
  {
    *((_QWORD *)this + 12) += *((unsigned int *)this + 33);
    v12 = *((_QWORD *)this + 12);
    if ( !*((_BYTE *)this + 130) )
    {
      *((_DWORD *)this + 25) = 0;
      v12 = *((_QWORD *)this + 12);
    }
    *((_QWORD *)a2 + 4) = v12;
    *a3 = v12;
  }
  v13 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 5);
  if ( *v13 != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
    goto LABEL_38;
  *(_QWORD *)a2 = (char *)this + 32;
  *((_QWORD *)a2 + 1) = v13;
  *v13 = a2;
  *((_QWORD *)this + 5) = a2;
  if ( *((_BYTE *)a2 + 24) )
  {
    if ( (byte_1C006E941 & 1) != 0 )
    {
      VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a2);
      v36 = *((_DWORD *)this + 29);
      v33 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqpq_EtwWriteTransfer(
        *((_QWORD *)a2 + 5),
        v25,
        v26,
        *((_QWORD *)VidMmDevice + 3),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v33,
        *((_QWORD *)a2 + 8),
        v36);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v9, v10, v11);
      v27[3] = a2;
      v27[4] = *((int *)a2 + 12);
      v27[5] = *((_QWORD *)a2 + 8);
      v27[6] = *((_QWORD *)a2 + 7);
      v13 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v27[7] = v13;
    }
  }
  else
  {
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v35 = *((_DWORD *)this + 29);
      v34 = *((_DWORD *)a2 + 12);
      McTemplateK0pppxqq_EtwWriteTransfer(
        (__int64)v13,
        v9,
        v10,
        *(_QWORD *)(**((_QWORD **)this + 10) + 24LL),
        this,
        a2,
        *((_QWORD *)a2 + 5),
        v34,
        v35);
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v9, v10, v11);
      v28[3] = a2;
      v28[4] = *((int *)a2 + 12);
      v28[5] = *((unsigned __int8 *)a2 + 25);
      v13 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
      v28[6] = v13;
    }
  }
  if ( !*((_DWORD *)this + 28) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v9, v10, v11);
      v23[3] = this;
      v23[4] = *((int *)this + 28);
      v23[5] = 1LL;
      if ( *((_DWORD *)this + 28) == 2 )
      {
        v29 = *(VIDMM_PAGING_QUEUE **)this;
        if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this )
          goto LABEL_38;
        v30 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1);
        if ( *v30 != this )
          goto LABEL_38;
        *v30 = v29;
        *((_QWORD *)v29 + 1) = v30;
        *(_QWORD *)this = 0LL;
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    v14 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 1;
    if ( *((_BYTE *)this + 128) )
    {
      if ( *((_DWORD *)this + 29) == 3 )
      {
        v16 = *(_QWORD **)(v14 + 88);
        v15 = v14 + 80;
        if ( *v16 == v15 )
        {
LABEL_22:
          *(_QWORD *)this = v15;
          *((_QWORD *)this + 1) = v16;
          *v16 = this;
          *(_QWORD *)(v15 + 8) = this;
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 176LL), 0, 0);
          if ( *((_BYTE *)a2 + 24) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v31 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
              *(_QWORD *)(v31 + 24) = this;
              *(_QWORD *)(v31 + 32) = *((_QWORD *)a2 + 7);
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            v32 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
            *(_QWORD *)(v32 + 24) = this;
            *(_QWORD *)(v32 + 32) = **((_QWORD **)this + 17);
          }
          goto LABEL_25;
        }
LABEL_38:
        __fastfail(3u);
      }
      v15 = v14 + 112;
    }
    else if ( *((_BYTE *)this + 129) )
    {
      v15 = v14 + 96;
    }
    else
    {
      v15 = v14 + 80;
    }
    v16 = *(_QWORD **)(v15 + 8);
    if ( *v16 == v15 )
      goto LABEL_22;
    goto LABEL_38;
  }
LABEL_25:
  v21 = (VIDMM_DEVICE *)*((_QWORD *)this + 17);
  ++*((_DWORD *)v21 + 18);
  VIDMM_DEVICE::EnsureSchedulable(v21, 1);
  ++*(_DWORD *)(*((_QWORD *)this + 10) + 168LL);
  v22 = *((_QWORD *)this + 10) + 144LL;
  *(_QWORD *)(v22 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v22, 0LL);
  KeLeaveCriticalRegion();
}
