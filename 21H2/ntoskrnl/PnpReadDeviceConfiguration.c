/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140750F90
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407509E4 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS RegistryValue; // ebx
  unsigned int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  PVOID PoolWithTag; // rax
  unsigned int *v15; // r10
  unsigned int v16; // r8d
  _DWORD *i; // rax
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  P = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v8, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v11 = (unsigned int *)P;
    v12 = *((_DWORD *)P + 1);
    if ( v12 == 8 && (v13 = *((_DWORD *)P + 3)) != 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x75737050u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        *a4 = v11[3];
        memmove(*a3, (char *)v11 + v11[2], v11[3]);
        v15 = (unsigned int *)*a3;
        v16 = 0;
        for ( i = (char *)*a3 + 4; v16 < *v15; i = v19 )
        {
          if ( *i == -1 )
          {
            i[1] = 0;
            *i = 1;
          }
          v18 = i[3];
          v19 = i + 4;
          if ( v18 )
          {
            v20 = v18;
            do
            {
              v21 = 0LL;
              if ( *(_BYTE *)v19 == 5 )
                v21 = (unsigned int)v19[1];
              v19 = (_DWORD *)((char *)v19 + v21 + 20);
              --v20;
            }
            while ( v20 );
          }
          ++v16;
        }
      }
      else
      {
        RegistryValue = -1073741670;
      }
    }
    else if ( v12 != 8 )
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
