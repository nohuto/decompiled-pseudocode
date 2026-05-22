/*
 * XREFs of ?Release@GameInputProcessor@@UEAAKXZ @ 0x18000D440
 * Callers:
 *     ?Release@GameInputProcessor@@W7EAAKXZ @ 0x18004CE40 (-Release@GameInputProcessor@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GameInputProcessor::Release(GameInputProcessor *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (_DWORD *)((char *)this + 8);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    *((_DWORD *)this + 4) = 1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 8);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
