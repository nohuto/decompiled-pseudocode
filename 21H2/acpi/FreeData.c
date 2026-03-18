/*
 * XREFs of FreeData @ 0x1C001840C
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249F0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
    FreeObjData(a1);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
