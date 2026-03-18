/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x14065CA50
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmpNameFromAttributes @ 0x14067DB18 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C78D4 (IopOpenLinkOrRenameTarget.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6A1C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  int v9; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+20h] BYREF

  v5 = Object;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v9 = ObDuplicateObject((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, a3, 512, 0, 0);
      v10 = Object;
      v11 = v9;
      if ( v9 >= 0 )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v11 < 0 )
        {
          ObCloseHandle(0LL, 0);
        }
        else
        {
          if ( Object == v10 )
          {
            *v5 = 0LL;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(0LL, 0);
          }
          ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
