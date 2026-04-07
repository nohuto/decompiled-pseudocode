/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___ @ 0x1800526A0
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013F70 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 8LL))(v5, *(_QWORD *)(**(_QWORD **)a2 + 384LL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
