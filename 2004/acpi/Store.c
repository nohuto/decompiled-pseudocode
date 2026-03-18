/*
 * XREFs of Store @ 0x1C000A6F0
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003328 (FreeData.c)
 *     MatchObjType @ 0x1C000A82C (MatchObjType.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C00652C8 (GetObjectTypeName.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v6; // rsi
  unsigned int v7; // r10d
  __int16 v8; // r10
  __int16 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  int v13; // ecx
  int ObjectTypeName; // eax
  int v15; // r11d
  int v16; // r8d
  int v17; // ecx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  v6 = 0LL;
  v7 = *(unsigned __int16 *)(v2 + 42);
  if ( (_WORD)v7 == 128 )
  {
    v6 = *(_QWORD *)(v2 + 56) + 64LL;
  }
  else if ( (_WORD)v7 == 129 )
  {
    v6 = *(_QWORD *)(v2 + 56);
  }
  else
  {
    if ( v7 > 0x10 || (v13 = 81921, !_bittest(&v13, v7)) )
    {
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v2 + 42));
      v16 = 0;
      v17 = 208;
      goto LABEL_20;
    }
    v6 = v2 + 40;
  }
  if ( (_WORD)v7 == 128 )
  {
    if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v6 + 2), 135LL) )
    {
      if ( v8 == v9 )
        goto LABEL_6;
      goto LABEL_12;
    }
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v6 + 2));
    v16 = v15;
    v17 = 207;
LABEL_20:
    PrintDebugMessage(v17, ObjectTypeName, v16, 0, 0LL);
    v3 = -1072431094;
    goto LABEL_6;
  }
LABEL_12:
  if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v6 + 2), 133LL) )
    FreeData(v6);
LABEL_6:
  if ( v3 )
    return v3;
  v10 = *(_QWORD *)(a2 + 80);
  v11 = *(_QWORD *)(a2 + 88);
  if ( v11 != v10 )
  {
    *(_OWORD *)v11 = *(_OWORD *)v10;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(v10 + 32);
    *(_OWORD *)v10 = 0LL;
    *(_OWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    v11 = *(_QWORD *)(a2 + 88);
  }
  return WriteObject(a1, v6, v11);
}
