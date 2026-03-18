/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00D4BA0
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C002D778 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C002DA4C (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rcx
  bool v10; // zf
  volatile signed __int32 **v11; // rbx
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // rcx
  char v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v5 = (char *)*((_QWORD *)this + 9);
  if ( v5 )
    VidSchiReleaseSyncObjectReference(v5, a2);
  v6 = (void *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      do
      {
        VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * v7), a2, a3, a4);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 8) );
      v6 = (void *)*((_QWORD *)this + 8);
    }
    operator delete(v6);
  }
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    if ( *(_QWORD *)v8 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*(_QWORD *)v8 + 56LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v15);
      v10 = *((_QWORD *)this + 14) == 0LL;
      v16 = 2;
      if ( !v10 )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
      v8 = *((_QWORD *)this + 11);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 24), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v11 = (volatile signed __int32 **)((char *)this + 96);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == (volatile signed __int32 *)v11 )
      break;
    if ( *((volatile signed __int32 ***)v12 + 1) != v11
      || (v13 = *(volatile signed __int32 **)v12, *(volatile signed __int32 **)(*(_QWORD *)v12 + 8LL) != v12) )
    {
      __fastfail(3u);
    }
    *v11 = v13;
    *((_QWORD *)v13 + 1) = v11;
    *((_QWORD *)v12 + 1) = 0LL;
    *(_QWORD *)v12 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12 - 2);
  }
}
