/*
 * XREFs of _LdrpGetNtPathFromDosPath@8 @ 0x4B2D204F
 * Callers:
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall LdrpGetNtPathFromDosPath(int *a1, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD v5[6]; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v6[2]; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD *v7; // [esp+2Ch] [ebp-34h] BYREF
  _BYTE v8[44]; // [esp+30h] [ebp-30h] BYREF

  result = RtlpDosPathNameToRelativeNtPathName(1, a1, (unsigned __int16 *)a2, (unsigned __int16 *)v6, &v7, 0, 0);
  if ( result >= 0 )
  {
    if ( v7 == v6 )
    {
      if ( a2 + 8 != *(_DWORD *)(a2 + 4) )
        RtlDeleteBoundaryDescriptor(*(_DWORD *)(a2 + 4));
      *(_WORD *)(a2 + 8) = 0;
      *(_DWORD *)a2 = v6[0];
      *(_DWORD *)(a2 + 4) = v6[1];
    }
    v5[0] = 24;
    v5[1] = 0;
    v4 = 64;
    if ( !LdrpUseImpersonatedDeviceMap )
      v4 = 2112;
    v5[3] = v4;
    v5[2] = a2;
    v5[4] = 0;
    v5[5] = 0;
    return ZwQueryAttributesFile(v5, v8);
  }
  return result;
}
