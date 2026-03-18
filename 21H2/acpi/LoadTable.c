/*
 * XREFs of LoadTable @ 0x1C006A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall LoadTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  unsigned int v6; // ebx
  __int64 v7; // rbx
  _SLIST_ENTRY *Pool2; // r13
  unsigned int v9; // r12d
  const void *v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // eax
  const void *v13; // rdx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  char *v18; // r12
  int v19; // eax
  int v20; // eax
  int DDB; // edi
  int v22; // ecx
  int NameSpaceObject; // eax
  int v24; // eax
  const void *v26; // [rsp+30h] [rbp-20h]
  const void *v27; // [rsp+38h] [rbp-18h]
  const void *v28; // [rsp+40h] [rbp-10h]
  unsigned int v29; // [rsp+98h] [rbp+48h] BYREF
  const void *v30; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v31 = 0LL;
  v6 = ValidateArgTypes(a1, v3, 0, "ZZZ");
  if ( v6 )
    return v6;
  v29 = 0;
  v7 = *(_QWORD *)(a2 + 80);
  Pool2 = 0LL;
  v9 = *(_DWORD *)(v7 + 64) - 1;
  v10 = *(const void **)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 104) - 1;
  v27 = *(const void **)(v7 + 72);
  v26 = *(const void **)(v7 + 112);
  v12 = *(_DWORD *)(v7 + 24) - 1;
  v28 = v10;
  v30 = (const void *)v12;
  if ( v12 > 4 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = v30;
    v14 = 100;
LABEL_4:
    PrintDebugMessage(v14, v13, 0LL, 0LL, 0LL);
    return v6;
  }
  LODWORD(v30) = 0;
  memmove(&v30, v10, v12);
  if ( v9 > 6 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = (const void *)v9;
    v14 = 96;
    goto LABEL_4;
  }
  if ( v11 > 8 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = (const void *)v11;
LABEL_9:
    v14 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v18 = "\\";
    goto LABEL_20;
  }
  v15 = ValidateArgTypes(a1, v7 + 120, 0, "Z");
  v6 = v15;
  if ( !v15 )
  {
    v17 = *(_QWORD *)(a2 + 80);
    v18 = *(char **)(v17 + 152);
    if ( *(_DWORD *)(a2 + 76) >= 5u )
    {
      v19 = ValidateArgTypes(a1, v17 + 160, 0, "Z");
      v6 = v19;
      if ( v19 )
      {
        LogError(v19);
        AcpiDiagTraceAmlError(a1, v6);
        v16 = 98;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(a2 + 76) < 6u )
      {
        v6 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        v13 = 0LL;
        goto LABEL_9;
      }
    }
LABEL_20:
    if ( !ghMapTable )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
      DDB = -1072431098;
      goto LABEL_38;
    }
    v20 = ghMapTable((unsigned int)v30, v27, v26, 0LL, &v29);
    DDB = v20;
    if ( v20 != -1073741789 )
    {
      if ( v20 == -1073741275 )
        DDB = -1073741772;
      goto LABEL_38;
    }
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(64LL, v29, 1114402113LL);
    if ( !Pool2 )
    {
      LogError(DDB + 119);
      AcpiDiagTraceAmlError(a1, DDB + 119);
      v22 = 87;
LABEL_24:
      PrintDebugMessage(v22, 0LL, 0LL, 0LL, 0LL);
LABEL_38:
      LogError(DDB);
      AcpiDiagTraceAmlError(a1, DDB);
      PrintDebugMessage(89, v28, v27, v26, 0LL);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
      goto LABEL_39;
    }
    if ( ghMapTable )
    {
      DDB = ghMapTable((unsigned int)v30, v27, v26, Pool2, &v29);
      if ( !DDB )
      {
        NameSpaceObject = GetNameSpaceObject(v18, *(_QWORD *)(a1 + 80), (__int64 *)&v31, 0x80000000);
        DDB = NameSpaceObject;
        if ( NameSpaceObject )
        {
          LogError(NameSpaceObject);
          AcpiDiagTraceAmlError(a1, DDB);
          PrintDebugMessage(93, v18, 0LL, 0LL, 0LL);
        }
        else
        {
          v24 = PushPost((struct _SLIST_ENTRY *)a1, (__int64)ProcessLoadTable, Pool2, a2, *(_SLIST_ENTRY **)(a2 + 88));
          DDB = v24;
          if ( !v24 )
          {
            DDB = LoadDDB((struct _SLIST_ENTRY *)a1, (__int64)Pool2, v31, *(_QWORD *)(a2 + 88));
            DereferenceObjectEx(v31);
LABEL_39:
            v6 = DDB;
            if ( DDB && Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_42;
          }
          LogError(v24);
          AcpiDiagTraceAmlError(a1, DDB);
          PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
        }
        v4 = v31;
        goto LABEL_39;
      }
    }
    else
    {
      DDB = -1072431098;
    }
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v22 = 91;
    goto LABEL_24;
  }
  LogError(v15);
  AcpiDiagTraceAmlError(a1, v6);
  v16 = 99;
LABEL_16:
  PrintDebugMessage(v16, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
  if ( v4 )
    DereferenceObjectEx(v4);
  return v6;
}
