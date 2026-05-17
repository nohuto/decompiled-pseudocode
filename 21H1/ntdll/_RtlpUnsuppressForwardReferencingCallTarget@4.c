/*
 * XREFs of _RtlpUnsuppressForwardReferencingCallTarget@4 @ 0x4B363CC9
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlValidateUserCallTarget@8 @ 0x4B363B20 (_RtlValidateUserCallTarget@8.c)
 *     _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51 (_RtlpGuardGrantSuppressedCallAccess@8.c)
 */

int __thiscall RtlpUnsuppressForwardReferencingCallTarget(void *this)
{
  int v1; // ebx
  int VirtualMemory; // esi
  _DWORD *Config; // eax
  void *v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  char *v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v12; // [esp+14h] [ebp-34h]
  int v13; // [esp+18h] [ebp-30h] BYREF
  _BYTE v14[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  char *v15; // [esp+20h] [ebp-28h] BYREF
  char v16; // [esp+28h] [ebp-20h]
  _BYTE v17[12]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v18; // [esp+38h] [ebp-10h]
  int v19; // [esp+44h] [ebp-4h]

  v1 = 0;
  v12 = 0;
  while ( 1 )
  {
    VirtualMemory = NtQueryVirtualMemory(-1, v1, 0, (int)v17, 28, 0);
    if ( VirtualMemory < 0 )
      return VirtualMemory;
    if ( v19 == 0x1000000 )
    {
      VirtualMemory = NtQueryVirtualMemory(-1, v1, 6, (int)&v15, 12, 0);
      if ( VirtualMemory >= 0 )
      {
        if ( v15 )
        {
          if ( (v16 & 3) == 0 )
          {
            Config = LdrImageDirectoryEntryToLoadConfig(v15);
            if ( !Config || *Config < 0x5Cu || (Config[22] & 0x4000) == 0 )
            {
              v5 = RtlImageDirectoryEntryToData(v4, (int)v15, 1, 1, (int)v14);
              if ( v5 )
              {
                v6 = v5 + 3;
                if ( v5[3] )
                  break;
              }
            }
          }
        }
      }
    }
LABEL_23:
    v1 += v18;
    v12 = v1;
    if ( VirtualMemory < 0 )
      return VirtualMemory;
  }
  while ( 2 )
  {
    v7 = &v15[v6[1]];
    v8 = *(_DWORD *)v7;
    if ( !*(_DWORD *)v7 )
      goto LABEL_21;
    v9 = (unsigned int)this;
    while ( v8 != v9 )
    {
LABEL_18:
      v7 += 4;
      v8 = *(_DWORD *)v7;
      if ( !*(_DWORD *)v7 )
        goto LABEL_21;
    }
    if ( RtlValidateUserCallTarget(v9, &v13) == 1 || (v13 & 0x10) == 0 )
    {
      v9 = (unsigned int)this;
      goto LABEL_18;
    }
    VirtualMemory = RtlpGuardGrantSuppressedCallAccess((int)this, 4);
    if ( VirtualMemory < 0 )
    {
LABEL_21:
      v6 += 5;
      if ( !*v6 )
      {
        v1 = v12;
        goto LABEL_23;
      }
      continue;
    }
    return VirtualMemory;
  }
}
