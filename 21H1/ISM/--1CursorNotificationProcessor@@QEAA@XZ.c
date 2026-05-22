/*
 * XREFs of ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800B49C0
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$10 @ 0x18004EBF1 (_Win32kInterop--Win32kInterop_--_1_--dtor$10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CursorNotificationProcessor::~CursorNotificationProcessor(CursorNotificationProcessor *this)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 2) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 160LL))(*v2);
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 160LL))(*v2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this);
}
