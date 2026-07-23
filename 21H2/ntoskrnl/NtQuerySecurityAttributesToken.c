/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1406F0920
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepReferenceTokenByHandle @ 0x14026A9C0 (SepReferenceTokenByHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SepCaptureUnicodeStringArray @ 0x1406F0C70 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1409562C0 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v23[4]; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+44h] [rbp-44h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  DmaAdapter = 0LL;
  v27 = 0LL;
  v23[0] = 0;
  v10 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v23[1] = v10;
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_24:
    SecurityAttributesToken = -1073741811;
    v24 = -1073741811;
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
  v24 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_25;
  SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &DmaAdapter, v23, &v27);
  v24 = SecurityAttributesToken;
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
  v24 = SecurityAttributesToken;
LABEL_15:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)&v17[3].Version);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
    SecurityAttributesToken = v24;
    v17 = DmaAdapter;
  }
  if ( v17 )
    HalPutDmaAdapter(v17);
  return SecurityAttributesToken;
}
