/*
 * XREFs of ReadField @ 0x1C0016430
 * Callers:
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(struct _SLIST_ENTRY *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  struct _SLIST_ENTRY *v7; // rbx
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  int v14; // edi
  KIRQL v15; // al
  __int64 i; // rbx
  unsigned int v17; // r8d
  _SLIST_ENTRY *v18; // rax
  _SLIST_ENTRY *v19; // r9
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  __int64 v26; // rbp
  int ObjectTypeName; // eax
  unsigned int v29; // r8d
  _SLIST_ENTRY *v30; // rax
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  v7 = a1;
  if ( (a3[3] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
      return RawFieldAccess(a1, 0LL, a2);
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(v7, 3222536209LL);
    PrintDebugMessage(162, a3[3], 0, 0, 0LL);
    return 3222536209LL;
  }
  v8 = 0;
  LODWORD(v32) = 0;
  v9 = 8;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v32), (unsigned int)v32 >= 2) )
    v10 = 8;
  else
    v10 = 4;
  if ( !*(_WORD *)(a4 + 2) )
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * v10) )
    {
      *(_WORD *)(a4 + 2) = 1;
      v11 = a4 + 16;
      v9 = v10;
      goto LABEL_9;
    }
    *(_WORD *)(a4 + 2) = 3;
    v29 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(a4 + 24) = v29;
    v30 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v29);
    *(_QWORD *)(a4 + 32) = v30;
    if ( !v30 )
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(v7, 3221225626LL);
      PrintDebugMessage(161, *(_DWORD *)(a4 + 24), 0, 0, 0LL);
      return 3221225626LL;
    }
    memset(v30, 0, *(unsigned int *)(a4 + 24));
    goto LABEL_42;
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v11 = a4 + 16;
    goto LABEL_9;
  }
  if ( *(_WORD *)(a4 + 2) != 2 )
  {
    if ( *(_WORD *)(a4 + 2) != 3 )
    {
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(v7, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
      PrintDebugMessage(163, ObjectTypeName, 0, 0, 0LL);
      return 3222536201LL;
    }
LABEL_42:
    v9 = *(_DWORD *)(a4 + 24);
    goto LABEL_43;
  }
  v9 = *(_DWORD *)(a4 + 24) - 1;
LABEL_43:
  v11 = *(_QWORD *)(a4 + 32);
LABEL_9:
  v12 = *(_WORD *)(a2 + 2) == 5;
  v32 = v11;
  if ( v12 )
  {
    v13 = **(_QWORD **)(a2 + 32);
    if ( *(_WORD *)(v13 + 66) == 131 )
    {
      v14 = *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v13 + 96) + 96LL) + 12LL);
      v15 = ExAcquireSpinLockShared(&RSAccessLock);
      for ( i = gpRSAccessHead; i; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 8) == v14 )
          break;
      }
      ExReleaseSpinLockShared(&RSAccessLock, v15);
      if ( i && *(_QWORD *)(i + 32) && !*(_QWORD *)(i + 16) )
        return RawFieldAccess(a1, 0LL, a2);
      v7 = a1;
    }
  }
  v17 = 128;
  if ( a3[5] )
    v17 = a3[7] + 128;
  v18 = HeapAlloc(v7 + 30, 1297237576, v17);
  v19 = v18;
  if ( v18 )
  {
    v20 = 1;
    v21 = v32;
    *((_QWORD *)&v18->Next + 1) = v7[26].Next;
    v7[26].Next = v18;
    *((_QWORD *)&v18[1].Next + 1) = ReadFieldObj;
    LODWORD(v18->Next) = 1330004801;
    v18[2].Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&v18[2].Next + 1) = v21;
    v18[3].Next = (_SLIST_ENTRY *)(v21 + v9);
    v22 = a3[3] & 0xF;
    if ( (unsigned int)(v22 - 1) <= 3 )
      v20 = 1 << (v22 - 1);
    *((_DWORD *)&v18[3].Next + 2) = v20;
    v23 = 8 * v20 + a3[2] + a3[1] - 1;
    if ( 8 * v20 == 8 )
      v24 = v23 >> 3;
    else
      v24 = v23 / (8 * v20);
    v25 = 8 * v20;
    *((_DWORD *)&v19[3].Next + 3) = v24;
    if ( (unsigned int)(8 * v20) >= 0x40 )
      v26 = 0LL;
    else
      v26 = 1LL << v25;
    v19[4].Next = (_SLIST_ENTRY *)(v26 - 1);
    *((_DWORD *)&v19[4].Next + 2) = v25 - a3[1];
    *((_DWORD *)&v19[4].Next + 3) = a3[1];
    memmove(&v19[6], a3, (unsigned int)(a3[7] + 32));
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v7, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
