/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x180005530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)a2 + 2));
}
