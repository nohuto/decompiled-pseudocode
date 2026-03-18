/*
 * XREFs of GetObjectTypeName @ 0x1C0066810
 * Callers:
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ResetSignal @ 0x1C0026970 (ResetSignal.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     ObjTypeSizeOf @ 0x1C002BEA0 (ObjTypeSizeOf.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  v2 = 0;
  if ( off_1C007FF68 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C007FF60 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C007FF60 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C007FF60 + 2 * v2 + 1);
  }
  return result;
}
