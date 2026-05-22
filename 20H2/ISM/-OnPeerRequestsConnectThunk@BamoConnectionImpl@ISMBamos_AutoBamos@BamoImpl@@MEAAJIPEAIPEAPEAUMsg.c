/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x180011AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        __int64 a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, struct MsgString **))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
