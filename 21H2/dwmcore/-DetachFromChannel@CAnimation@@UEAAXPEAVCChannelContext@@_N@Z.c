/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800E1340
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800EB714 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d

  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 8) + 24LL))((char *)this + 64) == a2 )
  {
    v6 = *((_DWORD *)this + 77);
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 76);
      if ( v7 )
        CMessageConversationHost::FlushCallbackId(
          *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1240LL),
          v6,
          v7);
    }
    *((_DWORD *)this + 76) = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
