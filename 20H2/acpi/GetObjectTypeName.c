/*
 * XREFs of GetObjectTypeName @ 0x1C00652C8
 * Callers:
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C000A040 (DupObjData.c)
 *     NewObjData @ 0x1C000A628 (NewObjData.c)
 *     Store @ 0x1C000A6F0 (Store.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     WriteField @ 0x1C00228D0 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022A08 (CopyObjBuffer.c)
 *     Acquire @ 0x1C0022A90 (Acquire.c)
 *     Release @ 0x1C0022C00 (Release.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     ProcessIncDec @ 0x1C002A220 (ProcessIncDec.c)
 *     PrintObject @ 0x1C00667A4 (PrintObject.c)
 *     DumpObject @ 0x1C00675A8 (DumpObject.c)
 *     ResetSignal @ 0x1C0068870 (ResetSignal.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     ObjTypeSizeOf @ 0x1C0069E30 (ObjTypeSizeOf.c)
 *     Wait @ 0x1C006AF90 (Wait.c)
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
  if ( off_1C00811B8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00811B0 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00811B0 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C00811B0 + 2 * v2 + 1);
  }
  return result;
}
