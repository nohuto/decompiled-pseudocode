/*
 * XREFs of ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DAF7C
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DAEC4 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z @ 0x1800DB010 (-Initialize@CExcludeVisualReference@@IEAAJPEAVCVisual@@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DF37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisualReference::Create(struct CVisual *a1, struct CCursorVisualReference **a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  CExcludeVisualReference *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v11; // edx

  *a2 = 0LL;
  v4 = (char *)operator new(0x20uLL);
  v6 = (CExcludeVisualReference *)v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 21) = 0;
    v4[23] = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    v4[20] = 0;
    *(_QWORD *)v4 = &CCursorVisualReference::`vftable';
    *((_QWORD *)v4 + 3) = 0LL;
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
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x19u, 0LL);
      CCursorVisualReference::`scalar deleting destructor'(v6, v11);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v9;
}
