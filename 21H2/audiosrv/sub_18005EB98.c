/*
 * XREFs of sub_18005EB98 @ 0x18005EB98
 * Callers:
 *     sub_18005EAB8 @ 0x18005EAB8 (sub_18005EAB8.c)
 * Callees:
 *     sub_18005EC54 @ 0x18005EC54 (sub_18005EC54.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18005EB98(LPCRITICAL_SECTION lpCriticalSection, void *a2)
{
  __int64 v4; // rax

  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection[1].LockSemaphore = a2;
  QueryPerformanceFrequency((LARGE_INTEGER *)&lpCriticalSection[1]);
  *(_QWORD *)&lpCriticalSection[1].LockCount = CreateThreadpoolTimer(sub_1800C1CC0, lpCriticalSection, 0LL);
  if ( a2 )
    (*(void (__fastcall **)(void *, __int64, ULONG_PTR *, char *, LPCRITICAL_SECTION))(*(_QWORD *)a2 + 152LL))(
      a2,
      0xFFFFFFFFLL,
      &lpCriticalSection[1].SpinCount,
      (char *)&lpCriticalSection[1].SpinCount + 4,
      lpCriticalSection + 2);
  v4 = sub_18005EC54(lpCriticalSection);
  *(_QWORD *)&lpCriticalSection[2].LockCount = *(_QWORD *)v4;
  LODWORD(v4) = *(_DWORD *)(v4 + 8);
  LODWORD(lpCriticalSection[2].OwningThread) = v4;
  HIDWORD(lpCriticalSection[2].DebugInfo) = v4;
  LeaveCriticalSection(lpCriticalSection);
}
