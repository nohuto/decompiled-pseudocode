/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C01D3DA0
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C01D3C30 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     IsMiniportDriverCCDSupport @ 0x1C01D3E20 (IsMiniportDriverCCDSupport.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx

  v3 = 0;
  switch ( a1 )
  {
    case 1:
      goto LABEL_8;
    case 2:
      *a3 = 2;
      return v3;
    case 3:
      *a3 = 3;
      return v3;
    case 4:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 4;
        return v3;
      }
LABEL_8:
      DxgkGetAdapterDefaultScaling(a2, a3);
      return v3;
    case 5:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 5;
        return v3;
      }
      goto LABEL_8;
    case 128:
      *a3 = 253;
      break;
    default:
      v7 = a1;
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unknown DISPLAYCONFIG_SCALING 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741811;
  }
  return v3;
}
