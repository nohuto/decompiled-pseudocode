/*
 * XREFs of VrpHandleIoctlGetVirtualRootKey @ 0x14087E7D8
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405C9180 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlGetVirtualRootKey(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int JobSilo; // ebx
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // r14
  ULONG v12; // ecx
  HANDLE v13; // rcx
  _QWORD *Tag; // [rsp+20h] [rbp-60h]
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  v17 = 0LL;
  Object = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LODWORD(Tag) = 1381395779;
    JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 4LL, PsJobType, a3, Tag, &Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), v17) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          v10 = PsAttachSiloToCurrentThread(v9);
          ObjectAttributes.RootDirectory = 0LL;
          v11 = v10;
          ObjectAttributes.Length = 48;
          v12 = 1088;
          if ( a3 != 1 )
            v12 = 576;
          ObjectAttributes.Attributes = v12;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&VrpRootKeyPaths[8 * *(int *)(a1 + 8)];
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( JobSilo >= 0 )
          {
            v13 = KeyHandle;
            KeyHandle = 0LL;
            JobSilo = 0;
            *a6 = 8;
            *a5 = v13;
          }
          PsDetachSiloFromCurrentThread(v11);
        }
      }
    }
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
