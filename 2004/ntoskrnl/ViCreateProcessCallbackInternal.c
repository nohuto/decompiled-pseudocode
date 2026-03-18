/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x1409D9A94
 * Callers:
 *     ViCreateProcessCallback @ 0x14035A380 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x140322B60 (KeReleaseSpinLock.c)
 *     PsLookupProcessByProcessId @ 0x140666370 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x1406B7FF0 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406B813C (PsGetAllocatedFullProcessImageName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ViFaultsGetBaseImageName @ 0x1409D9F68 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x1409DA214 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  KIRQL v4; // si
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    SourceString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      p_Lock = &Process->Header.Lock;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v3 = P;
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v4 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
        {
          _InterlockedOr(p_Lock + 280, 0x10000u);
          p_Lock = &Process->Header.Lock;
          v3 = P;
        }
        KeReleaseSpinLock(&ViFaultInjectionLock, v4);
        ExFreePoolWithTag(v3, 0);
      }
      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
    }
  }
}
