/*
 * XREFs of sub_180003E50 @ 0x180003E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003ECC @ 0x180003ECC (sub_180003ECC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180003E50(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 48));
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    sub_180003ECC(a2);
    v4 = *(void (__fastcall ****)(_QWORD, _QWORD))(a2 + 152);
    if ( v4 )
      (**v4)(v4, 0LL);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
