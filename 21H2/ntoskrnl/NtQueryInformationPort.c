/*
 * XREFs of NtQueryInformationPort @ 0x1408C2010
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtQueryInformationPort(HANDLE Handle, __int64 a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    if ( a5 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a5;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( Handle )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      if ( a5 )
        *a5 = 0;
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    }
  }
  else
  {
    return (unsigned int)-1073741821;
  }
  return (unsigned int)v8;
}
