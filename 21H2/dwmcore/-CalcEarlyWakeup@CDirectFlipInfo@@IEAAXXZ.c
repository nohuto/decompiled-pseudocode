/*
 * XREFs of ?CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ @ 0x180103C04
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801DEEC8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDirectFlipInfo::CalcEarlyWakeup(CDirectFlipInfo *this)
{
  struct CComposition *v1; // rax
  int v3; // ecx
  int v4; // ecx

  v1 = g_pComposition;
  *((_BYTE *)this + 124) = 0;
  if ( *(_BYTE *)(*((_QWORD *)v1 + 27) + 577LL) )
  {
    v3 = *((_DWORD *)this + 13) - 1;
    if ( !v3 )
      goto LABEL_8;
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 2 )
        return;
LABEL_8:
      *((_BYTE *)this + 124) = 1;
      return;
    }
    if ( !*((_BYTE *)this + 122)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2)) == 2 )
    {
      goto LABEL_8;
    }
  }
}
