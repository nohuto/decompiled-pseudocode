/*
 * XREFs of ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800DF4BC
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18004EC70 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::EnqueueOffThreadPreComputeRequest(
        CComposition *this,
        struct _SLIST_ENTRY *a2,
        void *a3,
        struct _SLIST_ENTRY *a4)
{
  struct _SLIST_ENTRY *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( *((_BYTE *)this + 1132) )
  {
    v10 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467260, 0x97Fu, 0LL);
  }
  else
  {
    v8 = (struct _SLIST_ENTRY *)DefaultHeap::Alloc(0x30uLL);
    if ( v8 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8[2] = 0LL;
      v8[2].Next = a4;
      v8[1].Next = a2;
      v10 = 0;
      *((_QWORD *)&v8[1].Next + 1) = a3;
      if ( !InterlockedPushEntrySList((PSLIST_HEADER)this + 69, v8) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 63) + 96LL))(
          *((_QWORD *)this + 63),
          0LL,
          0x100000LL);
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x983u, 0LL);
    }
  }
  return v10;
}
