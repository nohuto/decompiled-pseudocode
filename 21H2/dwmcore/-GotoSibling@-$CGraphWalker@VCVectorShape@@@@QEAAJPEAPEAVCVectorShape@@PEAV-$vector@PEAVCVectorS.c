/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1800DAE7C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800DAD6C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGraphWalker<CVectorShape>::GotoSibling(__int64 a1, __int64 *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  int v6; // ebx
  int v7; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( !v4 )
    return 1;
  if ( *(_DWORD *)(a1 + 28) != 1
    || (v6 = *(_DWORD *)(a1 + 24), v6 == -1)
    || v6 + 1 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 288LL))(v4) )
  {
    v7 = *(_DWORD *)(a1 + 28);
    if ( !v7 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v6 )
        goto LABEL_9;
    }
    return 1;
  }
  v7 = *(_DWORD *)(a1 + 28);
LABEL_9:
  v9 = v6 - 1;
  v10 = v6 + 1;
  if ( v7 != 1 )
    v10 = v9;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 296LL))(*(_QWORD *)(a1 + 16), v10);
  *(_QWORD *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 24) = v10;
  *a2 = v11;
  return v2;
}
