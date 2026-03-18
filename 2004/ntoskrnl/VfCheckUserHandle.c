/*
 * XREFs of VfCheckUserHandle @ 0x1409D7174
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     ObQueryTypeName @ 0x1408DA8D0 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x1409C37D4 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C58B0 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1409D3F20 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  NTSTATUS v9; // eax
  struct _DMA_ADAPTER *v10; // rbp
  char v11; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( BugCheckParameter2 )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            do
            {
              v7 = *v6;
              if ( VfDriverIsKernelImageAddress(*v6) )
              {
                if ( KernelVerifier )
                  break;
              }
              else
              {
                if ( (unsigned int)VfTargetDriversIsEnabled(v8) )
                  break;
                if ( !ViDriverXDVBase
                  || !ViDriverXDVImageSize
                  || v7 < ViDriverXDVBase
                  || v7 >= ViDriverXDVBase + (unsigned __int64)(unsigned int)ViDriverXDVImageSize )
                {
                  return;
                }
              }
              v5 = (unsigned int)(v5 + 1);
              ++v6;
            }
            while ( (unsigned int)v5 < v4 );
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              Object = 0LL;
              v9 = ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL);
              v10 = (struct _DMA_ADAPTER *)Object;
              if ( v9 < 0 )
                goto LABEL_25;
              v11 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v13) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v11 = 1;
              }
              HalPutDmaAdapter(v10);
              if ( !v11 )
              {
LABEL_25:
                if ( ViHandleBreaksEnabled )
                  VerifierBugCheckIfAppropriate(
                    0xC4u,
                    0xF6uLL,
                    BugCheckParameter2,
                    (ULONG_PTR)Process,
                    (__int64)BackTrace[v5]);
              }
            }
          }
        }
      }
    }
  }
}
