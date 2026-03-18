/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x1409F1110
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x1409F1600 (EtwpCovSampImageNotify.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r14d
  void *v5; // rdi
  _DWORD *v7; // r9
  _QWORD *v8; // rax
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  _BYTE v14[56]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v17[3]; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  memset(v14, 0, sizeof(v14));
  v5 = 0LL;
  memset(v17, 0, sizeof(v17));
  v15 = 0LL;
  FullImageName = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v17, v7);
    v4 = 1;
LABEL_5:
    v8 = MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1, a3, a4);
    v5 = v8;
    if ( v8 )
    {
      *(_DWORD *)&v14[16] |= 0x400u;
      v9 = v8;
      *(_QWORD *)&v14[8] = 56LL;
      v10 = *v8;
      if ( *v8 )
      {
        v11 = *(_QWORD *)v14;
        do
        {
          if ( (v10 & 3) == 0 )
          {
            v12 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
            *v9 = v12;
            v15 = v12;
            *(_QWORD *)&v14[24] = v9[1] & 0xFFFFFFFFFFFF0000uLL;
            *(_QWORD *)&v14[40] = v9[3];
            if ( FltMgrCallbacks
              && (*(int (__fastcall **)(unsigned __int64, __int64, UNICODE_STRING *, _BYTE *))(FltMgrCallbacks + 24))(
                   v12,
                   1024LL,
                   &FullImageName,
                   v14) >= 0 )
            {
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 1088), (PIMAGE_INFO)&v14[16]);
            }
            v11 = *(_QWORD *)v14;
          }
          if ( v11 )
          {
            (*(void (**)(void))(FltMgrCallbacks + 32))();
            v11 = 0LL;
            *(_QWORD *)v14 = 0LL;
          }
          v9 += 6;
          v10 = *v9;
        }
        while ( *v9 );
      }
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
  {
    KiUnstackDetachProcess((__int64)v17, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  return 0LL;
}
