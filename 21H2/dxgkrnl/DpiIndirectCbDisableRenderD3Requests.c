/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1C02D5450
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax

  if ( DeviceObject )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 && *((_BYTE *)DeviceExtension + 1158) )
      {
        v7 = operator new[](0x20uLL, 0x74727044u, PagedPool);
        v12 = v7;
        if ( v7 )
        {
          *v7 = 0LL;
          v7[1] = 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v13 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
          v14 = -1073741670;
          *(_QWORD *)(v13 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v13);
          return v14;
        }
        KeWaitForSingleObject(&stru_1C00B3098, Executive, 0, 0, 0LL);
        if ( !byte_1C00B3090 )
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( !WorkItem )
          {
            v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
            v14 = -1073741670;
            *(_QWORD *)(v20 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v20);
LABEL_18:
            KeReleaseMutex(&stru_1C00B3098, 0);
            if ( v12 )
              ExFreePoolWithTag(v12, 0);
            return v14;
          }
          byte_1C00B3090 = 1;
          IoQueueWorkItemEx(
            WorkItem,
            (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
            DelayedWorkQueue,
            0LL);
        }
        *((_DWORD *)v12 + 4) = a2;
        *(_QWORD *)((char *)v12 + 20) = a3;
        v21 = (_QWORD *)qword_1C00B30D8;
        if ( *(void ***)qword_1C00B30D8 != &qword_1C00B30D0 )
          __fastfail(3u);
        *v12 = &qword_1C00B30D0;
        v12[1] = v21;
        *v21 = v12;
        qword_1C00B30D8 = (__int64)v12;
        v12 = 0LL;
        v14 = 0;
        goto LABEL_18;
      }
    }
  }
  return 3221225485LL;
}
