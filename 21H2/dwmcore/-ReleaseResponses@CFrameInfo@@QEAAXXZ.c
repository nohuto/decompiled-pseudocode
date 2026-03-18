/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18007CB0C
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x1801CA600 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  }
  *((_DWORD *)this + 54) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 192, 8LL);
}
