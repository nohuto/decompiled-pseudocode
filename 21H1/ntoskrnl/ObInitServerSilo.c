/*
 * XREFs of ObInitServerSilo @ 0x1407B3480
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int result; // eax
  __int64 v7; // rdx
  int v8; // ebx
  struct _DMA_ADAPTER *v9; // rcx
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+48h] [rbp-28h]
  __int64 *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+A8h] [rbp+38h] BYREF

  DmaAdapter = 0LL;
  v10[1] = 0;
  v14 = 0;
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
      v11 = Handle;
      v10[0] = 48;
      v12 = &ObpGlobalDirectoryName;
      v13 = 576;
      v15 = 0LL;
      v8 = ObReferenceObjectByNameEx((__int64)v10, v7, 2, (__int64)ObpDirectoryObjectType, 0, 0LL, &DmaAdapter);
      ZwClose(Handle);
      if ( v8 < 0 )
        return v8;
      v9 = DmaAdapter;
      *ServerSiloGlobals = *(_QWORD *)&DmaAdapter[19].Version;
      HalPutDmaAdapter(v9);
      return 0;
    }
  }
  return result;
}
