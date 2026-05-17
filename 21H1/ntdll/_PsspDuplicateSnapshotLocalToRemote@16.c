/*
 * XREFs of _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93
 * Callers:
 *     _PssNtDuplicateSnapshot@20 @ 0x4B3868E0 (_PssNtDuplicateSnapshot@20.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 */

int __fastcall PsspDuplicateSnapshotLocalToRemote(int a1, int a2, _DWORD *a3, char a4)
{
  int v4; // edi
  int VirtualMemory; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [esp+10h] [ebp-3E8h] BYREF
  int v17; // [esp+14h] [ebp-3E4h] BYREF
  int v18; // [esp+18h] [ebp-3E0h] BYREF
  int v19; // [esp+1Ch] [ebp-3DCh] BYREF
  _DWORD v20[245]; // [esp+20h] [ebp-3D8h] BYREF

  v4 = a1;
  v18 = a1;
  v19 = 0;
  v17 = 0;
  memset(v20, 0, 0x3D0u);
  VirtualMemory = RtlULongLongToUInt(
                    &v16,
                    40 * *(_DWORD *)(v4 + 768),
                    (40 * (unsigned __int64)*(unsigned int *)(v4 + 768)) >> 32);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = RtlULongPtrAdd(0x3D0u, v16, &v17);
    if ( VirtualMemory >= 0 )
    {
      qmemcpy(v20, (const void *)v4, 0x3D0u);
      v4 = v18;
      v20[188] = 0;
      v20[193] = 0;
      v20[197] = 0;
      v7 = *(_DWORD *)(v18 + 752);
      v20[201] = 0;
      v20[206] = 0;
      v20[212] = 0;
      v20[242] = 0;
      if ( !v7 || (VirtualMemory = ZwDuplicateObject(-1, v7, a2, (int)&v20[188], 0, 0, 2), VirtualMemory >= 0) )
      {
        v8 = *(_DWORD *)(v4 + 772);
        if ( !v8 || (VirtualMemory = ZwDuplicateObject(-1, v8, a2, (int)&v20[193], 0, 0, 2), VirtualMemory >= 0) )
        {
          v9 = *(_DWORD *)(v4 + 788);
          if ( !v9 || (VirtualMemory = ZwDuplicateObject(-1, v9, a2, (int)&v20[197], 0, 0, 2), VirtualMemory >= 0) )
          {
            v10 = *(_DWORD *)(v4 + 804);
            if ( !v10 || (VirtualMemory = ZwDuplicateObject(-1, v10, a2, (int)&v20[201], 0, 0, 2), VirtualMemory >= 0) )
            {
              v11 = *(_DWORD *)(v4 + 824);
              if ( !v11 || (VirtualMemory = ZwDuplicateObject(-1, v11, a2, (int)&v20[206], 0, 0, 2), VirtualMemory >= 0) )
              {
                v12 = *(_DWORD *)(v4 + 848);
                if ( !v12
                  || (VirtualMemory = ZwDuplicateObject(-1, v12, a2, (int)&v20[212], 0, 0, 2), VirtualMemory >= 0) )
                {
                  v13 = *(_DWORD *)(v4 + 968);
                  if ( !v13
                    || (VirtualMemory = ZwDuplicateObject(-1, v13, a2, (int)&v20[242], 0, 0, 2), VirtualMemory >= 0) )
                  {
                    v18 = v17;
                    VirtualMemory = NtAllocateVirtualMemory(a2, (int)&v19, 0, (int)&v18, 4096, 4);
                    if ( VirtualMemory >= 0 )
                    {
                      v20[1] = v20[1] & 0xFFFFFFF8 | 1;
                      if ( *(_DWORD *)(v4 + 776) )
                        v20[194] = v19 + 976;
                      if ( *(_WORD *)(v4 + 200) )
                        v20[51] = v19 + 208;
                      VirtualMemory = NtWriteVirtualMemory(a2, v19, (int)v20, v17, 0);
                      if ( VirtualMemory >= 0 )
                      {
                        v14 = *(_DWORD *)(v4 + 776);
                        if ( !v14
                          || (VirtualMemory = NtWriteVirtualMemory(a2, v20[194], v14, v16, 0), VirtualMemory >= 0) )
                        {
                          *a3 = v19;
                          VirtualMemory = 0;
                          goto LABEL_42;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v19 )
      {
        v18 = v17;
        NtFreeVirtualMemory(-1, (int)&v19, (int)&v18, 0x8000);
      }
    }
  }
  if ( v20[212] )
    ZwDuplicateObject(a2, v20[212], 0, 0, 0, 0, 1);
  if ( v20[206] )
    ZwDuplicateObject(a2, v20[206], 0, 0, 0, 0, 1);
  if ( v20[197] )
    ZwDuplicateObject(a2, v20[197], 0, 0, 0, 0, 1);
  if ( v20[201] )
    ZwDuplicateObject(a2, v20[201], 0, 0, 0, 0, 1);
  if ( v20[193] )
    ZwDuplicateObject(a2, v20[193], 0, 0, 0, 0, 1);
  if ( v20[188] )
    ZwDuplicateObject(a2, v20[188], 0, 0, 0, 0, 1);
  if ( v20[242] )
    ZwDuplicateObject(a2, v20[242], 0, 0, 0, 0, 1);
LABEL_42:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(v4);
  return VirtualMemory;
}
