/*
 * XREFs of ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E500C
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800E4DDC (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801AC1A8 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z @ 0x1800E08D8 (-Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E50F4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Create(struct CVisual *a1, struct CExcludeVisualReference **a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  CExcludeVisualReference *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi

  *a2 = 0LL;
  v4 = (char *)DefaultHeap::Alloc(0x18uLL);
  v6 = (CExcludeVisualReference *)v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 21) = 0;
    v4[23] = 0;
    *(_QWORD *)v4 = &CExcludeVisualReference::`vftable';
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    v4[20] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CExcludeVisualReference::Initialize(v6, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17u, 0LL);
      CExcludeVisualReference::~CExcludeVisualReference(v6);
      operator delete(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v9;
}
