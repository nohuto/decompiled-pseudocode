/*
 * XREFs of ?OnInputProviderChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@I@Z @ 0x18010CE30
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnInputProviderChanged(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this + 7);
  memcpy_0((void *)(v4 + 56), a3, 0x60CuLL);
  v6 = *(_QWORD *)(v4 + 1608);
  result = 0LL;
  *(_DWORD *)(v4 + 1604) = a4;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v4 + 56, a4);
  return result;
}
