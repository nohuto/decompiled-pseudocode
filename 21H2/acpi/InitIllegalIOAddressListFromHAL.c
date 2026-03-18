/*
 * XREFs of InitIllegalIOAddressListFromHAL @ 0x1C00BF108
 * Callers:
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     FreellegalIOAddressList @ 0x1C00C0988 (FreellegalIOAddressList.c)
 */

void InitIllegalIOAddressListFromHAL()
{
  int v0; // eax
  int v1; // eax
  size_t v2; // rbx
  void *Pool2; // rax
  const void *v4; // rdx
  int v5; // ecx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( !gpBadIOAddressList )
  {
    v0 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           0LL,
           0LL,
           &v6);
    if ( v0 != -1073741820 )
    {
      if ( v0 == -1073741496 )
      {
        v4 = 0LL;
        v5 = 74;
      }
      else
      {
        v4 = (const void *)v0;
        v5 = 73;
      }
      goto LABEL_17;
    }
    if ( !v6 )
    {
      v4 = 0LL;
      v5 = 75;
      goto LABEL_17;
    }
    gpBadIOAddressList = (PVOID)ExAllocatePool2(64LL, v6, 1231842625LL);
    if ( !gpBadIOAddressList )
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v4 = 0LL;
      v5 = 71;
      goto LABEL_17;
    }
    v1 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           v6,
           gpBadIOAddressList,
           &v6);
    if ( v1 )
    {
      PrintDebugMessage(73, (const void *)v1, 0LL, 0LL, 0LL);
      FreellegalIOAddressList();
      return;
    }
    if ( v6 / 0x18 != 1 )
    {
      v2 = 4LL * (v6 / 0x18 - 1);
      Pool2 = (void *)ExAllocatePool2(64LL, v2, 1231842625LL);
      gpBadIOErrorLogDoneList = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, v2);
        return;
      }
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v4 = 0LL;
      v5 = 72;
LABEL_17:
      PrintDebugMessage(v5, v4, 0LL, 0LL, 0LL);
    }
  }
}
