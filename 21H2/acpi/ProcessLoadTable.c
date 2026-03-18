/*
 * XREFs of ProcessLoadTable @ 0x1C006A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     RtlStringCchCopyNA @ 0x1C0020438 (RtlStringCchCopyNA.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  int v3; // ebx
  void *v4; // r14
  __int64 v6; // r13
  ULONG_PTR v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  const char *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  const char *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  char *Pool2; // rax
  char *v18; // rbp
  int v19; // ecx
  __int64 v20; // r11
  char *v21; // rax
  int NameSpaceObject; // eax
  _QWORD *v23; // rcx
  __int64 v25; // rbx
  int v26; // eax
  void *v27; // [rsp+38h] [rbp-40h]
  const char *pszSrc; // [rsp+88h] [rbp+10h]
  unsigned int v29; // [rsp+90h] [rbp+18h]
  __int64 v30; // [rsp+98h] [rbp+20h] BYREF

  v30 = 0LL;
  v3 = a3;
  v4 = (void *)a2[4];
  v6 = a2[5];
  v27 = v4;
  if ( a3 )
  {
    v8 = 1LL;
    goto LABEL_41;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  if ( *(_DWORD *)(v6 + 76) >= 4u )
  {
    v9 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 120LL, 0, "Z");
    v3 = v9;
    if ( v9 )
    {
      LogError(v9);
      AcpiDiagTraceAmlError(BugCheckParameter2, v3);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v8 = 5LL;
      goto LABEL_41;
    }
    v10 = *(_QWORD *)(v6 + 80);
    v11 = *(const char **)(v10 + 152);
    pszSrc = v11;
    if ( *(_DWORD *)(v6 + 76) >= 5u )
    {
      v12 = ValidateArgTypes(BugCheckParameter2, v10 + 160, 0, "Z");
      v3 = v12;
      if ( v12 )
      {
        LogError(v12);
        AcpiDiagTraceAmlError(BugCheckParameter2, v3);
        PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
        v8 = 6LL;
        goto LABEL_41;
      }
      v13 = *(_DWORD *)(v6 + 76);
      v14 = *(const char **)(*(_QWORD *)(v6 + 80) + 192LL);
      if ( v13 >= 5 && v14 && *v14 )
      {
        if ( v13 < 6 )
        {
          v3 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
          PrintDebugMessage(150, 0LL, 0LL, 0LL, 0LL);
          v8 = 7LL;
          goto LABEL_41;
        }
        v15 = -1LL;
        if ( ((*v14 - 92) & 0xFD) != 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v11[v16] );
          do
            ++v15;
          while ( v14[v15] );
          v29 = v16 + v15 + 2;
          Pool2 = (char *)ExAllocatePool2(64LL, v29, 1231842625LL);
          v18 = Pool2;
          if ( !Pool2 )
          {
            v3 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
            v19 = 86;
LABEL_22:
            PrintDebugMessage(v19, 0LL, 0LL, 0LL, 0LL);
            *(_WORD *)(a2[6] + 2LL) = 1;
            v8 = 4LL;
LABEL_40:
            *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_41:
            KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v8, v3);
          }
          RtlStringCchCopyNA(Pool2, (unsigned int)(v16 + v15 + 2), pszSrc, (unsigned int)v16);
          if ( pszSrc[v20 - 1] != 92 )
          {
            v18[v20] = 46;
            LODWORD(v16) = v16 + 1;
          }
          RtlStringCchCopyNA(&v18[(unsigned int)v16], v29 - (unsigned int)v16, v14, (unsigned int)v15);
          v18[(unsigned int)(v16 + v15)] = 0;
        }
        else
        {
          do
            ++v15;
          while ( v14[v15] );
          v21 = (char *)ExAllocatePool2(64LL, (unsigned int)(v15 + 1), 1231842625LL);
          v18 = v21;
          if ( !v21 )
          {
            v3 = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
            v19 = 92;
            goto LABEL_22;
          }
          RtlStringCchCopyNA(v21, (unsigned int)(v15 + 1), v14, (unsigned int)v15);
        }
        NameSpaceObject = GetNameSpaceObject(v18, *(_QWORD *)(BugCheckParameter2 + 80), &v30, 0x80000000);
        v3 = NameSpaceObject;
        if ( NameSpaceObject )
        {
          LogError(NameSpaceObject);
          AcpiDiagTraceAmlError(BugCheckParameter2, v3);
          PrintDebugMessage(92, v18, 0LL, 0LL, 0LL);
          *(_WORD *)(a2[6] + 2LL) = 1;
          v8 = 2LL;
          goto LABEL_40;
        }
        if ( v30 == gpnsNameSpaceRoot )
        {
          LogError(0);
          AcpiDiagTraceAmlError(BugCheckParameter2, 0);
          PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
          *(_WORD *)(a2[6] + 2LL) = 1;
          *(_QWORD *)(a2[6] + 16LL) = 0LL;
        }
        else
        {
          v25 = v30 + 64;
          FreeObjData(v30 + 64);
          v26 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v25, *(_QWORD *)(v6 + 80) + 200LL);
          v3 = v26;
          if ( v26 )
          {
            LogError(v26);
            AcpiDiagTraceAmlError(BugCheckParameter2, v3);
            PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
            *(_WORD *)(a2[6] + 2LL) = 1;
            v8 = 3LL;
            goto LABEL_40;
          }
        }
        ExFreePoolWithTag(v18, 0);
        v4 = v27;
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v23 = *(_QWORD **)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = v23[1];
  HeapFree(v23);
  return (unsigned int)v3;
}
