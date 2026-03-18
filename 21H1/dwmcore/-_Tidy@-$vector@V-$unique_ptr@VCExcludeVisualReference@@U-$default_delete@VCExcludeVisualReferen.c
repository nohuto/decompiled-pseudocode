/*
 * XREFs of ?_Tidy@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18015A428
 * Callers:
 *     ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x1801595C0 (--_ECVisualGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800DF3D4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

void __fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::_Tidy(__int64 a1)
{
  CExcludeVisualReference **v1; // rdi
  CExcludeVisualReference **v3; // rbp
  CExcludeVisualReference **v4; // rsi
  CExcludeVisualReference *v5; // r14

  v1 = *(CExcludeVisualReference ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(CExcludeVisualReference ***)(a1 + 8);
    v4 = *(CExcludeVisualReference ***)a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          CExcludeVisualReference::~CExcludeVisualReference(*v4);
          operator delete(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
