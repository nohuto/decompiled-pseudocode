/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180053ED0
 * Callers:
 *     ??_ECHWDrawListEntry@@GBA@EAAPEAXI@Z @ 0x1800F0A10 (--_ECHWDrawListEntry@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001BCA4 (-clear_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntr.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(
        CHWDrawListEntry *this,
        char a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rcx
  CHWDrawListEntry **v8; // rsi
  CHWDrawListEntry *v9; // rdi
  __int64 v10; // rcx
  int Current; // eax
  struct CThreadContext *v12; // rcx
  HANDLE ProcessHeap; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CThreadContext *v16; // [rsp+40h] [rbp+8h] BYREF

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CHWDrawListEntry::`vftable'{for `CBaseDrawListEntry'};
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 23);
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (CHWDrawListEntry **)((char *)this + 64);
  v9 = (CHWDrawListEntry *)*((_QWORD *)this + 8);
  v10 = *((_QWORD *)this + 9) - (_QWORD)v9;
  if ( v10 / 76 )
  {
    detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 8,
      0LL,
      v10 / 76);
    v9 = *v8;
  }
  *v8 = 0LL;
  if ( v9 == (CHWDrawListEntry *)((char *)this + 88) )
    v9 = 0LL;
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC8, a3);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v16);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v12 = v16;
      if ( *((_DWORD *)v16 + 19) >= *((_DWORD *)v16 + 18) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v16 + 10);
        ++*((_DWORD *)v12 + 19);
        *((_QWORD *)v12 + 10) = this;
      }
    }
  }
  return this;
}
