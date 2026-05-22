/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x180011A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool *, struct Microsoft::Bamo::BamoPrincipal **))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)a2 + 2),
           a3,
           a4);
}
