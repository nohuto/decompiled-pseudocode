/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800AB98C
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180031180 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800AB15C (--1CVisual@@MEAA@XZ.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1801AC580 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801AC5D0 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AB954 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  CTreeData *v6; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 27) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 28) = 0LL;
  }
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 16);
  v6 = (CTreeData *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 == (CTreeData *)((char *)this + 152) )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
}
