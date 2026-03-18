/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x140691804
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1406232C0 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x14069124C (CmpVirtualBranchIsReplicated.c)
 *     CmpIsKeyDeleted @ 0x14069178C (CmpIsKeyDeleted.c)
 *     CmpUnblockHiveWrites @ 0x1406919AC (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x140691A2C (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x140693BB8 (CmpBlockHiveWrites.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __m128i *a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  void *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  int v13; // ebx
  char PathByName; // al
  char v15; // r12
  __int64 v17; // rax
  wchar_t *Buffer; // rcx
  char v19[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v21 = 0xFFFFFFFFLL;
  v20 = 0;
  v19[0] = 0;
  v22 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( CmpIsKeyDeleted(a1, 0LL, v11, v12) )
  {
    v15 = 0;
  }
  else
  {
    v13 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
    if ( v13 < 0 )
      goto LABEL_9;
    v8 = *(void **)(a1 + 32);
    PathByName = CmpFindPathByName(a1, a2, 0LL, &v20, &v22);
    v10 = v22;
    v15 = PathByName;
    if ( PathByName )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v22 + 8))(v22, v20, &v21);
      v9 = v17;
      if ( !v17 )
      {
        v13 = -1073741670;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(v17 + 52) & 0x200000) != 0 )
      {
LABEL_8:
        v13 = -1073741199;
        goto LABEL_9;
      }
      (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v21);
    }
    CmpUnblockHiveWrites(*(PVOID *)(a1 + 32));
  }
  v8 = 0LL;
  v9 = 0LL;
  v13 = CmRealKCBToVirtualPath(a1, a2, a5, &DestinationString);
  if ( v13 < 0 )
    goto LABEL_9;
  *a3 |= 8u;
  if ( !CmpVirtualBranchIsReplicated(0LL, &DestinationString, v19) && ((*a3 & 1) == 0 || v15 || !v19[0]) )
    goto LABEL_8;
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v13 = 260;
LABEL_9:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v21);
  if ( v8 )
    CmpUnblockHiveWrites(v8);
  return (unsigned int)v13;
}
