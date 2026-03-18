/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpVirtualBranchIsReplicated @ 0x140718CA8 (CmpVirtualBranchIsReplicated.c)
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmpUnblockHiveWrites @ 0x14071A730 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 *     CmpFindPathByName @ 0x14071F2D8 (CmpFindPathByName.c)
 *     CmRealKCBToVirtualPath @ 0x14077CB98 (CmRealKCBToVirtualPath.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __int64 a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  void *v6; // r14
  __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  int v10; // r12d
  int v11; // ebx
  char PathByName; // al
  char v13; // r12
  __int64 CellFlat; // rax
  wchar_t *Buffer; // rcx
  char v17[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD BugCheckParameter4[3]; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  DestinationString = 0LL;
  v17[0] = 0;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  v10 = a2;
  HvpGetCellContextReinitialize(&BugCheckParameter4[1]);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (unsigned __int8)CmpIsKeyDeleted(a1, 0LL) )
  {
    v13 = 0;
  }
  else
  {
    v11 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
    if ( v11 < 0 )
      goto LABEL_9;
    v6 = *(void **)(a1 + 32);
    PathByName = CmpFindPathByName(a1, v10, 0, (unsigned int)BugCheckParameter4, (__int64)&BugCheckParameter3);
    v8 = BugCheckParameter3;
    v13 = PathByName;
    if ( PathByName )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v7 = CellFlat;
      if ( !CellFlat )
      {
        v11 = -1073741670;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(CellFlat + 52) & 0x200000) != 0 )
      {
LABEL_8:
        v11 = -1073741199;
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v8, &BugCheckParameter4[1]);
      else
        HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
    }
    CmpUnblockHiveWrites(*(PVOID *)(a1 + 32));
  }
  v6 = 0LL;
  v7 = 0LL;
  v11 = CmRealKCBToVirtualPath(a1, a2, a5, &DestinationString);
  if ( v11 < 0 )
    goto LABEL_9;
  *a3 |= 8u;
  if ( !CmpVirtualBranchIsReplicated(0LL, &DestinationString, v17) && ((*a3 & 1) == 0 || v13 || !v17[0]) )
    goto LABEL_8;
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 260;
LABEL_9:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v8, &BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v8, &BugCheckParameter4[1]);
  }
  if ( v6 )
    CmpUnblockHiveWrites(v6);
  return (unsigned int)v11;
}
