/*
 * XREFs of ?CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_KE@Z @ 0x1C00AF878
 * Callers:
 *     VidMmCreateCrossAdapterAllocation @ 0x1C0022940 (VidMmCreateCrossAdapterAllocation.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AA4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateCrossAdapterAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        SIZE_T a4,
        unsigned __int8 a5)
{
  unsigned int v5; // ebp
  HANDLE v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  KSPIN_LOCK *v13; // rax
  __int64 v14; // rcx
  KSPIN_LOCK *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax

  v5 = 0;
  v6 = 0LL;
  if ( !a3 || a5 || (v6 = MmSecureVirtualMemory(a3, a4, 4u)) != 0LL )
  {
    v13 = (KSPIN_LOCK *)operator new(0x30uLL, 0x64356956u, (__int64)a3, (POOL_TYPE)512);
    v15 = v13;
    if ( v13 )
    {
      v16 = v13 + 2;
      v16[1] = v16;
      *v16 = v16;
      KeInitializeSpinLock(v15 + 4);
    }
    else
    {
      v15 = 0LL;
    }
    *a2 = (struct _VIDMM_CROSSADAPTER_ALLOC *)v15;
    if ( v15 )
    {
      v15[1] = (KSPIN_LOCK)v6;
    }
    else
    {
      _InterlockedIncrement(&dword_1C00517BC);
      v17 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v17 + 24) = 2008LL;
      WdLogEvent5_WdLowResource(v17);
      v5 = -1073741801;
      if ( v6 )
        MmUnsecureVirtualMemory(v6);
      if ( *a2 )
        operator delete(*a2);
    }
    return v5;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9, a3);
    *(_QWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
}
