/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x180025650
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x180022A10 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18001730C (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const unsigned __int16 *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v5; // di
  _BYTE *pvData; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // esi
  _BYTE *v9; // rax
  int v10; // eax
  __int16 v11; // r15
  __int16 v13; // ax
  unsigned int v14; // ecx
  char v15; // dl
  __int16 v16; // ax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ecx
  _BYTE *v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  unsigned int v26; // [rsp+60h] [rbp-10h]
  const unsigned __int16 *pcbData; // [rsp+B0h] [rbp+40h] BYREF
  int v28; // [rsp+C8h] [rbp+58h] BYREF
  __int16 v29; // [rsp+CCh] [rbp+5Ch]

  pcbData = a1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\Dwm",
          L"ShaderLinkingGPUBlacklist",
          2u,
          0LL,
          0LL,
          (LPDWORD)&pcbData) )
  {
    v5 = 1;
    LODWORD(pcbData) = (_DWORD)pcbData + 1;
    pvData = DefaultHeap::Alloc((unsigned int)pcbData);
    if ( !pvData
      || RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\Dwm",
           L"ShaderLinkingGPUBlacklist",
           2u,
           0LL,
           pvData,
           (LPDWORD)&pcbData) )
    {
      v5 = 0;
      if ( !pvData )
        return v5;
    }
    else
    {
      v23 = pvData;
      v7 = 0;
      v25 = 0LL;
      v8 = 0;
      v26 = 0;
      v9 = pvData;
      v24 = 0LL;
      if ( *pvData )
      {
        while ( 1 )
        {
          v10 = _o_strtoul(v9, &v23, 16LL);
          v11 = v10;
          if ( (unsigned int)(v10 - 1) > 0xFFFE || *v23 != 58 )
            break;
          v13 = _o_strtoul(v23 + 1, &v23, 16LL);
          v14 = (unsigned int)v23;
          v15 = 0;
          if ( *v23 == 42 )
          {
            v13 *= 16;
            v15 = 1;
            v14 = (_DWORD)v23++ + 1;
          }
          HIWORD(v28) = v13;
          v16 = -16;
          LOWORD(v28) = v11;
          if ( !v15 )
            v16 = -1;
          v17 = v8 + 1;
          v29 = v16;
          if ( v8 + 1 < v8 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0xB5u, 0LL);
            break;
          }
          if ( v17 > v7 )
          {
            v21 = DynArrayImpl<0>::AddMultipleAndSet(&v24, 6LL, 1LL, &v28);
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC0u, 0LL);
              break;
            }
            v8 = v26;
            v7 = HIDWORD(v25);
          }
          else
          {
            v18 = v24;
            v19 = v8++;
            v26 = v17;
            v20 = 3 * v19;
            *(_DWORD *)(v24 + 2 * v20) = v28;
            *(_WORD *)(v18 + 2 * v20 + 4) = v29;
          }
          v9 = v23;
          if ( !*v23 )
            goto LABEL_24;
        }
        v5 = 0;
      }
      else
      {
LABEL_24:
        *a3 = v8;
        DynArrayImpl<0>::DetachData((__int64)&v24, 6u, a2);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>(&v24);
    }
    DefaultHeap::Free(pvData);
    return v5;
  }
  return 0;
}
