/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801E7BEC
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801E7814 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x180261CFC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPDrawListEntryParams *a1, struct CWARPDrawListEntry **a2)
{
  unsigned int v4; // edi
  struct CObjectCache *ObjectCache; // rax
  CWARPDrawListEntry *v6; // rcx
  int v7; // r9d
  CWARPDrawListEntry *v8; // rax
  struct CWARPDrawListEntry *v9; // rbx

  v4 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v6 = 0LL;
  v7 = *((_DWORD *)ObjectCache + 1);
  if ( v7 )
  {
    v6 = (CWARPDrawListEntry *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
    *((_DWORD *)ObjectCache + 1) = v7 - 1;
  }
  if ( (v6 || (v6 = (CWARPDrawListEntry *)DefaultHeap::Alloc(0x118uLL)) != 0LL)
    && (v8 = CWARPDrawListEntry::CWARPDrawListEntry(v6, a1), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWARPDrawListEntry *)((char *)v8 + 8));
    *a2 = v9;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0LL, -2147024882, 0x53u);
  }
  return v4;
}
