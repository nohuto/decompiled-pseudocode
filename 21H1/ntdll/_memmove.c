/*
 * XREFs of _memmove @ 0x4B2F8BF0
 * Callers:
 *     _TppPrepareDirectParams@24 @ 0x4B2B64B0 (_TppPrepareDirectParams@24.c)
 *     _RtlpInsertInvertedFunctionTableEntry@20 @ 0x4B2B9D68 (_RtlpInsertInvertedFunctionTableEntry@20.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 *     _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0 (_RtlMultiAppendUnicodeStringBuffer@12.c)
 *     _RtlpRemoveInvertedFunctionTableEntry@8 @ 0x4B2E6870 (_RtlpRemoveInvertedFunctionTableEntry@8.c)
 *     _RtlIpv6StringToAddressW@12 @ 0x4B2E8020 (_RtlIpv6StringToAddressW@12.c)
 *     _RtlIpv6StringToAddressA@12 @ 0x4B2EC2C0 (_RtlIpv6StringToAddressA@12.c)
 *     _memmove_s @ 0x4B2FFF00 (_memmove_s.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 *     _RtlQuerySecurityObject@20 @ 0x4B336460 (_RtlQuerySecurityObject@20.c)
 *     _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00 (_RtlQueryProcessBackTraceInformation@4.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 *     _RtlAddAttributeActionToRXact@32 @ 0x4B3455D0 (_RtlAddAttributeActionToRXact@32.c)
 *     _RtlSelfRelativeToAbsoluteSD@44 @ 0x4B345BB0 (_RtlSelfRelativeToAbsoluteSD@44.c)
 *     _RtlAppendAsciizToString@8 @ 0x4B34E070 (_RtlAppendAsciizToString@8.c)
 *     _RtlAppendStringToString@8 @ 0x4B34E0D0 (_RtlAppendStringToString@8.c)
 *     _RtlCopyBitMap@12 @ 0x4B34E350 (_RtlCopyBitMap@12.c)
 *     _RtlpCopyBitMapTailToHead@16 @ 0x4B34FA2A (_RtlpCopyBitMapTailToHead@16.c)
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 *     _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6 (_RtlpTraceDatabaseInternalAdd@16.c)
 *     _RtlpHpExtrasMove@20 @ 0x4B378400 (_RtlpHpExtrasMove@20.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  unsigned int v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  unsigned int v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
  if ( a1 > Src && a1 < (char *)Src + (unsigned int)Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = (unsigned int)Size >> 2;
      if ( (unsigned int)Size >> 2 >= 8 )
      {
        while ( v9 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0uLL:
            goto LABEL_32;
          case 1uLL:
            goto LABEL_33;
          case 2uLL:
            goto LABEL_34;
          case 3uLL:
            goto LABEL_35;
        }
      }
      switch ( Size & 3 )
      {
        case 0uLL:
          goto LABEL_32;
        case 1uLL:
          goto LABEL_33;
        case 2uLL:
          goto LABEL_34;
        case 3uLL:
          goto LABEL_35;
      }
    }
    switch ( (int)Size )
    {
      case 0:
LABEL_32:
        result = a1;
        break;
      case 1:
LABEL_33:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2:
LABEL_34:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3:
LABEL_35:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:(loc_4B2F8DD8+4)[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( (unsigned int)Size >= 4 )
        __asm { jmp     dword ptr ds:(loc_4B2F8C4C+4)[eax*4] }
      __asm { jmp     dword ptr ds:loc_4B2F8D4C[ecx*4]; jumptable 4B2F8C25 case 0 }
    }
    v5 = (unsigned int)Size >> 2;
    switch ( v5 )
    {
      case 0u:
        goto LABEL_17;
      case 1u:
        goto LABEL_16;
      case 2u:
        goto LABEL_15;
      case 3u:
        goto LABEL_14;
      case 4u:
        goto LABEL_13;
      case 5u:
        goto LABEL_12;
      case 6u:
        goto LABEL_11;
      case 7u:
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
LABEL_11:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
LABEL_12:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
LABEL_13:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
LABEL_14:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
LABEL_15:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
LABEL_16:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
LABEL_17:
        switch ( Size & 3 )
        {
          case 0uLL:
            goto LABEL_18;
          case 1uLL:
            goto LABEL_19;
          case 2uLL:
            goto LABEL_20;
          case 3uLL:
            goto LABEL_21;
        }
      default:
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
        switch ( Size & 3 )
        {
          case 0uLL:
LABEL_18:
            result = a1;
            break;
          case 1uLL:
LABEL_19:
            *v4 = *v3;
            result = a1;
            break;
          case 2uLL:
LABEL_20:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3uLL:
LABEL_21:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}
