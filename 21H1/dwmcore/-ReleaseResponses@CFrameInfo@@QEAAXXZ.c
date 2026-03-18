/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800D8488
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800D83E8 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18015A8A0 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 58); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 208, 8u);
}
