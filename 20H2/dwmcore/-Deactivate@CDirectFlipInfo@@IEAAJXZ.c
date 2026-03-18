/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@IEAAJXZ @ 0x180183814
 * Callers:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18009CF50 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x180183B2C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 216LL))(*((_QWORD *)this + 2));
  if ( CDirectFlipInfo::IsIndependentFlip(this) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int))(**((_QWORD **)this + 2) + 272LL))(
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0,
      -1);
  *((_DWORD *)this + 12) = ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 176LL))(*((_QWORD *)this + 2)) != 0)
                         + 2;
  result = 0LL;
  *((_BYTE *)this + 114) = 0;
  return result;
}
