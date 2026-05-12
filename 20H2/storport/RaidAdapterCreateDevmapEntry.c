/*
 * XREFs of RaidAdapterCreateDevmapEntry @ 0x1C002BF28
 * Callers:
 *     RaidAdapterRegisterDeviceInterface @ 0x1C002DB88 (RaidAdapterRegisterDeviceInterface.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0011B98 (RaidDriverGetName.c)
 *     PortMapBuildAdapterEntry @ 0x1C00594E4 (PortMapBuildAdapterEntry.c)
 *     PortMapBuildBusEntry @ 0x1C00595F8 (PortMapBuildBusEntry.c)
 *     PortMapOpenKey @ 0x1C0059780 (PortMapOpenKey.c)
 */

__int64 __fastcall RaidAdapterCreateDevmapEntry(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned int v4; // r14d
  unsigned __int8 v5; // cl
  int v7; // [rsp+20h] [rbp-38h]
  void *v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v11; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v11 = (HANDLE)-1LL;
  v9 = 0LL;
  v2 = 0;
  if ( (int)PortMapOpenKey(&v11) >= 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v9);
    if ( (int)PortMapBuildAdapterEntry(
                (int)v11,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 704),
                v3,
                v7,
                (__int64)&v9,
                v8,
                (__int64)&Handle) >= 0 )
    {
      v4 = *(unsigned __int8 *)(a1 + 400);
      if ( *(_BYTE *)(a1 + 400) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          v5 = (unsigned __int8)v2 < 8u ? *(_BYTE *)((unsigned __int8)v2 + a1 + 401) : -1;
          PortMapBuildBusEntry(Handle, v2, v5, a1 + 8 * (v2 + 278LL));
          ++v2;
        }
        while ( v2 < v4 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v11 != (HANDLE)-1LL )
    ZwClose(v11);
  return 0LL;
}
