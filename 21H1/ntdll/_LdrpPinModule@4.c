/*
 * XREFs of _LdrpPinModule@4 @ 0x4B2E7DC6
 * Callers:
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpPinNodeRecurse@4 @ 0x4B2E7E08 (_LdrpPinNodeRecurse@4.c)
 */

int __thiscall LdrpPinModule(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // ecx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = (_DWORD *)this[20];
  if ( v3[3] != -1 && (*(_BYTE *)(*v3 - 32) & 0x20) == 0 )
  {
    if ( v3[3] )
      LdrpPinNodeRecurse();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
