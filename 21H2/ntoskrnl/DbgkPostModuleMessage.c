/*
 * XREFs of DbgkPostModuleMessage @ 0x1404EE1AC
 * Callers:
 *     DbgkPostEnclaveModuleMessages @ 0x1404EE130 (DbgkPostEnclaveModuleMessages.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     DbgkpPostModuleMessages @ 0x140885400 (DbgkpPostModuleMessages.c)
 *     MmPostHotPatchDbgModuleMessages @ 0x1408CEB60 (MmPostHotPatchDbgModuleMessages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x1408872B4 (DbgkpSendApiMessage.c)
 *     MmGetFileNameForAddress @ 0x1408C41A4 (MmGetFileNameForAddress.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkPostModuleMessage(
        PVOID Object,
        PVOID a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        PRKEVENT a6)
{
  NTSTATUS v10; // eax
  HANDLE v11; // r8
  NTSTATUS result; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v16[34]; // [rsp+80h] [rbp-80h] BYREF

  IoStatusBlock = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[5]) = 5;
  v16[7] = a3;
  v16[8] = (HANDLE)__PAIR64__(a5, a4);
  if ( (int)MmGetFileNameForAddress(a3, P) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(&v16[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
    v11 = v16[6];
    if ( v10 < 0 )
      v11 = 0LL;
    v16[6] = v11;
    ExFreePoolWithTag(P[1], 0);
  }
  if ( a6 )
  {
    result = DbgkpQueueMessage(Object, a2, a6);
  }
  else
  {
    DbgkpSendApiMessage(Object);
    result = -1073741823;
  }
  if ( result < 0 )
  {
    if ( v16[6] )
      return ObCloseHandle(v16[6], 0);
  }
  return result;
}
