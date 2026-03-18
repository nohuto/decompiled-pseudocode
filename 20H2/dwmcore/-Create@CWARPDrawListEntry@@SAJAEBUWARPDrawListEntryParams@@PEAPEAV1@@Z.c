/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801A140C
 * Callers:
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18019C4EC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801A1000 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18020E138 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPDrawListEntryParams *a1, struct CWARPDrawListEntry **a2)
{
  unsigned int v4; // ebx
  struct CObjectCache *ObjectCache; // rax
  CWARPDrawListEntry *v6; // rcx
  int v7; // r9d
  volatile signed __int32 *v8; // rax

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
  if ( v6 || (v8 = (volatile signed __int32 *)DefaultHeap::Alloc(0x1C8uLL), (v6 = (CWARPDrawListEntry *)v8) != 0LL) )
    v8 = (volatile signed __int32 *)CWARPDrawListEntry::CWARPDrawListEntry(v6, a1);
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    *a2 = (struct CWARPDrawListEntry *)v8;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024882, 0x53u, 0LL);
  }
  return v4;
}
