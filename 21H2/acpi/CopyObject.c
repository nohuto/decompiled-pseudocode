/*
 * XREFs of CopyObject @ 0x1C0069E40
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     MatchObjType @ 0x1C00178E0 (MatchObjType.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     MoveObjData @ 0x1C0066938 (MoveObjData.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall CopyObject(struct _SLIST_ENTRY *a1, __int64 a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // r8
  int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v4 = 0;
  v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0, (__int64)&v12);
  v6 = v5;
  if ( v5 )
  {
    LogError(v5);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v7 = 33;
    goto LABEL_11;
  }
  if ( MatchObjType(*(unsigned __int16 *)(v12 + 2), 134) )
  {
    v4 = 1;
    if ( ((*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 1) & 0xFFFD) != 0 )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      v7 = 32;
LABEL_11:
      PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
      return v6;
    }
  }
  MoveObjData(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  v9 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v10 = WriteObject(a1, v8, v9);
  else
    v10 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v8, v9);
  v6 = v10;
  if ( v10 )
  {
    LogError(v10);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v7 = 31;
    goto LABEL_11;
  }
  return v6;
}
