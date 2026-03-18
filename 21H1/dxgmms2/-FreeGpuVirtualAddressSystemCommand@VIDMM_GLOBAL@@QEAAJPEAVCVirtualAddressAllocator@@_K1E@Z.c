/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0087314
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001F64 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0074384 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00755C0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0087494 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 i; // rbp
  _QWORD *j; // r14
  __int64 v16; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  unsigned int v20; // ecx
  void *v21; // rcx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-68h] BYREF
  DXGPUSHLOCK *v24; // [rsp+38h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-58h]
  _BYTE v26[8]; // [rsp+48h] [rbp-50h] BYREF
  DXGPUSHLOCK *v27; // [rsp+50h] [rbp-48h]
  int v28; // [rsp+58h] [rbp-40h]
  struct _KTHREAD *v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v30 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, a2 + 7, 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v8 = a2[6];
  v25 = 1;
  v30 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v30, (struct _RTL_BALANCED_NODE *)v8);
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) == 0 || a5 )
    {
      v12 = *((_QWORD *)v8 + 3);
      v13 = *((_QWORD *)v8 + 4) - v12;
      v29 = a2[12];
      if ( *((_QWORD *)this + 5123) )
      {
        v19 = operator new[](0x20uLL, 0x32356956u, PagedPool);
        if ( v19 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
          *((_QWORD *)this + 5126) = KeGetCurrentThread();
          v20 = *((_DWORD *)this + 10248);
          if ( v20 == dword_1C00513AC )
          {
            *((_DWORD *)this + 10248) = 0;
            v20 = 0;
          }
          v21 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v20 + 16);
          if ( v21 )
            operator delete(v21);
          *v19 = *(_QWORD *)v29;
          v19[1] = *((_QWORD *)v29 + 4);
          v19[2] = v12;
          v19[3] = v13;
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v19;
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
            1,
            0LL);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, a2 + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v27);
      v28 = 2;
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8, v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
      v18[3] = a2;
      v18[4] = a3;
      v18[5] = 20011LL;
      WdLogEvent5_WdWarning(v18);
    }
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = a3;
    WdLogEvent5_WdWarning(v22);
    return 3221225485LL;
  }
}
