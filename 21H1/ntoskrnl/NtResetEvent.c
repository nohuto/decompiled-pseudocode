/*
 * XREFs of NtResetEvent @ 0x1406C3FB0
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1406C3E84 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExpResetCrossVmEvent @ 0x140957FF8 (ExpResetCrossVmEvent.c)
 */

NTSTATUS __cdecl NtResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  int v6; // edi
  struct _KEVENT *v7; // rsi
  __int64 v9; // rcx
  LONG v10; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousState < 0x7FFFFFFF0000LL )
      v9 = (__int64)PreviousState;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        v12 = 0LL;
        v6 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &v12, 0LL);
        v7 = (struct _KEVENT *)v12;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpResetCrossVmEvent(v12, &v10);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KeResetEvent(v7);
  }
  if ( v6 >= 0 && PreviousState )
    *PreviousState = v10;
  if ( v7 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v7);
  return v6;
}
