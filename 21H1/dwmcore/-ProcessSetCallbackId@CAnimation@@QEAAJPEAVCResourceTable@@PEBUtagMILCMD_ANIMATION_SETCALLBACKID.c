/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1801BA4F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18007EC44 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800CDF38 (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETCALLBACKID *a3)
{
  __int64 v4; // rdx
  __int64 v7; // r8
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  __int64 v10; // rcx
  CDrawListEntry *v11; // rdi
  unsigned int v12; // esi
  CDrawListEntry *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *((unsigned int *)this + 75);
  if ( (_DWORD)v4 )
  {
    v7 = *((unsigned int *)this + 74);
    if ( (_DWORD)v7 )
      CMessageConversationHost::FlushCallbackId(*(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1080LL), v4, v7);
  }
  v8 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v14);
  v11 = v14;
  v12 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, AttachedChannel, 0x222u, 0LL);
  else
    *((_DWORD *)this + 75) = *((_DWORD *)v14 + 18);
  if ( v11 )
    CDrawListEntry::Release(v11);
  return v12;
}
