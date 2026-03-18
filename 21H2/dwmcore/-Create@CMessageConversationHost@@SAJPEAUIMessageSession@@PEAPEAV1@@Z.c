/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F3E4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x18002F454 (-Initialize@CMessageConversationHost@@AEAAJXZ.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x18002F650 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180195064 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  CMessageConversationHost *v5; // rax
  unsigned int v6; // ecx
  volatile signed __int32 *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  volatile signed __int32 *v12; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CMessageConversationHost *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    v8 = CMessageConversationHost::Initialize(v5);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Cu, 0LL);
      CMessageConversationHost::Disconnect((CMessageConversationHost *)v7);
      v12 = v7 + 2;
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 64LL))(v7);
        if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        {
          --*v12;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 1LL);
        }
      }
    }
    else
    {
      *a2 = (struct CMessageConversationHost *)v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v10;
}
