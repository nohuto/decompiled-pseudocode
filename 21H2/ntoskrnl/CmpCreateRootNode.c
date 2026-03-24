/*
 * XREFs of CmpCreateRootNode @ 0x140A5B0B4
 * Callers:
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpNameSize @ 0x14069306C (CmpNameSize.c)
 *     HvAllocateCell @ 0x140709404 (HvAllocateCell.c)
 *     CmpCopyName @ 0x14070A0E0 (CmpCopyName.c)
 */

char __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int16 v5; // ax
  int v6; // eax
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
  v6 = HvAllocateCell(v3, (unsigned int)v5 + 76, 0, &v13, &v12);
  *a3 = v6;
  if ( v6 == -1 )
    return 0;
  v7 = v13;
  *(_DWORD *)(*(_QWORD *)(v3 + 64) + 36LL) = v6;
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
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v3 + 16))(v3, &v12);
  return 1;
}
