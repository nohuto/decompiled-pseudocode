/*
 * XREFs of PiUEventHandleVetoEvent @ 0x14076A438
 * Callers:
 *     PiUEventHandleIoctl @ 0x14064825C (PiUEventHandleIoctl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     KeAcquireGuardedMutex @ 0x140241970 (KeAcquireGuardedMutex.c)
 *     PsGetProcessImageFileName @ 0x14031BB90 (PsGetProcessImageFileName.c)
 *     RtlStringCchCopyNW @ 0x140370E80 (RtlStringCchCopyNW.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     PsLookupProcessByProcessId @ 0x14063B130 (PsLookupProcessByProcessId.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140648D44 (PiUEventDequeuePendingEventWorker.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14064D60C (PsGetAllocatedFullProcessImageName.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v7; // r12
  UNICODE_STRING *v8; // rdi
  char v9; // r13
  __int64 v10; // rbx
  struct _FAST_MUTEX *v11; // rcx
  _QWORD *v12; // r15
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  const CHAR *ProcessImageFileName; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v21; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  Process = 0LL;
  P = 0LL;
  AllocatedFullProcessImageName = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v21 = 0LL;
  if ( v5 && a2 && a3 == 8 )
  {
    v10 = *a2;
    v11 = *(struct _FAST_MUTEX **)(v5 + 16);
    *(_QWORD *)&DestinationString.Length = *a2;
    KeAcquireGuardedMutex(v11);
    v12 = *(_QWORD **)(v5 + 96);
    if ( v12 == (_QWORD *)(v5 + 96) )
    {
      AllocatedFullProcessImageName = -1073741811;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v12[3] + 69LL) )
    {
      KeAcquireGuardedMutex(&PiUEventUsermodeEventQueueLock);
      v14 = v12[3];
      v15 = *(_DWORD **)(v14 + 32);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 40);
        if ( v16 )
        {
          if ( !*v15 )
          {
            if ( (_BYTE)v10 )
            {
              *v15 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
              v17 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
              v7 = Process;
              if ( v17 < 0
                || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                    AllocatedFullProcessImageName < 0) )
              {
                v8 = &v21;
                RtlInitUnicodeString(&v21, &word_1407D36E0);
                AllocatedFullProcessImageName = 0;
              }
              else
              {
                v8 = (UNICODE_STRING *)P;
                if ( !*(_WORD *)P )
                {
                  v9 = 1;
                  DestinationString = 0LL;
                  ExFreePoolWithTag(P, 0);
                  v8 = &v21;
                  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v7);
                  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                  RtlAnsiStringToUnicodeString(&v21, &DestinationString, 1u);
                }
              }
              if ( v8->Length > 0x400u )
              {
                AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                                  *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40LL) + 8LL),
                                                  0x200uLL,
                                                  v8->Buffer,
                                                  0x1FFuLL);
                *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 8LL) + 1022LL) = 0;
                **(_WORD **)(v12[3] + 40LL) = 1024;
              }
              else
              {
                RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40LL), v8);
              }
              KeSetEvent(*(PRKEVENT *)(v12[3] + 24LL), 0, 0);
            }
            else
            {
              **(_WORD **)(v16 + 8) = 0;
              **(_WORD **)(v14 + 40) = 0;
              **(_DWORD **)(v14 + 32) = 0;
            }
          }
        }
      }
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    }
    PiUEventDequeuePendingEventWorker(v5, v12, 1);
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
  }
  else
  {
    AllocatedFullProcessImageName = -1073741811;
  }
  if ( v9 )
  {
    RtlFreeAnsiString(v8);
  }
  else if ( v8 && v8 != &v21 )
  {
    ExFreePoolWithTag(v8, 0);
  }
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
LABEL_11:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
