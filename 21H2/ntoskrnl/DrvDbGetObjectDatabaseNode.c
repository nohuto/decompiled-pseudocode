/*
 * XREFs of DrvDbGetObjectDatabaseNode @ 0x140633B0C
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     RtlDuplicateUnicodeString @ 0x1405EAFA0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNode(__int64 a1, wchar_t *a2, wchar_t **a3, _QWORD *a4)
{
  NTSTATUS DatabaseNode; // ebx
  bool v6; // zf
  wchar_t *v10; // rdi
  wchar_t *v12; // rbp
  wchar_t *v13; // rax
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-28h] BYREF

  DatabaseNode = 0;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  v6 = *a2 == 64;
  StringOut = 0LL;
  if ( !v6
    || (v12 = a2 + 1, (v13 = wcschr(a2 + 1, 0x3Au)) == 0LL)
    || (StringIn.Buffer = v12,
        StringIn.Length = 2 * (v13 - v12),
        StringIn.MaximumLength = StringIn.Length,
        v10 = v13 + 1,
        v13 == (wchar_t *)-2LL) )
  {
    v10 = a2;
LABEL_3:
    *a4 = *(_QWORD *)(a1 + 40);
    goto LABEL_4;
  }
  if ( v10 == a2 )
    goto LABEL_3;
  DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( DatabaseNode < 0 )
    return (unsigned int)DatabaseNode;
  DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, a4);
  RtlFreeAnsiString(&StringOut);
  if ( DatabaseNode == -1073741772 )
    return (unsigned int)-1073741766;
  if ( DatabaseNode < 0 )
    return (unsigned int)DatabaseNode;
LABEL_4:
  *a3 = v10;
  return (unsigned int)DatabaseNode;
}
