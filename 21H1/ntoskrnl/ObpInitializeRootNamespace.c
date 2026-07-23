/*
 * XREFs of ObpInitializeRootNamespace @ 0x140782DDC
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403F2E30 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x1403F37F0 (ZwCreateDirectoryObject.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403F3810 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F3B30 (ZwCreateSymbolicLinkObject.c)
 *     ZwSetInformationSymbolicLink @ 0x1403F5670 (ZwSetInformationSymbolicLink.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObCleanupSecurityDescriptor @ 0x1407830B4 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407830F8 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x140783244 (ObpCreateDosDevicesDirectory.c)
 */

__int64 __fastcall ObpInitializeRootNamespace(__int64 a1, void *a2, __int64 a3)
{
  bool IsHostSilo; // di
  NTSTATUS KernelObjectsSD; // ebx
  bool v8; // sf
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-29h] BYREF
  HANDLE ShadowDirectoryHandle; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+78h] [rbp+17h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+A0h] [rbp+3Fh]
  int SymbolicLinkInformation; // [rsp+E0h] [rbp+7Fh] BYREF

  SymbolicLinkInformation = 0;
  DirectoryHandle = 0LL;
  ShadowDirectoryHandle = 0LL;
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
          KernelObjectsSD = ZwOpenDirectoryObject(&ShadowDirectoryHandle, 0xF000Fu, &ObjectAttributes),
          KernelObjectsSD >= 0) )
    {
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpKernelObjectsNameString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 592;
      KernelObjectsSD = ZwCreateDirectoryObjectEx(
                          &DirectoryHandle,
                          0xF000Fu,
                          &ObjectAttributes,
                          ShadowDirectoryHandle,
                          0);
      if ( KernelObjectsSD >= 0 )
      {
        ZwClose(DirectoryHandle);
        DirectoryHandle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpObjectTypesNameString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = a2;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( IsHostSilo )
        {
          KernelObjectsSD = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          Object = 0LL;
          KernelObjectsSD = ObReferenceObjectByHandle(DirectoryHandle, 0, ObpDirectoryObjectType, 0, &Object, 0LL);
          ObpTypeDirectoryObject = (PADAPTER_OBJECT)Object;
          v8 = KernelObjectsSD < 0;
        }
        else
        {
          KernelObjectsSD = ZwCreateSymbolicLinkObject(
                              &DirectoryHandle,
                              0xF0001u,
                              &ObjectAttributes,
                              (PUNICODE_STRING)&ObpObjectTypesPathString);
          if ( KernelObjectsSD < 0 )
            goto LABEL_9;
          KernelObjectsSD = ZwSetInformationSymbolicLink(
                              DirectoryHandle,
                              SymbolicLinkGlobalInformation,
                              &SymbolicLinkInformation,
                              4u);
          v8 = KernelObjectsSD < 0;
        }
        if ( !v8 )
          KernelObjectsSD = ObpCreateDosDevicesDirectory(a1, a2, a3);
      }
    }
  }
LABEL_9:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( ShadowDirectoryHandle )
    ZwClose(ShadowDirectoryHandle);
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)KernelObjectsSD;
}
