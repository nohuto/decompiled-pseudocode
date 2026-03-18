/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1C03926D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  _DWORD *DeviceExtension; // rax
  _OWORD *v8; // rax
  _QWORD *v9; // rbx
  struct _IO_WORKITEM *WorkItem; // rax
  unsigned int v11; // edi
  _QWORD *v12; // rax

  if ( DeviceObject )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 && *((_BYTE *)DeviceExtension + 1159) )
      {
        v8 = (_OWORD *)operator new[](0x20uLL, 0x74727044u, 256LL, a4);
        v9 = v8;
        if ( !v8 )
        {
          v11 = -1073741670;
          WdLogSingleEntry1(6LL, -1073741670LL);
          return v11;
        }
        *v8 = 0LL;
        v8[1] = 0LL;
        KeWaitForSingleObject(&stru_1C01309B8, Executive, 0, 0, 0LL);
        if ( !byte_1C01309B0 )
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( !WorkItem )
          {
            v11 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
LABEL_14:
            KeReleaseMutex(&stru_1C01309B8, 0);
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            return v11;
          }
          byte_1C01309B0 = 1;
          IoQueueWorkItemEx(
            WorkItem,
            (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
            DelayedWorkQueue,
            0LL);
        }
        *((_DWORD *)v9 + 4) = a2;
        *(_QWORD *)((char *)v9 + 20) = a3;
        v12 = (_QWORD *)qword_1C01309F8;
        if ( *(void ***)qword_1C01309F8 != &qword_1C01309F0 )
          __fastfail(3u);
        *v9 = &qword_1C01309F0;
        v9[1] = v12;
        *v12 = v9;
        qword_1C01309F8 = (__int64)v9;
        v9 = 0LL;
        v11 = 0;
        goto LABEL_14;
      }
    }
  }
  return 3221225485LL;
}
