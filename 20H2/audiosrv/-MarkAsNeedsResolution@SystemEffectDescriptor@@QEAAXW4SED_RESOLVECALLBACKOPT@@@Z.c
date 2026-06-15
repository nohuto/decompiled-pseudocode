/*
 * XREFs of ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180122E14
 * Callers:
 *     ?MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18004D730 (-MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800232F0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

void __fastcall SystemEffectDescriptor::MarkAsNeedsResolution(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  signed int i; // edi

  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      if ( (a2 & *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                          a1 + 32,
                                          i)
                           + 16LL)) != 0 )
        *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, i) + 20LL) = 1;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
