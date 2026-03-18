/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C00666B8
 * Callers:
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005D960 (InternalRawAccessOpRegionHandler.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 * Callees:
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, __int64 *a2)
{
  unsigned int FieldUnitRegionObj; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rax
  _BYTE *ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rdi

  FieldUnitRegionObj = 0;
  v4 = *a1;
  v5 = *(unsigned __int16 *)(*a1 + 66) - 130;
  if ( v5 && (v6 = v5 - 1) != 0 )
  {
    if ( v6 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL), a2);
    }
    else
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, -1072431101);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v4 + 96);
  }
  v7 = *a2;
  if ( *a2 && *(_WORD *)(v7 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectPath = GetObjectPath(*a2);
    v9 = &unk_1C006FB8B;
    v10 = ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = (_DWORD)ObjectPath;
    PrintDebugMessage(55, (_DWORD)v9, *(unsigned __int16 *)(*a2 + 66), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *a2 = 0LL;
      return FieldUnitRegionObj;
    }
LABEL_17:
    *a2 = 0LL;
    return FieldUnitRegionObj;
  }
  if ( (FieldUnitRegionObj & 0x80000000) != 0 || !v7 )
    goto LABEL_17;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112));
  return FieldUnitRegionObj;
}
