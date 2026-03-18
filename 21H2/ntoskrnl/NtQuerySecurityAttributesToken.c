/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1406A09D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepReferenceTokenByHandle @ 0x1402F8F70 (SepReferenceTokenByHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCaptureUnicodeStringArray @ 0x1406A0BF0 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        __int64 a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        volatile void *Address)
{
  char v9; // r15
  unsigned __int8 PreviousMode; // bl
  unsigned int v11; // r14d
  volatile void *v12; // r13
  int SecurityAttributesToken; // esi
  int v14; // r9d
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rdi
  __int64 v17; // rdx
  int v19; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Length;
  if ( (_DWORD)Length )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_20:
    SecurityAttributesToken = -1073741811;
    v19 = -1073741811;
LABEL_19:
    v16 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( a4 )
    goto LABEL_20;
LABEL_3:
  if ( PreviousMode )
  {
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v12 = Address;
    ProbeForWrite(Address, 4uLL, 4u);
  }
  else
  {
    v12 = Address;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, PreviousMode, &P);
  v19 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_19;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, PreviousMode, v14, &Object, &Length, &v22);
  v19 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_19;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LOBYTE(Length) = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v16,
                              v17,
                              (__int64)P,
                              a3,
                              0,
                              (__int64)a4,
                              v11,
                              (__int64)v12);
  v19 = SecurityAttributesToken;
LABEL_8:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v16[6]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v19;
    v16 = (PERESOURCE *)Object;
  }
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x74726853u);
  return (unsigned int)SecurityAttributesToken;
}
