/*
 * XREFs of MiCreatePartitionNamespace @ 0x1407A0B44
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407A06D4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwCreateDirectoryObjectEx @ 0x1403FB8A0 (ZwCreateDirectoryObjectEx.c)
 *     ObCleanupSecurityDescriptor @ 0x1407A0C68 (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0CAC (ObCreateKernelObjectsSD.c)
 */

__int64 __fastcall MiCreatePartitionNamespace(__int64 a1)
{
  int DirectoryObject; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  _OWORD *v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]

  v9 = 0;
  v13 = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = 0LL;
  v15 = 0LL;
  p_DestinationString = &DestinationString;
  v14 = (_OWORD *)SePublicDefaultUnrestrictedSd;
  v8 = 48;
  v12 = 576;
  DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 232, 983055LL);
  if ( DirectoryObject >= 0 )
  {
    DirectoryObject = ObCreateKernelObjectsSD(SecurityDescriptor);
    if ( DirectoryObject >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 232);
      v15 = 0LL;
      v10 = v3;
      v8 = 48;
      p_DestinationString = (UNICODE_STRING *)&MiKernelObjectsDirectoryName;
      v14 = SecurityDescriptor;
      v12 = 576;
      DirectoryObject = ZwCreateDirectoryObjectEx(a1 + 240, 983055LL);
    }
  }
  ObCleanupSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)DirectoryObject;
}
