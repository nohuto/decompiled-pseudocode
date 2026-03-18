/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C00B7FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00BA528 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00BA790 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CConnection **this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  DirectComposition::CConnection *v3; // rcx

  (*((void (__fastcall **)(DirectComposition::CConnection **, struct _WIN32_DELETEMETHOD_PARAMETERS *))*this + 1))(
    this,
    a2);
  v3 = this[2];
  if ( v3 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      DirectComposition::CConnection::ReleaseSystemResource(v3, *((unsigned int *)this + 6));
      v3 = this[2];
    }
    DirectComposition::CConnection::Release(v3);
    this[2] = 0LL;
  }
  return 0LL;
}
