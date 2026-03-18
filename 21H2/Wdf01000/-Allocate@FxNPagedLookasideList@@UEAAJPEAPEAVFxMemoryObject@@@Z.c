/*
 * XREFs of ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C00388A0
 * Callers:
 *     <none>
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x1C0038024 (FxAllocateFromNPagedLookasideList.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C0038BD2 (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0038D36 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0038DCA (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FxMemoryObject **PPMemory)
{
  FxMemoryObject *v2; // rbx
  PSLIST_ENTRY v6; // rax
  void *inited; // rax
  unsigned __int64 m_BufferSize; // rdx
  FxMemoryBufferFromLookaside *v9; // rax
  FxMemoryObject *v10; // rax

  v2 = 0LL;
  if ( !PPMemory )
    return 3221225485LL;
  *PPMemory = 0LL;
  v6 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v6 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v6);
  m_BufferSize = this->m_BufferSize;
  if ( m_BufferSize < 0x1000 )
  {
    v9 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                          this->m_Globals,
                                          inited,
                                          ((m_BufferSize + 15) & 0xFFF0) + 128,
                                          &this->m_MemoryAttributes,
                                          FxObjectTypeExternal);
    if ( v9 )
    {
      FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v9, this->m_Globals, this, this->m_BufferSize);
      v2 = v10;
    }
  }
  *PPMemory = v2;
  return 0LL;
}
