/*
 * XREFs of NtSetEvent @ 0x1405DE240
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A4CB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExpSetCrossVmEvent @ 0x14095CBF4 (ExpSetCrossVmEvent.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  int v7; // ebx
  struct _KEVENT *v8; // rdi
  LONG v9; // eax
  PVOID v11; // [rsp+30h] [rbp-38h] BYREF
  PVOID v12; // [rsp+38h] [rbp-30h]
  LONG v13; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    v5 = (__int64)PreviousState;
    if ( (unsigned __int64)PreviousState >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
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
        v7 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &v11, 0LL);
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
  if ( v7 >= 0 && PreviousState )
    *PreviousState = v9;
  if ( v8 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v8);
  return v7;
}
