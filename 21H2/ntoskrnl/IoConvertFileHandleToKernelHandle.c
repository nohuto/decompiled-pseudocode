/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x14072A4C0
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1406089A8 (IopOpenLinkOrRenameTarget.c)
 *     CmpNameFromAttributes @ 0x14066F2CC (CmpNameFromAttributes.c)
 *     NtSaveKeyEx @ 0x140728950 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x1408694D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697A0 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A69C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094A8D8 (ExpQueryElamCertInfo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        PADAPTER_OBJECT DmaAdapter)
{
  PADAPTER_OBJECT v5; // r14
  NTSTATUS result; // eax
  int v10; // eax
  PADAPTER_OBJECT v11; // rsi
  NTSTATUS v12; // ebx
  HANDLE v13; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+20h] BYREF

  v5 = DmaAdapter;
  Handle = 0LL;
  HandleInformation = 0LL;
  *(_QWORD *)&DmaAdapter->Version = 0LL;
  if ( !a1 )
    return 0;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             a2,
             (PVOID *)&DmaAdapter,
             &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v10 = ObDuplicateObject(
              KeGetCurrentThread()->ApcState.Process,
              a1,
              PsInitialSystemProcess,
              (__int64 *)&Handle,
              a3,
              512,
              0,
              0);
      v11 = DmaAdapter;
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = Handle;
        Object = 0LL;
        v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v12 < 0 )
        {
          ObCloseHandle(v13, 0);
        }
        else
        {
          if ( Object == v11 )
          {
            *(_QWORD *)&v5->Version = v13;
          }
          else
          {
            v12 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        }
      }
    }
    else
    {
      v11 = DmaAdapter;
      v12 = -1073741790;
    }
    HalPutDmaAdapter(v11);
    return v12;
  }
  return result;
}
