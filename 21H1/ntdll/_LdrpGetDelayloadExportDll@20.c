/*
 * XREFs of _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859
 * Callers:
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpHandleUnprotectedDelayLoad@24 @ 0x4B32F837 (_LdrpHandleUnprotectedDelayLoad@24.c)
 * Callees:
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitString@8 @ 0x4B2F4FA0 (_RtlInitString@8.c)
 */

int __fastcall LdrpGetDelayloadExportDll(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  const char *v6; // esi
  int v7; // edx
  int v8; // esi
  unsigned int *v10; // [esp+10h] [ebp-70h]
  STRING DestinationString; // [esp+20h] [ebp-60h] BYREF
  int v13[19]; // [esp+28h] [ebp-58h] BYREF
  char v14; // [esp+74h] [ebp-Ch]

  *a3 = 0;
  v10 = (unsigned int *)(a1[6] + *(_DWORD *)(a2 + 8));
  if ( *v10 )
    return LdrpFindLoadedDllByHandle(*v10, a3, 0);
  v6 = (const char *)(a1[6] + *(_DWORD *)(a2 + 4));
  v7 = a4;
  if ( !a4 )
    v7 = a1[38];
  LdrpInitializeDllPath(a1[10], v7 | 1, v13);
  RtlInitString(&DestinationString, v6);
  v8 = LdrpLoadForwardedDll(&DestinationString, (int)v13, (int)a1, (int)a1, 3, a3);
  if ( v8 >= 0 )
  {
    if ( (a1[13] & 0x8000) == 0 )
      *v10 = *(_DWORD *)(*a3 + 24);
    LdrpLogDelayLoadTrigger((int)a1, a2, *a3, a5);
  }
  if ( v14 )
    RtlReleasePath(v13[0]);
  return v8;
}
