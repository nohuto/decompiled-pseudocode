/*
 * XREFs of ?OnPeerConnected@InputSystemServerConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x1800119F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSystemServerConnection::OnPeerConnected(
        InputSystemServerConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx

  *a3 = 1;
  v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 23);
  *a4 = v4;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct ISMBamos_AutoBamos::BamoPeer *))v4)(v4, a2);
  return 0LL;
}
