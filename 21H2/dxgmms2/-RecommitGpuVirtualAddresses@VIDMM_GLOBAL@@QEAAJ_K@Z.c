/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B2CC0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001098 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BDAA4 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  char *v3; // r14
  __int64 v5; // rdi
  _QWORD *v6; // r8
  CVirtualAddressAllocator ***v7; // rdx
  CVirtualAddressAllocator ***v8; // rcx
  CVirtualAddressAllocator *i; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  CVirtualAddressAllocator *v16; // [rsp+20h] [rbp-10h] BYREF
  CVirtualAddressAllocator **v17; // [rsp+28h] [rbp-8h]
  struct VIDMM_ALLOC *v18; // [rsp+50h] [rbp+20h] BYREF

  v17 = &v16;
  v3 = (char *)this + 41040;
  v16 = (CVirtualAddressAllocator *)&v16;
  LODWORD(v5) = 0;
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41040));
  v6 = (_QWORD *)*((_QWORD *)this + 5136);
  if ( v6 != (_QWORD *)((char *)this + 41088) )
  {
    v7 = (CVirtualAddressAllocator ***)v17;
    do
    {
      v8 = (CVirtualAddressAllocator ***)v6[60];
      if ( v8 && v6[2] != *((_QWORD *)this + 5048) )
      {
        if ( *v7 != &v16 )
          __fastfail(3u);
        v8[1] = (CVirtualAddressAllocator **)v7;
        *v8 = &v16;
        *v7 = (CVirtualAddressAllocator **)v8;
        v7 = v8;
        v17 = (CVirtualAddressAllocator **)v8;
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)((char *)this + 41088) );
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  for ( i = v16; i != (CVirtualAddressAllocator *)&v16; i = *(CVirtualAddressAllocator **)i )
  {
    v18 = 0LL;
    v10 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(i, a2, &v18);
    v5 = v10;
    if ( v10 < 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = a2;
      *(_QWORD *)(v14 + 32) = v5;
      WdLogEvent5_WdAssertion(v14);
      return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
