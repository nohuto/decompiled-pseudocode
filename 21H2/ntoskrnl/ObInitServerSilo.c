/*
 * XREFs of ObInitServerSilo @ 0x1407C9400
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int result; // eax
  int v7; // ebx
  struct _DMA_ADAPTER *v8; // rcx
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+A8h] [rbp+38h] BYREF

  DmaAdapter = 0LL;
  v9[1] = 0;
  v13 = 0;
  Handle = 0LL;
  Object = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[15] = 0LL;
  v4 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  v5 = 37LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  if ( PsIsHostSilo(v2) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v10 = Handle;
      v9[0] = 48;
      v11 = &ObpGlobalDirectoryName;
      v12 = 576;
      v14 = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)v9, 0LL, 2, (__int64)ObpDirectoryObjectType, 0, 0LL, &DmaAdapter);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = DmaAdapter;
      *ServerSiloGlobals = *(_QWORD *)&DmaAdapter[19].Version;
      HalPutDmaAdapter(v8);
      return 0;
    }
  }
  return result;
}
