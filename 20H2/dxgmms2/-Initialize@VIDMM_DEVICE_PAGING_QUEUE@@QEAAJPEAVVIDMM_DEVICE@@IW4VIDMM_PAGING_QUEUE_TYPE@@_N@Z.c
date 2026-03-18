/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C007FA70
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C007F71C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C007FD70 (VidSchCreateSyncObject.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C008044C (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00B8F0C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  int SyncObject; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rax
  int v19[20]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 624LL);
  *(_DWORD *)(a1 + 160) = a3;
  v8 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1);
  v12 = v8;
  if ( v8 < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v18 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v18 + 32) = v12;
    WdLogEvent5_WdAssertion(v18);
    return (unsigned int)v12;
  }
  memset(v19, 0, sizeof(v19));
  v19[0] = 5;
  *(_QWORD *)&v19[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(v7, 0, (int)v19, 2, 0LL, a1, (PVOID)(a1 + 152), 0LL);
  v12 = SyncObject;
  if ( SyncObject < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = a1;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v7 + 55)
    || a5
    || (LODWORD(v12) = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), (int)v12 >= 0) )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 152);
    result = 0LL;
    *(_QWORD *)(a1 + 96) = 4294962295LL;
    return result;
  }
  return (unsigned int)v12;
}
