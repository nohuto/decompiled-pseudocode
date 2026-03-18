/*
 * XREFs of ?clear@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801ABC58
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801ABA04 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800E0CA4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

void __fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::clear(CExcludeVisualReference ***a1)
{
  CExcludeVisualReference **v1; // rbp
  CExcludeVisualReference **v3; // rbx
  CExcludeVisualReference *v4; // rsi

  v1 = a1[1];
  v3 = *a1;
  if ( *a1 != v1 )
  {
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CExcludeVisualReference::~CExcludeVisualReference(*v3);
        operator delete(v4);
      }
      ++v3;
    }
    while ( v3 != v1 );
    v3 = *a1;
  }
  a1[1] = v3;
}
