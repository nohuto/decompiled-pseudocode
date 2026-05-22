/*
 * XREFs of ?Release@InputStateManager@@UEAAKXZ @ 0x180011430
 * Callers:
 *     ?Release@InputStateManager@@W7EAAKXZ @ 0x18004B580 (-Release@InputStateManager@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x18004B590 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x18004B5A0 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::Release(InputStateManager *this)
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
