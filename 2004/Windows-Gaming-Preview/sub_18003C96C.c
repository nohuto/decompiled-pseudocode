/*
 * XREFs of sub_18003C96C @ 0x18003C96C
 * Callers:
 *     sub_18003C930 @ 0x18003C930 (sub_18003C930.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18003C96C(_QWORD *a1)
{
  struct _TP_WORK *v2; // rdi
  __int64 v3; // rcx

  *a1 = off_18004DA80;
  EnterCriticalSection(&stru_18005AF28);
  v2 = pwk;
  LeaveCriticalSection(&stru_18005AF28);
  if ( v2 )
    WaitForThreadpoolWorkCallbacks(v2, 0);
  v3 = a1[1];
  if ( v3 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
