/*
 * XREFs of ?OnMenuPressed@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z @ 0x18010D4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMenuPressed(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 1608LL);
  result = 0LL;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a3, a4);
  return result;
}
