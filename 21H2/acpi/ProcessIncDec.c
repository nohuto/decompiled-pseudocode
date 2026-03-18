/*
 * XREFs of ProcessIncDec @ 0x1C002AD60
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ProcessIncDec(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _SLIST_ENTRY *Next; // rcx
  int ObjectTypeName; // eax
  int v12; // r11d

  v3 = a3;
  if ( a3 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
LABEL_10:
    Next = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    HeapFree(Next);
    return v3;
  }
  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v6 + 2) != 1 )
  {
    FreeDataBuffs(v6, 1u);
    v3 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v12, ObjectTypeName, 0, 0LL);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v8 = v7 + 1;
  else
    v8 = v7 - 1;
  *(_QWORD *)(v6 + 16) = v8;
  v3 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
    goto LABEL_10;
  return v3;
}
