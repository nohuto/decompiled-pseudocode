/*
 * XREFs of IoGetDeviceInstanceName @ 0x1403700D0
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x1405E3F50 (WmipQueryWmiDataBlock.c)
 *     WmipTranslatePDOInstanceNames @ 0x140769590 (WmipTranslatePDOInstanceNames.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14078D464 (WmipGetGuidObjectInstanceInfo.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407491E4 (PnpConcatenateUnicodeStrings.c)
 */

__int64 __fastcall IoGetDeviceInstanceName(ULONG_PTR BugCheckParameter2, PUNICODE_STRING DestinationString)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rdi
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_16;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v7 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock(v8, (PVOID)0x310);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      v10 = *(_QWORD *)(BugCheckParameter2 + 312);
      v11 = (_WORD *)(*(_QWORD *)(v10 + 40) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
        v10 = *(_QWORD *)(BugCheckParameter2 + 312);
      }
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL);
      if ( v12 )
      {
        v13 = (_WORD *)(v12 + 56);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return PnpConcatenateUnicodeStrings(DestinationString, (PCUNICODE_STRING)(v4 + 40));
}
