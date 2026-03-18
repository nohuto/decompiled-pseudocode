/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00AE9B8
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002307C (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BF88 (VidSchiReleaseSyncObjectReference.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012368 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C0023598 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023BC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  char *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  VIDMM_GLOBAL *v6; // rcx
  bool v7; // zf
  _QWORD **v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 )
    VidSchiReleaseSyncObjectReference(v2);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      do
      {
        VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * v4));
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 8) );
      v3 = (void *)*((_QWORD *)this + 8);
    }
    operator delete(v3);
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*(_QWORD *)v5 + 56LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v12);
      v7 = *((_QWORD *)this + 14) == 0LL;
      v13 = 2;
      if ( !v7 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      v5 = *((_QWORD *)this + 11);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(v5 + 24), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v8 = (_QWORD **)((char *)this + 96);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    v10[1] = v8;
    v9[1] = 0LL;
    *v9 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v9 - 1));
  }
}
