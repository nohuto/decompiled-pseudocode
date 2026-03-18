/*
 * XREFs of AMLIEvalPackageElement @ 0x1C0024258
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     GetBaseObject @ 0x1C0019CB4 (GetBaseObject.c)
 *     EvalPackageElement @ 0x1C0024344 (EvalPackageElement.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v17; // r8
  void *v18; // rbx
  int ObjectTypeName; // eax
  int v20; // ecx
  _OWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-18h] BYREF

  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  *(_OWORD *)a3 = 0LL;
  v22 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  memset(v21, 0, sizeof(v21));
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v17 = &unk_1C006FB8B;
    v18 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v17) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v17, a2, 0LL);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  v8 = *(_WORD *)(BaseObject + 66);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v21, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( WORD1(v21[0]) == 4 )
    {
      v9 = &v22;
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(WORD1(v21[0]));
    v20 = 48;
LABEL_23:
    PrintDebugMessage(v20, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v20 = 47;
    goto LABEL_23;
  }
  v9 = (__int64 *)(BaseObject + 96);
LABEL_8:
  v10 = EvalPackageElement(*v9, a2, a3);
LABEL_9:
  FreeDataBuffs((__int64)v21, 1u);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject);
  return v10;
}
