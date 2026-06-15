/*
 * XREFs of sub_180043B50 @ 0x180043B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180043B50(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax

  v4 = Context[3];
  v5 = Mtx_lock((_Mtx_t)(v4 + 88));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v4 + 80) )
    goto LABEL_5;
  v6 = *(_QWORD *)(Context[1] + 56LL);
  if ( !v6 )
  {
LABEL_8:
    std::_Xbad_function_call();
    goto LABEL_9;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_5:
  v7 = Mtx_unlock((_Mtx_t)(v4 + 88));
  if ( v7 )
  {
LABEL_9:
    std::_Throw_C_error(v7);
    __debugbreak();
    JUMPOUT(0x180099A5DLL);
  }
}
