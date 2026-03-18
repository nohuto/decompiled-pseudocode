/*
 * XREFs of ?GotoParent@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAPEAVCVectorShape@@@Z @ 0x1800DB044
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800DAD6C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     <none>
 */

void __fastcall CGraphWalker<CVectorShape>::GotoParent(__int64 a1, _QWORD *a2)
{
  int v2; // r10d
  __int64 v3; // r8
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r11d
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    v6 = 0LL;
    v7 = 0;
    if ( v5 )
    {
      v8 = (unsigned int)(v5 - 1);
      *(_DWORD *)(a1 + 32) = v8;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v8 + 8);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v8);
    }
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 4) = v2 - 1;
    *(_QWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 24) = v7;
  }
  *a2 = v3;
}
