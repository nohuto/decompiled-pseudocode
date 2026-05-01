/*
 * XREFs of sub_18003F3F0 @ 0x18003F3F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j__o_free @ 0x1800450E0 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_18003F3F0(struct _RTL_CRITICAL_SECTION *a1, char a2)
{
  __int64 v4; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  char *v7; // rcx

  a1->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)off_18004DDD0;
  DeleteCriticalSection(a1 + 19);
  SpinCount = a1[18].SpinCount;
  if ( SpinCount )
  {
    a1[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = a1[18].LockSemaphore;
  if ( LockSemaphore )
    j_j__o_free(LockSemaphore, v4);
  v7 = (char *)a1->LockSemaphore;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  j_j__o_free(a1->OwningThread, v4);
  a1->RecursionCount = -1073741823;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
