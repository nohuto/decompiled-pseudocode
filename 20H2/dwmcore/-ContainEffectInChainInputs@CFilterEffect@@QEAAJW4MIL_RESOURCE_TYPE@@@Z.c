/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18000FC0C
 * Callers:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18000FC0C (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180010160 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18000FC0C (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) )
    {
      v5 = 0;
    }
    else
    {
      v5 = -2147467259;
      if ( *(int *)(a1 + 128) > 0 )
      {
        v7 = *(int *)(a1 + 128);
        v8 = 0LL;
        do
        {
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v8);
          v10 = *(_QWORD *)(v9 + 24);
          if ( v10 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, 59LL) )
            {
              v11 = *(_QWORD *)(v9 + 24);
              if ( v11 )
              {
                v5 = CFilterEffect::ContainEffectInChainInputs(v11, a2);
                if ( v5 >= 0 )
                  break;
              }
            }
          }
          ++v8;
        }
        while ( v8 < v7 );
      }
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147467259, 0x269u, 0LL);
  }
  result = (unsigned int)v5;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}
