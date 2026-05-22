/*
 * XREFs of ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18019C1EC
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18019C080 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18019C42C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?OnDpiScaleChanged@DWMCursor@@AEAAJXZ @ 0x18019CEE4 (-OnDpiScaleChanged@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::SendAndVerifyEndpoints(DWMCursorBroker *this, struct CursorMessage *a2)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi

  v3 = (_QWORD *)((char *)this + 216);
  v5 = 10LL;
  do
  {
    if ( *v3
      && (*(int (__fastcall **)(_QWORD, _QWORD, __int64, struct CursorMessage *, int))(**((_QWORD **)this + 22) + 168LL))(
           *((_QWORD *)this + 22),
           *v3,
           4LL,
           a2,
           64) < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 160LL))(*((_QWORD *)this + 22), *v3);
      *v3 = 0LL;
    }
    v3 += 3;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
