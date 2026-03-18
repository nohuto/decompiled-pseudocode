/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140940270
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x140940840 (EtwpCovSampImageNotify.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r14d
  void *v5; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9
  _QWORD *v9; // rax
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  _BYTE v15[56]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v18[3]; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  memset(v15, 0, sizeof(v15));
  v5 = 0LL;
  memset(v18, 0, sizeof(v18));
  v16 = 0LL;
  FullImageName = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v18, v8);
    v4 = 1;
LABEL_5:
    v9 = MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1, a3, a4);
    v5 = v9;
    if ( v9 )
    {
      *(_DWORD *)&v15[16] |= 0x400u;
      v10 = v9;
      *(_QWORD *)&v15[8] = 56LL;
      v11 = *v9;
      if ( *v9 )
      {
        v12 = *(_QWORD *)v15;
        do
        {
          if ( (v11 & 3) == 0 )
          {
            v13 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
            *v10 = v13;
            v16 = v13;
            *(_QWORD *)&v15[24] = v10[1] & 0xFFFFFFFFFFFF0000uLL;
            *(_QWORD *)&v15[40] = v10[3];
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, _BYTE *))(FltMgrCallbacks + 24))(
                   v13,
                   1024LL,
                   &FullImageName,
                   v15) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 1088), (PIMAGE_INFO)&v15[16]);
            }
            v12 = *(_QWORD *)v15;
          }
          if ( v12 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v12 = 0LL;
            *(_QWORD *)v15 = 0LL;
          }
          v10 += 6;
          v11 = *v10;
        }
        while ( *v10 );
      }
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
  {
    KiUnstackDetachProcess((__int64)v18, 0LL, v7, v8);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  return 0LL;
}
