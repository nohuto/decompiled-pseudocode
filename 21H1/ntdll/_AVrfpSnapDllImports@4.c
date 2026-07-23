/*
 * XREFs of _AVrfpSnapDllImports@4 @ 0x4B33959D
 * Callers:
 *     _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D (_AVrfpDllLoadNotificationInternal@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 */

int __thiscall AVrfpSnapDllImports(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  unsigned int v4; // edi
  bool i; // zf
  int *v6; // eax
  int *v7; // ecx
  int v8; // edx
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // ecx
  int v15; // eax
  size_t v16; // [esp-4h] [ebp-ACh]
  PVOID v17[15]; // [esp+10h] [ebp-98h] BYREF
  PVOID BaseAddress; // [esp+4Ch] [ebp-5Ch] BYREF
  ULONG_PTR RegionSize[2]; // [esp+50h] [ebp-58h] BYREF
  ULONG NewProtect; // [esp+60h] [ebp-48h]
  ULONG OldProtect; // [esp+84h] [ebp-24h] BYREF
  char v22[4]; // [esp+88h] [ebp-20h] BYREF
  int *v23; // [esp+8Ch] [ebp-1Ch]
  _DWORD *v24; // [esp+90h] [ebp-18h]
  _DWORD *v25; // [esp+94h] [ebp-14h]
  int *v26; // [esp+98h] [ebp-10h]
  unsigned int v27; // [esp+9Ch] [ebp-Ch]
  int v28; // [esp+A0h] [ebp-8h]
  _DWORD *v29; // [esp+A4h] [ebp-4h]

  v25 = this;
  if ( !AVrfpEnabled )
    return -1073741790;
  LODWORD(v16) = 108;
  memset(v17, 0, v16);
  v17[8] = this;
  result = LdrpPrepareImportAddressTableForSnap(v17);
  if ( result >= 0 )
  {
    v3 = BaseAddress;
    if ( BaseAddress )
    {
      v4 = LODWORD(RegionSize[0]) >> 2;
      for ( i = LODWORD(RegionSize[0]) >> 2 == 0; ; i = v4 == 0 )
      {
        v27 = v4;
        if ( i )
          break;
        if ( *v3 )
        {
          v6 = (int *)AVrfpVerifierProvidersList;
          if ( (int *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
          {
            do
            {
              v7 = v6;
              v8 = 0;
              v6 = (int *)*v6;
              v26 = v7;
              v23 = v6;
              v9 = (_DWORD *)v7[5];
              v24 = v9;
              v28 = 0;
              if ( *v9 )
              {
                v10 = v9;
                do
                {
                  v11 = (_DWORD *)v10[3];
                  v12 = 0;
                  v29 = v11;
                  if ( *v11 )
                  {
                    v13 = v11;
                    v14 = v11;
                    do
                    {
                      if ( *v3 == v13[1] )
                      {
                        RtlGuardGrantSuppressedCallAccess(v22);
                        v15 = v13[2];
                        if ( v15 )
                        {
                          *v3 = v15;
                        }
                        else
                        {
                          DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v13);
                          __debugbreak();
                        }
                        if ( (AVrfpDebug & 1) != 0 )
                          DbgPrint("AVRF: Snapped (%ws: %s) with (%ws: %p). \n", v25[12], *v13, v26[3], v13[2]);
                        v14 = v29;
                      }
                      ++v12;
                      v13 = &v14[3 * v12];
                    }
                    while ( *v13 );
                    v9 = v24;
                    v8 = v28;
                  }
                  v28 = ++v8;
                  v10 = &v9[4 * v8];
                }
                while ( *v10 );
                v6 = v23;
              }
            }
            while ( v6 != &AVrfpVerifierProvidersList );
            v4 = v27;
          }
        }
        ++v3;
        --v4;
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, RegionSize, NewProtect, &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
