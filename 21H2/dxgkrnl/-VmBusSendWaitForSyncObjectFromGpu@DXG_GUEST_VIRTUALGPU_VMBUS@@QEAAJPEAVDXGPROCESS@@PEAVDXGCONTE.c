/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C024DE30
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EC3B0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0270660 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D240 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0290DFC (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        struct _KTHREAD **this,
        struct _KTHREAD **a2,
        struct DXGCONTEXT *a3,
        const unsigned int *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        const unsigned __int64 *Src,
        unsigned __int64 a8,
        unsigned int a9,
        struct DXGHWQUEUE *a10)
{
  struct DXGHWQUEUE *v10; // rbp
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int *v24; // rdi
  DXGSYNCOBJECT **v25; // r14
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  __int64 v28; // rbp
  char *v29; // r13
  unsigned int HostHandle; // eax
  int v31; // eax
  struct _MDL *v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-68h]
  unsigned int v39; // [rsp+24h] [rbp-64h]
  _BYTE v40[88]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGDEVICESYNCOBJECT **v43; // [rsp+B8h] [rbp+30h]

  v10 = a10;
  if ( !a10 )
  {
    if ( a3 )
      goto LABEL_8;
LABEL_7:
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 7994LL;
    goto LABEL_31;
  }
  if ( a3 )
    goto LABEL_7;
  if ( !a4 || !Src )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 8002LL;
LABEL_31:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
LABEL_8:
  v14 = a9;
  if ( a9 - 1 > 0x1FFFF )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 8009LL;
    goto LABEL_31;
  }
  v15 = 8 * a9 + 40;
  v16 = v15 + 4 * a9;
  v39 = v16;
  if ( v16 > 0x20000 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 8017LL;
    goto LABEL_31;
  }
  v19 = operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v19 )
  {
    v24 = (unsigned int *)((char *)v19 + v15);
    *v19 = 0LL;
    v19[1] = 0LL;
    *((_DWORD *)v19 + 4) = 25;
    if ( a10 )
    {
      memmove(v24, a4, 4 * a9);
      memmove(v19 + 5, Src, 8 * a9);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, a2);
      if ( a9 )
      {
        v25 = a5;
        v26 = (char *)v19 - (char *)a5;
        v27 = (char *)a6 - (char *)a5;
        v43 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v28 = a9;
        v29 = (char *)((char *)a4 - (char *)v24);
        do
        {
          v38 = *((_DWORD *)*v25 + 48);
          if ( (unsigned int)(v38 - 5) <= 1 )
          {
            *v24 = (*(_DWORD **)((char *)v25 + v27))[11];
            *(DXGSYNCOBJECT **)((char *)v25 + v26 + 40) = *(DXGSYNCOBJECT **)((char *)v25 + (char *)Src - (char *)a5);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v25, *(_DWORD *)&v29[(_QWORD)v24], v27);
            v26 = (char *)v19 - (char *)a5;
            v27 = (signed __int64)v43;
            *v24 = HostHandle;
            if ( v38 == 3 )
            {
              v19[5] = a8;
              *((_BYTE *)v19 + 32) = 1;
            }
          }
          ++v24;
          ++v25;
          --v28;
        }
        while ( v28 );
        v14 = a9;
        v10 = a10;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    }
    if ( v10 )
      v31 = *((_DWORD *)v10 + 7);
    else
      v31 = *((_DWORD *)a3 + 7);
    *((_DWORD *)v19 + 6) = v31;
    *((_DWORD *)v19 + 2) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
    *((_DWORD *)v19 + 7) = v14;
    v33 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)v19, v39, v32);
    v36 = v33;
    if ( v33 < 0 )
    {
      v37 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v37 + 24) = v36;
      WdLogEvent5_WdError(v37);
    }
    operator delete[](v19);
    return (unsigned int)v36;
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource(v18, v17, v20, v21);
    *(_QWORD *)(v22 + 24) = 8024LL;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
