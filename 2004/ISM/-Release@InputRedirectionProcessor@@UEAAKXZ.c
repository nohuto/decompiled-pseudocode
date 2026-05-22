/*
 * XREFs of ?Release@InputRedirectionProcessor@@UEAAKXZ @ 0x18000D0B0
 * Callers:
 *     ?Release@InputRedirectionProcessor@@W7EAAKXZ @ 0x18004CEA0 (-Release@InputRedirectionProcessor@@W7EAAKXZ.c)
 *     ?Release@InputRedirectionProcessor@@WBA@EAAKXZ @ 0x18004CEB0 (-Release@InputRedirectionProcessor@@WBA@EAAKXZ.c)
 *     ?Release@InputRedirectionProcessor@@WBI@EAAKXZ @ 0x18004CEC0 (-Release@InputRedirectionProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::Release(InputRedirectionProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 24);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
