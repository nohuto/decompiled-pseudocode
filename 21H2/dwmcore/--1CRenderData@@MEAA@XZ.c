/*
 * XREFs of ??1CRenderData@@MEAA@XZ @ 0x180043E4C
 * Callers:
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x180041B40 (--_GCRenderData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800055CC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180044574 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800446D4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderData::~CRenderData(CRenderData *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rcx
  CDataStreamWriter *v5; // rcx
  CDataStreamWriter *v6; // rcx

  *(_QWORD *)this = &CRenderData::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CRenderData::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CRenderData::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 248;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 264;
  CRenderData::DestroyRenderData(this);
  v4 = (char *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v4,
      *((char **)this + 22));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 21),
      (*((_QWORD *)this + 23) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 136);
  CDataStreamWriter::FreeBlocks(v5, (struct _LIST_ENTRY *)((char *)this + 72));
  DefaultHeap::Free(*((void **)this + 13));
  CDataStreamWriter::FreeBlocks(v6, (struct _LIST_ENTRY *)((char *)this + 88));
  CResource::~CResource(this);
}
