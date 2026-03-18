/*
 * XREFs of ?StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00025F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInternalIoctlOthersContext::StoreAndReferenceMemory(
        FxInternalIoctlOthersContext *this,
        FxRequestBuffer *Buffer)
{
  __int64 v4; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v4 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      this->m_RequestMemory = 0LL;
      return;
    }
    v4 = 135LL;
  }
  Buffer->u.Memory.Memory->AddRef(
    Buffer->u.Memory.Memory,
    this,
    v4,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  this->m_RequestMemory = Buffer->u.Memory.Memory;
}
