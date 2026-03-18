/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00B0B10
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0069388 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0CA8 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C0015898 (VidSchIsDeviceBusy.c)
 *     VidSchFlushDevice @ 0x1C0069460 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  _QWORD **v5; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // rbx
  _QWORD *v11; // r9
  _QWORD *i; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (_QWORD **)(a2 + 36);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(a2[39]);
    v9 = *v5;
    v10 = 0LL;
    if ( *v5 != v5 )
    {
      do
      {
        v11 = v9 - 2;
        for ( i = (_QWORD *)*(v9 - 2); i != v11; i = (_QWORD *)*i )
        {
          if ( i - 5 != (_QWORD *)a3 )
          {
            v13 = *(i - 4);
            if ( !a4 || (v14 = *(_QWORD *)(v13 + 24)) != 0 && !*(_BYTE *)(*(_QWORD *)(v14 + 40) + 346LL) )
            {
              v10 = *(_QWORD *)(v13 + 32);
              if ( VidSchIsDeviceBusy(v10) )
                goto LABEL_13;
            }
          }
        }
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v5 );
      v10 = 0LL;
    }
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v8);
    if ( !v10 )
      break;
    v17[1] = 0LL;
    v17[0] = 5LL;
    VidSchFlushDevice(v10, (int *)v17, v15, v16);
  }
}
