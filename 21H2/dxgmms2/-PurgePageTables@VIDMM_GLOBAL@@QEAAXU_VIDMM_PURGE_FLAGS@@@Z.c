/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AB3CC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C002DBF4 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00A7158 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2, void (*a3)(void *), void *a4)
{
  __int64 i; // r15
  __int64 v7; // rsi
  char v8; // al
  char v9; // cl
  CVirtualAddressAllocator *v10; // rbp
  _QWORD *v11; // rdx
  CVirtualAddressAllocator ***v12; // r9
  CVirtualAddressAllocator ***v13; // r8
  CVirtualAddressAllocator *j; // r14
  CVirtualAddressAllocator *v15; // [rsp+20h] [rbp-28h] BYREF
  CVirtualAddressAllocator **v16; // [rsp+28h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 7016); *(_BYTE *)(v7 + 436) = v9 & 0x7F )
    {
      v7 = *(_QWORD *)(a1 + 40224) + 1584LL * (unsigned int)i;
      v8 = *(_BYTE *)(v7 + 436);
      v9 = v8;
      if ( (v8 & 1) != 0 && ((a2 & 1) == 0 || v8 < 0) )
      {
        v16 = &v15;
        v15 = (CVirtualAddressAllocator *)&v15;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 41040));
        v11 = *(_QWORD **)(a1 + 41088);
        if ( v11 != (_QWORD *)(a1 + 41088) )
        {
          v12 = (CVirtualAddressAllocator ***)v16;
          do
          {
            v13 = (CVirtualAddressAllocator ***)v11[60];
            if ( v13 && v11[2] != *(_QWORD *)(a1 + 40384) )
            {
              if ( *v12 != &v15 )
                __fastfail(3u);
              v13[1] = (CVirtualAddressAllocator **)v12;
              *v13 = &v15;
              *v12 = (CVirtualAddressAllocator **)v13;
              v12 = v13;
              v16 = (CVirtualAddressAllocator **)v13;
            }
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != (_QWORD *)(a1 + 41088) );
        }
        ExReleasePushLockSharedEx(a1 + 41040, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v15; j != (CVirtualAddressAllocator *)&v15; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v7 + 436) |= 0x10u;
        v9 = *(_BYTE *)(v7 + 436);
      }
      v10 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40416);
      if ( v10 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 437) & 1) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, a3, a4);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF);
        *(_BYTE *)(a1 + 40936) |= 0x10u;
        CVirtualAddressAllocator::EvictRootPageTable(v10, i, a2 & 1);
        *(_BYTE *)(a1 + 40936) &= ~0x10u;
        v9 = *(_BYTE *)(v7 + 436) | 0x20;
      }
      *(_BYTE *)(v7 + 437) &= ~1u;
      i = (unsigned int)(i + 1);
    }
  }
}
