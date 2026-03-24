/*
 * XREFs of NtSetEvent @ 0x140684400
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExpSetCrossVmEvent @ 0x14095CA34 (ExpSetCrossVmEvent.c)
 */

__int64 __fastcall NtSetEvent(HANDLE Handle, LONG *a2)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  struct _KEVENT *v8; // rdi
  LONG v9; // eax
  PVOID v11; // [rsp+30h] [rbp-38h] BYREF
  PVOID v12; // [rsp+38h] [rbp-30h]
  LONG v13; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    v5 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v7 = v6;
  v8 = (struct _KEVENT *)Object;
  v12 = Object;
  LODWORD(Object) = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        v11 = 0LL;
        v7 = ObReferenceObjectByHandle(Handle, 2u, ExCrossVmEventObjectType, PreviousMode, &v11, 0LL);
        v8 = (struct _KEVENT *)v11;
        v12 = v11;
        LODWORD(Object) = v7;
        if ( v7 >= 0 )
        {
          v7 = ExpSetCrossVmEvent(v11, &v13);
          LODWORD(Object) = v7;
        }
      }
    }
    v9 = v13;
  }
  else
  {
    v9 = KeSetEvent(v8, 1, 0);
    v13 = v9;
  }
  if ( v7 >= 0 && a2 )
    *a2 = v9;
  if ( v8 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v8);
  return (unsigned int)v7;
}
