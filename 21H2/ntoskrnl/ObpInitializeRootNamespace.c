/*
 * XREFs of ObpInitializeRootNamespace @ 0x14082C020
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x14041CCA0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x14041EC00 (ZwSetInformationSymbolicLink.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCleanupSecurityDescriptor @ 0x14082C308 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14082C34C (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14082C49C (ObpCreateDosDevicesDirectory.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  bool IsHostSilo; // di
  int KernelObjectsSD; // ebx
  bool v10; // sf
  int Object; // [rsp+28h] [rbp-49h]
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+40h] [rbp-31h]
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  PVOID v17; // [rsp+80h] [rbp+Fh] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+37h]

  v14 = 0;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IsHostSilo = PsIsHostSilo(a1);
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  KernelObjectsSD = ObCreateKernelObjectsSD(SecurityDescriptor);
  if ( KernelObjectsSD >= 0 )
  {
    if ( IsHostSilo
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsPathString,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 592,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          KernelObjectsSD = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes),
          KernelObjectsSD >= 0) )
    {
      ObjectAttributes.SecurityQualityOfService = 0LL;
      Object = 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsNameString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 592;
      KernelObjectsSD = ZwCreateDirectoryObjectEx((__int64)&Handle, 983055LL);
      if ( KernelObjectsSD >= 0 )
      {
        ZwClose(Handle);
        Handle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpObjectTypesNameString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = a2;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( IsHostSilo )
        {
          KernelObjectsSD = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          v17 = 0LL;
          KernelObjectsSD = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &v17, 0LL);
          ObpTypeDirectoryObject = v17;
          v10 = KernelObjectsSD < 0;
        }
        else
        {
          KernelObjectsSD = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          KernelObjectsSD = ZwSetInformationSymbolicLink((__int64)Handle, 1LL);
          v10 = KernelObjectsSD < 0;
        }
        if ( !v10 )
          KernelObjectsSD = ObpCreateDosDevicesDirectory(a1, a2, a3, a4, Object);
      }
    }
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
