/*
 * XREFs of CcRegistryChangeCallback @ 0x14039AE20
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     CcOpenRegistryPath @ 0x1403CD14C (CcOpenRegistryPath.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcRegistryChangeCallback(char *P)
{
  char *v1; // rsi
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  NTSTATUS v6; // esi
  int v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v1 = P + 56;
  IoStatusBlock = 0LL;
  v2 = P;
  v3 = MEMORY[0xFFFFF78000000320];
  v4 = MEMORY[0xFFFFF78000000320] - *((_QWORD *)P + 6);
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcRegistryChangeCallback: Something of interest changed (callback:%c), under:\"%wZ\"\n",
    P[72] != 0 ? 70 : 84,
    P + 56);
  if ( !v2[72] )
  {
    (*((void (__fastcall **)(char *))v2 + 5))(v2);
    *((_QWORD *)v2 + 6) = v3;
    DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Processed \"%wZ\", TickDiff=%I64d\n", v1, v4);
  }
  v2[72] = 0;
  if ( !*((_QWORD *)v2 + 4) )
  {
    v7 = CcOpenRegistryPath(v1);
    if ( v7 < 0 )
    {
      DbgPrintEx(0x7Fu, 0, "CcRegistryChangeCallback: Failed to open Key, status=0x%08x \"%wZ\n", (unsigned int)v7, v1);
      ExFreePoolWithTag(v2, 0x52576343u);
      v2 = 0LL;
    }
  }
  if ( v2 )
  {
    v5 = (void *)*((_QWORD *)v2 + 4);
    if ( v5 )
    {
      v6 = ZwNotifyChangeKey(v5, 0LL, (PIO_APC_ROUTINE)v2, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
      if ( v6 == 259 )
      {
        DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\"\n", v2 + 56);
      }
      else if ( v6 >= 0 )
      {
        DbgPrintEx(0x7Fu, 2u, "CcRegistryChangeCallback: Watch queued \"%wZ\" (for Immediate Processing)\n", v2 + 56);
      }
      else
      {
        ZwClose(*((HANDLE *)v2 + 4));
        *((_QWORD *)v2 + 4) = 0LL;
        v2[72] = 1;
        DbgPrintEx(
          0x7Fu,
          0,
          "CcRegistryChangeCallback: Failed Watch request, status=0x%08x \"%wZ\"\n",
          (unsigned int)v6,
          v2 + 56);
      }
    }
  }
  if ( !CcRegistryWatchInitComplete && v2 && !v2[72] )
    CcRegistryWatchInitComplete = 1;
}
