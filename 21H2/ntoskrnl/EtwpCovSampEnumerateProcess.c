/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140944C50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x140945220 (EtwpCovSampImageNotify.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1)
{
  int v1; // r14d
  void *v2; // rdi
  _QWORD *v4; // rax
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  _BYTE v10[56]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v13[3]; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  memset(v10, 0, sizeof(v10));
  v2 = 0LL;
  memset(v13, 0, sizeof(v13));
  v11 = 0LL;
  FullImageName = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v13);
    v1 = 1;
LABEL_5:
    v4 = MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1);
    v2 = v4;
    if ( v4 )
    {
      *(_DWORD *)&v10[16] |= 0x400u;
      v5 = v4;
      *(_QWORD *)&v10[8] = 56LL;
      v6 = *v4;
      if ( *v4 )
      {
        v7 = *(_QWORD *)v10;
        do
        {
          if ( (v6 & 3) == 0 )
          {
            v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
            *v5 = v8;
            v11 = v8;
            *(_QWORD *)&v10[24] = v5[1] & 0xFFFFFFFFFFFF0000uLL;
            *(_QWORD *)&v10[40] = v5[3];
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, _BYTE *))(FltMgrCallbacks + 24))(
                   v8,
                   1024LL,
                   &FullImageName,
                   v10) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 1088), (PIMAGE_INFO)&v10[16]);
            }
            v7 = *(_QWORD *)v10;
          }
          if ( v7 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v7 = 0LL;
            *(_QWORD *)v10 = 0LL;
          }
          v5 += 6;
          v6 = *v5;
        }
        while ( *v5 );
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v13, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  return 0LL;
}
