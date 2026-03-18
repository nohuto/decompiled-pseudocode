/*
 * XREFs of ObpInitializeRootNamespace @ 0x140788760
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14097CFE0 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F40C0 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x1403F4A80 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403F4AA0 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F4DC0 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x1403F6900 (ZwSetInformationSymbolicLink.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCleanupSecurityDescriptor @ 0x140788A38 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140788A7C (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3)
{
  bool IsHostSilo; // di
  int KernelObjectsSD; // ebx
  bool v8; // sf
  HANDLE Handle; // [rsp+38h] [rbp-29h] BYREF
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+78h] [rbp+17h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+A0h] [rbp+3Fh]

  Handle = 0LL;
  DirectoryHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IsHostSilo = PsIsHostSilo(a1);
  v15 = 0LL;
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
          Object = 0LL;
          KernelObjectsSD = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpTypeDirectoryObject = (PADAPTER_OBJECT)Object;
          v8 = KernelObjectsSD < 0;
        }
        else
        {
          KernelObjectsSD = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          KernelObjectsSD = ZwSetInformationSymbolicLink((__int64)Handle, 1LL);
          v8 = KernelObjectsSD < 0;
        }
        if ( !v8 )
          KernelObjectsSD = ObpCreateDosDevicesDirectory(a1, a2, a3);
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
