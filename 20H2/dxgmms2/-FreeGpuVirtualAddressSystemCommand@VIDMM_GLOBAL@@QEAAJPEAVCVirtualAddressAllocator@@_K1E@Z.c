/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C006AAE4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007E17C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00115BC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007DAA4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C007EAE8 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0087530 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  struct _KTHREAD *v8; // rbx
  int started; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  unsigned int v19; // ecx
  void *v20; // rcx
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-68h] BYREF
  DXGPUSHLOCK *v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-58h]
  _BYTE v25[8]; // [rsp+48h] [rbp-50h] BYREF
  DXGPUSHLOCK *v26; // [rsp+50h] [rbp-48h]
  int v27; // [rsp+58h] [rbp-40h]
  struct _KTHREAD *v28; // [rsp+A8h] [rbp+10h]
  __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v29 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, a2 + 7, 0LL);
  DXGPUSHLOCK::AcquireShared(v23);
  v8 = a2[6];
  v24 = 1;
  v29 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v29, (struct _RTL_BALANCED_NODE *)v8);
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) == 0 || a5 )
    {
      v12 = *((_QWORD *)v8 + 3);
      v13 = *((_QWORD *)v8 + 4) - v12;
      v28 = a2[12];
      if ( *((_QWORD *)this + 5123) )
      {
        v18 = operator new[](0x20uLL, 0x32356956u, PagedPool);
        if ( v18 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
          *((_QWORD *)this + 5126) = KeGetCurrentThread();
          v19 = *((_DWORD *)this + 10248);
          if ( v19 == dword_1C00513AC )
          {
            *((_DWORD *)this + 10248) = 0;
            v19 = 0;
          }
          v20 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v19 + 16);
          if ( v20 )
            operator delete(v20);
          *v18 = *(_QWORD *)v28;
          v18[1] = *((_QWORD *)v28 + 4);
          v18[2] = v12;
          v18[3] = v13;
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v18;
          *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 15;
          *((_QWORD *)this + 5126) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1750); i = (unsigned int)(i + 1) )
      {
        for ( j = (_QWORD *)*((_QWORD *)v8 + 3 * i + 12); j != (_QWORD *)((char *)v8 + 24 * i + 96); j = (_QWORD *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a2,
            (struct VIDMM_MAPPED_VA_RANGE *)(j - 1),
            1u,
            0LL);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, a2 + 7, 0LL);
      DXGPUSHLOCK::AcquireExclusive(v26);
      v27 = 2;
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
      v17[3] = a2;
      v17[4] = a3;
      v17[5] = 19978LL;
      WdLogEvent5_WdWarning(v17);
    }
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = a3;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
}
