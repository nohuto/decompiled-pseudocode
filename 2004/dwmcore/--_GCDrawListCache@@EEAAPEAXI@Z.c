/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800552E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800553BC (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180055570 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800555A8 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A0058 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // r8d
  int Current; // eax
  struct CThreadContext *v10; // rcx
  __int64 v12; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v14; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDrawListCache::`vftable';
  CDrawListCache::ReleaseDrawListEntries(this);
  v4 = detail::pointer_buffer_impl<CDrawListEntry *>::size((char *)this + 32);
  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32) + 8 * v4;
  v7 = (v5 - detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32)) >> 3;
  if ( v7 )
    detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
      (char *)this + 32,
      v6,
      v7);
  if ( (*((_BYTE *)this + 32) & 3) == 1 )
  {
    v12 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32);
    operator delete((void *)(v12 - 16));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x68, v8);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v14);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v10 = v14;
      if ( *((_DWORD *)v14 + 15) >= *((_DWORD *)v14 + 14) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v14 + 8);
        ++*((_DWORD *)v10 + 15);
        *((_QWORD *)v10 + 8) = this;
      }
    }
  }
  return this;
}
