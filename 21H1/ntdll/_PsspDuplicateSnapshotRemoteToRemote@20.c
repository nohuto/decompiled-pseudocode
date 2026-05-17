/*
 * XREFs of _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365
 * Callers:
 *     _PssNtDuplicateSnapshot@20 @ 0x4B3868E0 (_PssNtDuplicateSnapshot@20.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeRemoteSnapshot@8 @ 0x4B386950 (_PssNtFreeRemoteSnapshot@8.c)
 */

int __fastcall PsspDuplicateSnapshotRemoteToRemote(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  int VirtualMemory; // esi
  int v8; // edi
  unsigned int i; // edi
  int v11; // ecx
  int v13; // [esp+14h] [ebp-7D0h] BYREF
  unsigned int v14; // [esp+18h] [ebp-7CCh]
  int v15; // [esp+1Ch] [ebp-7C8h]
  unsigned int v16; // [esp+20h] [ebp-7C4h] BYREF
  int v17; // [esp+24h] [ebp-7C0h] BYREF
  int v18; // [esp+28h] [ebp-7BCh] BYREF
  int v19; // [esp+2Ch] [ebp-7B8h] BYREF
  unsigned int v20; // [esp+30h] [ebp-7B4h] BYREF
  unsigned int v21; // [esp+34h] [ebp-7B0h] BYREF
  _DWORD v22[244]; // [esp+38h] [ebp-7ACh] BYREF
  _DWORD v23[245]; // [esp+408h] [ebp-3DCh] BYREF

  v15 = a1;
  *a4 = 0;
  v18 = 0;
  v21 = 0;
  v19 = 0;
  memset(v23, 0, 0x3D0u);
  VirtualMemory = NtReadVirtualMemory(a1, a2, (int)v22, 976, (int)&v17);
  if ( VirtualMemory >= 0 )
  {
    if ( v17 == 976 )
    {
      if ( v22[0] == 1146311504 )
      {
        VirtualMemory = RtlULongLongToUInt((int *)&v16, 40 * v22[192], (40 * (unsigned __int64)v22[192]) >> 32);
        if ( VirtualMemory >= 0 )
        {
          VirtualMemory = RtlULongPtrAdd(0x3D0u, v16, (int *)&v21);
          if ( VirtualMemory >= 0 )
          {
            qmemcpy(v23, v22, 0x3D0u);
            v23[188] = 0;
            v23[193] = 0;
            v23[197] = 0;
            v23[201] = 0;
            v23[206] = 0;
            v23[212] = 0;
            v23[242] = 0;
            if ( !v22[188]
              || (VirtualMemory = ZwDuplicateObject(v15, v22[188], a3, (int)&v23[188], 0, 0, 2), VirtualMemory >= 0) )
            {
              if ( !v22[193]
                || (VirtualMemory = ZwDuplicateObject(v15, v22[193], a3, (int)&v23[193], 0, 0, 2), VirtualMemory >= 0) )
              {
                if ( !v22[197]
                  || (VirtualMemory = ZwDuplicateObject(v15, v22[197], a3, (int)&v23[197], 0, 0, 2), VirtualMemory >= 0) )
                {
                  if ( !v22[201]
                    || (VirtualMemory = ZwDuplicateObject(v15, v22[201], a3, (int)&v23[201], 0, 0, 2), VirtualMemory >= 0) )
                  {
                    if ( !v22[206]
                      || (VirtualMemory = ZwDuplicateObject(v15, v22[206], a3, (int)&v23[206], 0, 0, 2),
                          VirtualMemory >= 0) )
                    {
                      if ( !v22[212]
                        || (VirtualMemory = ZwDuplicateObject(v15, v22[212], a3, (int)&v23[212], 0, 0, 2),
                            VirtualMemory >= 0) )
                      {
                        if ( !v22[242]
                          || (VirtualMemory = ZwDuplicateObject(v15, v22[242], a3, (int)&v23[242], 0, 0, 2),
                              VirtualMemory >= 0) )
                        {
                          v8 = v21;
                          v20 = v21;
                          VirtualMemory = NtAllocateVirtualMemory(a3, (int)&v18, 0, (int)&v20, 4096, 4);
                          if ( VirtualMemory < 0 )
                            goto LABEL_5;
                          v23[1] = v23[1] & 0xFFFFFFF8 | 1;
                          if ( v23[194] )
                            v23[194] = v18 + 976;
                          if ( LOWORD(v23[50]) )
                            v23[51] = v18 + 208;
                          VirtualMemory = NtWriteVirtualMemory(a3, v18, (int)v23, v8, 0);
                          if ( VirtualMemory < 0 )
                            goto LABEL_5;
                          if ( v22[194] )
                          {
                            v20 = 1;
                            VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v19, 0, (int)&v20, 4096, 4);
                            if ( VirtualMemory < 0 )
                              goto LABEL_5;
                            for ( i = 0; i < v16; i += v13 )
                            {
                              v11 = v20;
                              v14 = v20;
                              if ( v20 > v16 - i )
                              {
                                v11 = v16 - i;
                                v14 = v16 - i;
                              }
                              VirtualMemory = NtReadVirtualMemory(v15, i + v22[194], v19, v11, (int)&v17);
                              if ( VirtualMemory < 0 )
                                goto LABEL_4;
                              if ( v17 != v14 )
                                goto LABEL_3;
                              VirtualMemory = NtWriteVirtualMemory(a3, i + v18 + 976, v19, v17, (int)&v13);
                              if ( VirtualMemory < 0 )
                                goto LABEL_4;
                              if ( v13 != v17 )
                                goto LABEL_3;
                            }
                            NtFreeVirtualMemory(-1, (int)&v19, (int)&v20, 0x8000);
                            v19 = 0;
                          }
                          VirtualMemory = 0;
                          *a4 = v18;
                          goto LABEL_23;
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
      else
      {
        VirtualMemory = -1073741816;
      }
    }
    else
    {
LABEL_3:
      VirtualMemory = -2147483635;
    }
  }
LABEL_4:
  v8 = v21;
LABEL_5:
  if ( v19 )
  {
    v20 = 0;
    NtFreeVirtualMemory(-1, (int)&v19, (int)&v20, 0x8000);
  }
  if ( v18 )
  {
    v20 = v8;
    NtFreeVirtualMemory(-1, (int)&v18, (int)&v20, 0x8000);
  }
  if ( v23[212] )
    ZwDuplicateObject(a3, v23[212], 0, 0, 0, 0, 1);
  if ( v23[206] )
    ZwDuplicateObject(a3, v23[206], 0, 0, 0, 0, 1);
  if ( v23[197] )
    ZwDuplicateObject(a3, v23[197], 0, 0, 0, 0, 1);
  if ( v23[201] )
    ZwDuplicateObject(a3, v23[201], 0, 0, 0, 0, 1);
  if ( v23[193] )
    ZwDuplicateObject(a3, v23[193], 0, 0, 0, 0, 1);
  if ( v23[188] )
    ZwDuplicateObject(a3, v23[188], 0, 0, 0, 0, 1);
  if ( v23[242] )
    ZwDuplicateObject(a3, v23[242], 0, 0, 0, 0, 1);
LABEL_23:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(v15, a2);
  return VirtualMemory;
}
