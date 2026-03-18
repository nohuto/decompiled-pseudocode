/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C2020
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800CDF38 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d

  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 7) + 24LL))((char *)this + 56) == a2 )
  {
    v6 = *((_DWORD *)this + 75);
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 74);
      if ( v7 )
        CMessageConversationHost::FlushCallbackId(
          *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1080LL),
          v6,
          v7);
    }
    *((_DWORD *)this + 74) = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
