/*
 * XREFs of ValidateTarget @ 0x1C0018344
 * Callers:
 *     Index @ 0x1C0019050 (Index.c)
 *     CondRefOf @ 0x1C0019C00 (CondRefOf.c)
 *     ToInteger @ 0x1C001C4B0 (ToInteger.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     ExprOp1_64 @ 0x1C002BDF0 (ExprOp1_64.c)
 *     Divide @ 0x1C0031B20 (Divide.c)
 *     ExprOp2_32 @ 0x1C0031BC2 (ExprOp2_32.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0069F64 (ExprOp1_32.c)
 *     ToBuffer @ 0x1C006AEE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ToString @ 0x1C006B340 (ToString.c)
 * Callees:
 *     MatchObjType @ 0x1C00178E0 (MatchObjType.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v10; // ecx
  unsigned int v11; // eax
  int ObjectTypeName; // eax
  int v14; // r11d
  int v15; // r8d
  int v16; // ecx

  v5 = a2;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = 0;
  if ( (_WORD)v6 == 128 )
  {
    v5 = *(_QWORD *)(v5 + 16) + 64LL;
  }
  else if ( (_WORD)v6 == 129 )
  {
    v5 = *(_QWORD *)(v5 + 16);
  }
  else if ( v6 > 0x10 || (v10 = 81921, !_bittest(&v10, v6)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    v15 = 0;
    v16 = 208;
    goto LABEL_16;
  }
  *(_QWORD *)a4 = v5;
  if ( (_WORD)v6 == 128 )
  {
    if ( MatchObjType(*(unsigned __int16 *)(v5 + 2), a3) )
      return v7;
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v15 = v14;
    v16 = 207;
LABEL_16:
    PrintDebugMessage(v16, ObjectTypeName, v15, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  v11 = *(unsigned __int16 *)(v5 + 2);
  if ( v11 == 133 || v11 <= 4 )
    FreeData(v5);
  return v7;
}
