/*
 * XREFs of SeAuditHandleDuplication @ 0x14091A68C
 * Callers:
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x14062607C (ObCompleteObjectDuplication.c)
 *     ObAuditInheritedHandleProcedure @ 0x1408D8E00 (ObAuditInheritedHandleProcedure.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14020B240 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x1403BE4B0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

void __fastcall SeAuditHandleDuplication(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  bool IsKernelHandle; // al
  char v13; // dl
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  bool v18; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&SubjectContext[1], 0, 32);
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  v8 = SubjectContext[3];
  v9 = SubjectContext[3];
  if ( SubjectContext[1] )
    v9 = SubjectContext[1];
  v10 = **(_QWORD **)(v9 + 152);
  memset(Src, 0, 0x418uLL);
  v11 = *(unsigned __int8 *)(v10 + 1);
  LODWORD(Src[0]) = 3;
  if ( SubjectContext[1] )
    v8 = SubjectContext[1];
  LODWORD(Src[2]) = 524411;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  HIDWORD(Src[0]) = 4690;
  Src[10] = &SeSubsystemName;
  Src[12] = *(_QWORD *)(v8 + 24);
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  Src[11] = 0x800000005LL;
  Src[15] = 0x80000000BLL;
  IsKernelHandle = ObpIsKernelHandle(a1, 0);
  Src[19] = __PAIR64__(v14, v15);
  v17 = v16 ^ 0xFFFFFFFF80000000uLL;
  LODWORD(Src[23]) = v15;
  if ( !IsKernelHandle )
    v17 = a1;
  Src[20] = *(_QWORD *)(a3 + 1088);
  HIDWORD(Src[23]) = v14;
  Src[16] = v17 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = ObpIsKernelHandle(a2, v13);
  v21 = v20 ^ v19;
  Src[27] = __PAIR64__(v23, v22);
  if ( !v18 )
    v21 = a2;
  Src[28] = *(_QWORD *)(a4 + 1088);
  LODWORD(Src[1]) = 7;
  Src[24] = v21 & 0xFFFFFFFFFFFFFFFCuLL;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
}
