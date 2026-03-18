/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x140716620
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 *     CmpNameFromAttributes @ 0x14068D57C (CmpNameFromAttributes.c)
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140864B60 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140864E30 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140945E6C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
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
