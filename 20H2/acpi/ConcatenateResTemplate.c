/*
 * XREFs of ConcatenateResTemplate @ 0x1C0068D80
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0064F9C (CheckAndPromoteAliasedObjects.c)
 */

__int64 __fastcall ConcatenateResTemplate(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  char v17; // al
  unsigned __int64 v18; // r9
  char v19; // al
  unsigned int v20; // ecx
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0;
  v24 = 0LL;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "BB");
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v7 + 24) <= 1u || *(_DWORD *)(v7 + 64) <= 1u )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      v12 = 28;
      goto LABEL_19;
    }
    v6 = ValidateTarget((__int64)a1, v7 + 80, 0x87u, (__int64)&v24);
    if ( !v6 )
    {
      v9 = *(__int16 **)(a2 + 80);
      if ( v9[41] != 128 )
        CheckAndPromoteAliasedObjects(v9, v8, v24);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v10;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v10);
      v11 = *(_QWORD *)(a2 + 88);
      if ( !*(_QWORD *)(v11 + 32) )
      {
        v6 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError((__int64)a1, -1073741670);
        v12 = 29;
LABEL_19:
        PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
        return v6;
      }
      v13 = *(_QWORD *)(a2 + 80);
      v14 = 0LL;
      v15 = 0LL;
      v16 = v13;
      if ( *(_DWORD *)(v13 + 24) != 2 )
      {
        do
        {
          v17 = *(_BYTE *)(v15 + *(_QWORD *)(v13 + 32));
          ++v15;
          *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v17;
          ++v14;
          v13 = *(_QWORD *)(a2 + 80);
          v16 = v13;
        }
        while ( v15 < (unsigned int)(*(_DWORD *)(v13 + 24) - 2) );
        v11 = *(_QWORD *)(a2 + 88);
      }
      v18 = 0LL;
      if ( *(_DWORD *)(v13 + 64) != 2 )
      {
        do
        {
          v19 = *(_BYTE *)(v18 + *(_QWORD *)(v16 + 72));
          ++v18;
          *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v19;
          ++v14;
          v16 = *(_QWORD *)(a2 + 80);
        }
        while ( v18 < (unsigned int)(*(_DWORD *)(v16 + 64) - 2) );
        v11 = *(_QWORD *)(a2 + 88);
      }
      v20 = v10 - 1;
      *(_BYTE *)(v14 + *(_QWORD *)(v11 + 32)) = 121;
      v21 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
      if ( v10 != 1 )
      {
        do
        {
          v4 += *v21++;
          --v20;
        }
        while ( v20 );
      }
      v22 = v24;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v14 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v22, *(_QWORD *)(a2 + 88));
    }
  }
  return v6;
}
