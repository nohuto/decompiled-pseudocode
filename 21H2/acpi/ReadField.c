/*
 * XREFs of ReadField @ 0x1C0024420
 * Callers:
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     AccFieldUnit @ 0x1C000A0B0 (AccFieldUnit.c)
 *     ReadObject @ 0x1C000B4C0 (ReadObject.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     PushAccFieldObj @ 0x1C0024C10 (PushAccFieldObj.c)
 *     SupportsOnlyRawAccess @ 0x1C0024D40 (SupportsOnlyRawAccess.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C0067D58 (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbp
  bool v8; // al
  int v9; // ecx
  char v10; // al
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v15; // edi
  int v17; // ecx
  int ObjectTypeName; // edx
  int v19; // ecx
  unsigned int v20; // r8d
  void *v21; // rax

  v7 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      v13 = a2;
      return (unsigned int)RawFieldAccess(a1, 0LL, v13);
    }
    v15 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(v7, 3222536209LL);
    ObjectTypeName = *(_DWORD *)(a3 + 12);
    v19 = 162;
    goto LABEL_23;
  }
  v8 = IsCompatableDSDTRevision();
  v9 = *(unsigned __int16 *)(a4 + 2);
  if ( *(_WORD *)(a4 + 2) )
  {
    v17 = v9 - 1;
    if ( !v17 || (unsigned int)(v17 - 1) < 2 )
      goto LABEL_6;
    v15 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(v7, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
    v19 = 163;
LABEL_23:
    PrintDebugMessage(v19, ObjectTypeName, 0, 0, 0LL);
    return v15;
  }
  if ( (*(_DWORD *)(a3 + 12) & 0x10000) == 0 && *(_DWORD *)(a3 + 8) <= 8 * (v8 ? 8 : 4) )
  {
    *(_WORD *)(a4 + 2) = v9 + 1;
    goto LABEL_6;
  }
  *(_WORD *)(a4 + 2) = 3;
  v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  *(_DWORD *)(a4 + 24) = v20;
  v21 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v20);
  *(_QWORD *)(a4 + 32) = v21;
  if ( !v21 )
  {
    v15 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(v7, 3221225626LL);
    ObjectTypeName = *(_DWORD *)(a4 + 24);
    v19 = 161;
    goto LABEL_23;
  }
  memset(v21, 0, *(unsigned int *)(a4 + 24));
LABEL_6:
  v10 = SupportsOnlyRawAccess(a2);
  v13 = a2;
  a1 = v7;
  if ( v10 )
    return (unsigned int)RawFieldAccess(a1, 0LL, v13);
  return (unsigned int)PushAccFieldObj(v7, ReadFieldObj, a2, a3, v12, v11);
}
