/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B0840
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800ADF90 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800B08B0 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B0A74 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180168B58 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rax
  __int64 v6; // rcx
  CMessageConversationHost *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMessageConversationHost *)DefaultHeap::AllocClear(0x38uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    v8 = CMessageConversationHost::Initialize(v5);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Cu, 0LL);
      CMessageConversationHost::Disconnect(v7);
      CRenderTargetBitmap::Release(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v10;
}
