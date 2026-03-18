/*
 * XREFs of CmpCreateRootNode @ 0x140A5349C
 * Callers:
 *     CmpCreateRegistryRoot @ 0x140A532BC (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpCopyName @ 0x14069818C (CmpCopyName.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406C22BC (CmpNameSize.c)
 */

char __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int16 v5; // ax
  int Cell; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v3 = CmpMasterHive;
  v13 = 0LL;
  DestinationString = 0LL;
  v12 = 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = CmpNameSize(&DestinationString.Length);
  Cell = HvAllocateCell((ULONG_PTR)v3, (unsigned int)v5 + 76, 0LL, (__int64)&v13, (__int64)&v12);
  *a3 = Cell;
  if ( Cell == -1 )
    return 0;
  v7 = v13;
  *(_DWORD *)(v3[8] + 36LL) = Cell;
  *(_DWORD *)v7 = 813934;
  v8 = v13;
  *(_QWORD *)(v13 + 4) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 16) = -1;
  *(_QWORD *)(v8 + 20) = 0LL;
  *(_DWORD *)(v8 + 28) = -1;
  *(_DWORD *)(v8 + 32) = -1;
  *(_DWORD *)(v8 + 36) = 0;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v8 + 44) = -1;
  *(_DWORD *)(v8 + 48) = -1;
  *(_WORD *)(v8 + 74) = 0;
  *(_QWORD *)(v8 + 60) = 0LL;
  *(_WORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 52) &= 0xFF00FFFF;
  *(_BYTE *)(v8 + 55) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = CmpCopyName((_BYTE *)(v8 + 76), &DestinationString);
  *(_WORD *)(v8 + 72) = v9;
  if ( v9 < DestinationString.Length )
    *(_WORD *)(v7 + 2) |= 0x20u;
  ((void (__fastcall *)(_QWORD *, __int64 *))v3[2])(v3, &v12);
  return 1;
}
