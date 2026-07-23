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

NTSTATUS __thiscall RtlpUnsuppressForwardReferencingCallTarget(void *this)
{
  char *v1; // ebx
  NTSTATUS VirtualMemory; // esi
  _DWORD *Config; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int *v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  ULONG_PTR *v10; // [esp+0h] [ebp-48h]
  char *v12; // [esp+14h] [ebp-34h]
  int v13; // [esp+18h] [ebp-30h] BYREF
  ULONG Size; // [esp+1Ch] [ebp-2Ch] BYREF
  PVOID BaseOfImage[2]; // [esp+20h] [ebp-28h] BYREF
  char v16; // [esp+28h] [ebp-20h]
  char MemoryInformation[12]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v18; // [esp+38h] [ebp-10h]
  int v19; // [esp+44h] [ebp-4h]

  v1 = 0;
  v12 = 0;
  while ( 1 )
  {
    VirtualMemory = NtQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFF,
                      v1,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x1CuLL,
                      v10);
    if ( VirtualMemory < 0 )
      return VirtualMemory;
    if ( v19 == 0x1000000 )
    {
      VirtualMemory = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v1, MemoryImageInformation, BaseOfImage, 0xCuLL, v10);
      if ( VirtualMemory >= 0 )
      {
        if ( BaseOfImage[0] )
        {
          if ( (v16 & 3) == 0 )
          {
            Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[0]);
            if ( !Config || *Config < 0x5Cu || (Config[22] & 0x4000) == 0 )
            {
              v4 = RtlImageDirectoryEntryToData(BaseOfImage[0], 1u, 1u, &Size);
              if ( v4 )
              {
                v5 = v4 + 3;
                if ( v4[3] )
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
    v6 = (int *)((char *)BaseOfImage[0] + v5[1]);
    v7 = *v6;
    if ( !*v6 )
      goto LABEL_21;
    v8 = (unsigned int)this;
    while ( v7 != v8 )
    {
LABEL_18:
      v7 = *++v6;
      if ( !*v6 )
        goto LABEL_21;
    }
    if ( RtlValidateUserCallTarget(v8, &v13) == 1 || (v13 & 0x10) == 0 )
    {
      v8 = (unsigned int)this;
      goto LABEL_18;
    }
    VirtualMemory = RtlpGuardGrantSuppressedCallAccess((int)this, 4);
    if ( VirtualMemory < 0 )
    {
LABEL_21:
      v5 += 5;
      if ( !*v5 )
      {
        v1 = v12;
        goto LABEL_23;
      }
      continue;
    }
    return VirtualMemory;
  }
}
