/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140681C30
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x140295E60 (SepReferenceTokenByHandle.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCaptureUnicodeStringArray @ 0x140681F80 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140952B60 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r12
  unsigned __int8 v10; // si
  PULONG v11; // r14
  PULONG v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  NTSTATUS SecurityAttributesToken; // edi
  struct _KTHREAD *CurrentThread; // rax
  PADAPTER_OBJECT v17; // rbx
  char v18; // dl
  _BYTE v20[4]; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+44h] [rbp-44h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  DmaAdapter = 0LL;
  v24 = 0LL;
  v20[0] = 0;
  v10 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v20[1] = v10;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_24:
    SecurityAttributesToken = -1073741811;
    v21 = -1073741811;
LABEL_25:
    v17 = DmaAdapter;
    goto LABEL_15;
  }
  if ( Buffer )
    goto LABEL_24;
LABEL_3:
  if ( v10 )
  {
    ProbeForWrite(Buffer, Length, 4u);
    v11 = ReturnLength;
    v12 = ReturnLength;
    if ( ((unsigned __int8)ReturnLength & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)ReturnLength + 3;
    if ( ReturnLength >= (PULONG)((char *)ReturnLength + 3) || v13 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v12 = *(_BYTE *)v12;
      v12 = (PULONG)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFF000uLL) + 4096);
    }
    while ( v12 != (PULONG)v14 );
  }
  else
  {
    v11 = ReturnLength;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(Attributes, NumberOfAttributes, v10, &P);
  v21 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &DmaAdapter, v20, &v24);
  v21 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = DmaAdapter;
  ExAcquireResourceSharedLite(*(PERESOURCE *)&DmaAdapter[3].Version, 1u);
  v9 = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v17,
                              v18,
                              (__int64)P,
                              NumberOfAttributes,
                              0,
                              (__int64)Buffer,
                              Length,
                              (__int64)v11);
  v21 = SecurityAttributesToken;
LABEL_15:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)&v17[3].Version);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v21;
    v17 = DmaAdapter;
  }
  if ( v17 )
    HalPutDmaAdapter(v17);
  return SecurityAttributesToken;
}
