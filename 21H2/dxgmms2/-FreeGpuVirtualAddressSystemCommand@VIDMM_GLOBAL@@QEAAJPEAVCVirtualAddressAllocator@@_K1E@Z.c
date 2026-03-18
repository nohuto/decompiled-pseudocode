/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00A2EC8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0087E10 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00A303C (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A6A9C (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *v8; // rbx
  int started; // eax
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 i; // rbp
  _QWORD *j; // r14
  __int64 v14; // r8
  _QWORD *v16; // r14
  unsigned int v17; // ecx
  void *v18; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-68h] BYREF
  DXGPUSHLOCK *v20; // [rsp+38h] [rbp-60h]
  int v21; // [rsp+40h] [rbp-58h]
  _BYTE v22[8]; // [rsp+48h] [rbp-50h] BYREF
  DXGPUSHLOCK *v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+58h] [rbp-40h]
  struct _KTHREAD *v25; // [rsp+A8h] [rbp+10h]
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, a2 + 7, 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v8 = a2[6];
  v21 = 1;
  v26 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v26, (struct _RTL_BALANCED_NODE *)v8);
    if ( started < 0 )
    {
      v8 = *(struct _KTHREAD **)v8;
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = (struct _KTHREAD *)*((_QWORD *)v8 + 1);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) != 0 && !a5 )
    {
      WdLogSingleEntry3(3LL, a2, a3, 20545LL);
    }
    else
    {
      v10 = *((_QWORD *)v8 + 3);
      v11 = *((_QWORD *)v8 + 4) - v10;
      v25 = a2[12];
      if ( *((_QWORD *)this + 5123) )
      {
        v16 = (_QWORD *)operator new(32LL, 0x32356956u, 256LL);
        if ( v16 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
          *((_QWORD *)this + 5126) = KeGetCurrentThread();
          v17 = *((_DWORD *)this + 10248);
          if ( v17 == dword_1C006E41C )
          {
            *((_DWORD *)this + 10248) = 0;
            v17 = 0;
          }
          v18 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v17 + 16);
          if ( v18 )
            operator delete(v18);
          *v16 = *(_QWORD *)v25;
          v16[1] = *((_QWORD *)v25 + 4);
          v16[2] = v10;
          v16[3] = v11;
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v16;
          *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 15;
          *((_QWORD *)this + 5126) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1754); i = (unsigned int)(i + 1) )
      {
        for ( j = (_QWORD *)*((_QWORD *)v8 + 3 * i + 12); j != (_QWORD *)((char *)v8 + 24 * i + 96); j = (_QWORD *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a2,
            (struct VIDMM_MAPPED_VA_RANGE *)(j - 1),
            1u,
            0LL);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, a2 + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v23);
      v24 = 2;
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8, v14);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, a3);
    return 3221225485LL;
  }
}
