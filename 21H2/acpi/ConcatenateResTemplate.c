/*
 * XREFs of ConcatenateResTemplate @ 0x1C00277F0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C00279B4 (CheckAndPromoteAliasedObjects.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ConcatenateResTemplate(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned int v17; // ecx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  char v21; // al
  char v22; // al
  int v23; // ecx
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0;
  v24 = 0LL;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "BB");
  if ( v6 )
    return v6;
  v7 = *(_QWORD *)(a2 + 80);
  if ( *(_DWORD *)(v7 + 24) <= 1u || *(_DWORD *)(v7 + 64) <= 1u )
  {
    v6 = -1072431098;
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(a1, 3222536198LL);
    v23 = 28;
    goto LABEL_20;
  }
  v6 = ValidateTarget((__int64)a1, v7 + 80, 0x87u, (__int64)&v24);
  if ( v6 )
    return v6;
  v9 = *(_QWORD *)(a2 + 80);
  if ( *(_WORD *)(v9 + 82) != 128 )
    CheckAndPromoteAliasedObjects(v9, v8, v24);
  *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
  v10 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
  *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v10;
  *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v10);
  v11 = *(_QWORD *)(a2 + 88);
  if ( !*(_QWORD *)(v11 + 32) )
  {
    v6 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v23 = 29;
LABEL_20:
    PrintDebugMessage(v23, 0, 0, 0, 0LL);
    return v6;
  }
  v12 = *(_QWORD *)(a2 + 80);
  v13 = 0LL;
  v14 = 0LL;
  v15 = v12;
  if ( *(_DWORD *)(v12 + 24) != 2 )
  {
    do
    {
      v22 = *(_BYTE *)(v14 + *(_QWORD *)(v12 + 32));
      ++v14;
      *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v22;
      ++v13;
      v12 = *(_QWORD *)(a2 + 80);
      v15 = v12;
    }
    while ( v14 < (unsigned int)(*(_DWORD *)(v12 + 24) - 2) );
    v11 = *(_QWORD *)(a2 + 88);
  }
  v16 = 0LL;
  if ( *(_DWORD *)(v12 + 64) != 2 )
  {
    do
    {
      v21 = *(_BYTE *)(v16 + *(_QWORD *)(v15 + 72));
      ++v16;
      *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v21;
      ++v13;
      v15 = *(_QWORD *)(a2 + 80);
    }
    while ( v16 < (unsigned int)(*(_DWORD *)(v15 + 64) - 2) );
    v11 = *(_QWORD *)(a2 + 88);
  }
  v17 = v10 - 1;
  *(_BYTE *)(v13 + *(_QWORD *)(v11 + 32)) = 121;
  v18 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
  if ( v10 != 1 )
  {
    do
    {
      v4 += *v18++;
      --v17;
    }
    while ( v17 );
  }
  v19 = v24;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v13 + 1) = -v4;
  return (unsigned int)WriteObject(a1, v19, *(_QWORD *)(a2 + 88));
}
