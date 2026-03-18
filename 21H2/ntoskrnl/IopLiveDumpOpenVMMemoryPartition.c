/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x14055A6E4
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x14041DD00 (ZwOpenPartition.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x14055BC94 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  int v2; // edi
  void *v3; // rcx
  int v4; // eax
  bool v6; // [rsp+38h] [rbp-49h] BYREF
  PVOID Object; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 v9; // [rsp+58h] [rbp-29h]
  __int64 v10; // [rsp+60h] [rbp-21h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  __int128 v14; // [rsp+78h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+88h] [rbp+7h] BYREF
  bool *v16; // [rsp+A8h] [rbp+27h]
  int v17; // [rsp+B0h] [rbp+2Fh]
  int v18; // [rsp+B4h] [rbp+33h]
  PVOID *p_Object; // [rsp+B8h] [rbp+37h]
  int v20; // [rsp+C0h] [rbp+3Fh]
  int v21; // [rsp+C4h] [rbp+43h]

  v13 = 0;
  v9 = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  v10 = 0LL;
  p_DestinationString = &DestinationString;
  v12 = 512;
  v14 = 0LL;
  v2 = ZwOpenPartition(a1 + 1088, 2LL);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1088),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1096) = Object,
        v2 < 0) )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
    IopLiveDumpTraceOpenVMMemoryPartitionFailure((unsigned int)v2);
    if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x200000000000LL) )
    {
      v4 = *(_DWORD *)(a1 + 80);
      v18 = 0;
      v21 = 0;
      v17 = 1;
      v6 = (v4 & 4) != 0;
      v16 = &v6;
      p_Object = &Object;
      LODWORD(Object) = v2;
      v20 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C064E0,
        (unsigned __int8 *)&byte_14002AEC7,
        (const GUID *)(a1 + 960),
        (const GUID *)(a1 + 944),
        4u,
        &v15);
    }
  }
  return (unsigned int)v2;
}
