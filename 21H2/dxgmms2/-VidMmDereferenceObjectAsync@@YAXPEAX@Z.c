/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007C570
 * Callers:
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C007C74C (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D71F0 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F1540 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00F1770 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C007C5C4 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v6[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, 0x48uLL);
  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, &BeginVidMmDereferenceObjectAsync, v3, Object);
  LODWORD(v6[4]) = 1;
  v6[5] = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
