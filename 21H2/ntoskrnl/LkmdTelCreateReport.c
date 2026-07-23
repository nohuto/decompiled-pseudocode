/*
 * XREFs of LkmdTelCreateReport @ 0x140982FB8
 * Callers:
 *     WheapReportLiveDump @ 0x14095E474 (WheapReportLiveDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x140407C30 (RtlCaptureContext.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall LkmdTelCreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *PoolWithTag; // rax
  char *v9; // rbx
  PVOID v10; // rax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  _CONTEXT ContextRecord; // [rsp+58h] [rbp-B0h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v18 = 0LL;
  LODWORD(v17) = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x74614454u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x74614454u);
    *(_QWORD *)v9 = v10;
    if ( v10 && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v9 + 52, 0x20uLL, L"%ws", L"WHEA") >= 0 )
    {
      LODWORD(v17) = 1;
      v11 = WerLiveKernelCreateReport(v9 + 104, &v17, &v18);
      v12 = v11;
      if ( v11 < 0 )
      {
        DbgPrintEx(5u, 0, "LKMDTEL: WerLiveKernelCreateReport failed with status 0x%X\n", v11);
        goto LABEL_10;
      }
      if ( (_DWORD)v17 )
      {
        *((_QWORD *)v9 + 12) = v18;
        RtlCaptureContext(&ContextRecord);
        v13 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, a3, a4, a5, a6, *(_QWORD *)v9);
        if ( v13 )
        {
          *((_DWORD *)v9 + 2) = v13;
LABEL_10:
          if ( v12 >= 0 )
            return v9;
        }
      }
      else
      {
        DbgPrintEx(5u, 1u, "LKMDTEL: WerPolicy is WerLiveKernelPolicyNoDump, no dump is allowed.\n");
      }
    }
    if ( *(_QWORD *)v9 )
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
    ExFreePoolWithTag(v9, 0x74614454u);
    v9 = 0LL;
  }
  if ( v18 )
  {
    v14 = WerLiveKernelCancelReport();
    if ( v14 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v14);
    v15 = WerLiveKernelCloseHandle(v18);
    if ( v15 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v15);
  }
  return v9;
}
