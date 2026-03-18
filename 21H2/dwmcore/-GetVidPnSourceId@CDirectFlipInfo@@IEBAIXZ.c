/*
 * XREFs of ?GetVidPnSourceId@CDirectFlipInfo@@IEBAIXZ @ 0x1801DF6C8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1801DF4A4 (-EnableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetVidPnSourceId(CDirectFlipInfo *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
}
