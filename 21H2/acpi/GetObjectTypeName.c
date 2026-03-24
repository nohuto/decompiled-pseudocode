/*
 * XREFs of GetObjectTypeName @ 0x1C0065458
 * Callers:
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     NewObjData @ 0x1C000A9E8 (NewObjData.c)
 *     Store @ 0x1C000AAB0 (Store.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     WriteField @ 0x1C0022B30 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     Acquire @ 0x1C0022CF0 (Acquire.c)
 *     Release @ 0x1C0022E60 (Release.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     ProcessIncDec @ 0x1C002A480 (ProcessIncDec.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 *     ResetSignal @ 0x1C0068A00 (ResetSignal.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     ObjTypeSizeOf @ 0x1C0069FC0 (ObjTypeSizeOf.c)
 *     Wait @ 0x1C006B120 (Wait.c)
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
