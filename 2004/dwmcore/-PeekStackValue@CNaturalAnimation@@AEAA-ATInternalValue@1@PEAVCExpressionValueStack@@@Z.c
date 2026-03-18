/*
 * XREFs of ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801D9BBC
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D884C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PeekStackValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v3 = *(_DWORD *)(a1 + 144);
  switch ( v3 )
  {
    case 18:
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 16) - 1));
      break;
    case 35:
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 80LL * (unsigned int)(*(_DWORD *)(a3 + 16) - 1));
      break;
    case 52:
      v4 = *(_QWORD *)(a3 + 24);
      v5 = *(_QWORD *)(v4 + 80LL * (unsigned int)(*(_DWORD *)(a3 + 16) - 1));
      LODWORD(v4) = *(_DWORD *)(v4 + 80LL * (unsigned int)(*(_DWORD *)(a3 + 16) - 1) + 8);
      *(_QWORD *)a2 = v5;
      *(_DWORD *)(a2 + 8) = v4;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  return a2;
}
