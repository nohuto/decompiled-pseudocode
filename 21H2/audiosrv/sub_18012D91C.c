/*
 * XREFs of sub_18012D91C @ 0x18012D91C
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 *     sub_1800DDCB0 @ 0x1800DDCB0 (sub_1800DDCB0.c)
 *     sub_18012DBE0 @ 0x18012DBE0 (sub_18012DBE0.c)
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18012D91C(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 v2; // rdi
  HANDLE OwningThread; // rdx

  v2 = qword_18019E640;
  EnterCriticalSection(lpCriticalSection);
  OwningThread = lpCriticalSection[3].OwningThread;
  if ( OwningThread )
  {
    (*(void (__fastcall **)(__int64, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      OwningThread,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(__int64, HANDLE, __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      lpCriticalSection[3].OwningThread,
      1LL);
  }
  LeaveCriticalSection(lpCriticalSection);
}
