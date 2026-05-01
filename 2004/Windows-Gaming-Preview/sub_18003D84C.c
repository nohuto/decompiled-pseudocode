/*
 * XREFs of sub_18003D84C @ 0x18003D84C
 * Callers:
 *     sub_18003D810 @ 0x18003D810 (sub_18003D810.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall sub_18003D84C(__int64 a1)
{
  struct _TP_WORK *v2; // rdi
  __int64 v3; // rcx
  HRESULT result; // eax

  *(_QWORD *)a1 = off_18004DAB0;
  EnterCriticalSection(&stru_18005AF60);
  v2 = qword_18005AE00;
  LeaveCriticalSection(&stru_18005AF60);
  if ( v2 )
    WaitForThreadpoolWorkCallbacks(v2, 0);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  result = WindowsDeleteString(*(HSTRING *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
