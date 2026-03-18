/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B39D0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0023744 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0087DD4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2)
{
  __int64 i; // rbp
  __int64 v5; // rsi
  char v6; // al
  char v7; // cl
  _QWORD *v8; // rdx
  CVirtualAddressAllocator ***v9; // r9
  CVirtualAddressAllocator ***v10; // r8
  CVirtualAddressAllocator *j; // r14
  CVirtualAddressAllocator *v12; // r14
  CVirtualAddressAllocator *v13; // [rsp+20h] [rbp-28h] BYREF
  CVirtualAddressAllocator **v14; // [rsp+28h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 7000); *(_BYTE *)(v5 + 436) = v7 & 0x7F )
    {
      v5 = *(_QWORD *)(a1 + 40216) + 1584LL * (unsigned int)i;
      v6 = *(_BYTE *)(v5 + 436);
      v7 = v6;
      if ( (v6 & 1) != 0 && ((a2 & 1) == 0 || v6 < 0) )
      {
        v14 = &v13;
        v13 = (CVirtualAddressAllocator *)&v13;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 41040));
        v8 = *(_QWORD **)(a1 + 41088);
        if ( v8 != (_QWORD *)(a1 + 41088) )
        {
          v9 = (CVirtualAddressAllocator ***)v14;
          do
          {
            v10 = (CVirtualAddressAllocator ***)v8[60];
            if ( v10 && v8[2] != *(_QWORD *)(a1 + 40384) )
            {
              if ( *v9 != &v13 )
                __fastfail(3u);
              v10[1] = (CVirtualAddressAllocator **)v9;
              *v10 = &v13;
              *v9 = (CVirtualAddressAllocator **)v10;
              v9 = v10;
              v14 = (CVirtualAddressAllocator **)v10;
            }
            v8 = (_QWORD *)*v8;
          }
          while ( v8 != (_QWORD *)(a1 + 41088) );
        }
        ExReleasePushLockSharedEx(a1 + 41040, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v13; j != (CVirtualAddressAllocator *)&v13; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v5 + 436) |= 0x10u;
        v7 = *(_BYTE *)(v5 + 436);
      }
      v12 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40416);
      if ( v12 && ((a2 & 1) == 0 || (*(_BYTE *)(v5 + 437) & 1) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF);
        *(_BYTE *)(a1 + 40936) |= 0x10u;
        CVirtualAddressAllocator::EvictRootPageTable(v12, i, a2 & 1);
        *(_BYTE *)(a1 + 40936) &= ~0x10u;
        v7 = *(_BYTE *)(v5 + 436) | 0x20;
      }
      *(_BYTE *)(v5 + 437) &= ~1u;
      i = (unsigned int)(i + 1);
    }
  }
}
