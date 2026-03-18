/*
 * XREFs of ?CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ @ 0x1801853E8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180185110 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDirectFlipInfo::CheckCustomPresentDuration(CDirectFlipInfo *this)
{
  char v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax
  int v5; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
  if ( v3 != *((_DWORD *)this + 14) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 104LL))(v4, v3);
    if ( v5 != *((_DWORD *)this + 15) )
    {
      *((_DWORD *)this + 15) = v5;
      v2 = 1;
    }
    *((_DWORD *)this + 14) = v3;
  }
  return v2;
}
