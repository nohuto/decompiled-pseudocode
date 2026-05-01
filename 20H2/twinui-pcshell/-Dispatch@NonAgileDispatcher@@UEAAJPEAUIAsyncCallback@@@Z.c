/*
 * XREFs of ?Dispatch@NonAgileDispatcher@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1801E7C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NonAgileDispatcher::Dispatch(NonAgileDispatcher *this, struct IAsyncCallback *a2)
{
  return (*(__int64 (__fastcall **)(struct IAsyncCallback *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
}
