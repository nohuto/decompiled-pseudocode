/*
 * XREFs of _RtlCreateQueryDebugBuffer@8 @ 0x4B336810
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

HANDLE *__stdcall RtlCreateQueryDebugBuffer(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  _DWORD v5[2]; // [esp+Ch] [ebp-24h] BYREF
  int v6; // [esp+14h] [ebp-1Ch] BYREF
  int v7; // [esp+18h] [ebp-18h] BYREF
  int v8; // [esp+1Ch] [ebp-14h] BYREF
  HANDLE *v9; // [esp+20h] [ebp-10h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+28h] [ebp-8h] BYREF
  HANDLE *v12; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a1;
  Handle = 0;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  if ( !a1 )
    v2 = 0x400000;
  v3 = (v2 + 4095) & 0xFFFFF000;
  if ( RtlULongLongToUInt(&v6, 2 * v3, (unsigned __int64)v3 >> 31) >= 0 )
  {
    v5[0] = v6;
    v5[1] = 0;
    if ( NtCreateSection((int)&Handle, 983071, 0, (int)v5, 4, 0x4000000, 0) >= 0
      && ZwMapViewOfSection((int)Handle, -1, (int)&v9, 0, 0, 0, (int)&v6, 2, 0, 4) >= 0 )
    {
      v12 = v9;
      v8 = 104;
      if ( NtAllocateVirtualMemory(-1, (int)&v12, 0, (int)&v8, 4096, 4) >= 0 )
      {
        v7 = 104;
        v11 = (HANDLE *)((char *)v12 + v3);
        if ( NtAllocateVirtualMemory(-1, (int)&v11, 0, (int)&v7, 4096, 4) >= 0 )
        {
          *v12 = Handle;
          v12[1] = v12;
          v12[9] = (HANDLE)104;
          v12[10] = (HANDLE)v8;
          v12[11] = (HANDLE)v3;
          qmemcpy(v11, v12, 0x68u);
          v11[1] = v11;
          v11[10] = v7;
          *v11 = 0;
          return v12;
        }
      }
    }
    if ( v12 )
      NtFreeVirtualMemory(-1, (int)&v12, (int)&v8, 0x8000);
    if ( v11 )
      NtFreeVirtualMemory(-1, (int)&v11, (int)&v7, 0x8000);
    if ( v9 )
      NtUnmapViewOfSection(-1, (int)v9);
    if ( Handle )
      NtClose(Handle);
  }
  return 0;
}
