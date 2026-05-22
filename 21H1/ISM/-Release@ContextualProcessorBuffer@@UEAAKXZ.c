/*
 * XREFs of ?Release@ContextualProcessorBuffer@@UEAAKXZ @ 0x18000BB10
 * Callers:
 *     ?Release@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18004CE70 (-Release@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBA@EAAKXZ @ 0x18004CE80 (-Release@ContextualProcessorBuffer@@WBA@EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18004CE90 (-Release@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WCA@EAAKXZ @ 0x18004CEA0 (-Release@ContextualProcessorBuffer@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Release(ContextualProcessorBuffer *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v1 = (_DWORD *)((char *)this + 32);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 32);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
