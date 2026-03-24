/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x18002A1A0
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18002D2E0 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18003F6D4 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const char *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v5; // si
  _BYTE *pvData; // rbx
  unsigned int v7; // edi
  _BYTE *v8; // rax
  int v9; // eax
  __int16 v10; // r14
  __int16 v11; // ax
  unsigned int v12; // ecx
  char v13; // dl
  __int16 v14; // ax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // r14d
  _BYTE *v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+58h] [rbp-18h]
  unsigned int v26; // [rsp+5Ch] [rbp-14h]
  unsigned int v27; // [rsp+60h] [rbp-10h]
  const char *pcbData; // [rsp+A0h] [rbp+30h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v30; // [rsp+BCh] [rbp+4Ch]

  pcbData = a1;
  if ( RegGetValueA(
         HKEY_LOCAL_MACHINE,
         "Software\\Microsoft\\Windows\\Dwm",
         "ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         0LL,
         (LPDWORD)&pcbData) )
  {
    return 0;
  }
  v5 = 1;
  LODWORD(pcbData) = (_DWORD)pcbData + 1;
  pvData = DefaultHeap::Alloc((unsigned int)pcbData);
  if ( !pvData
    || RegGetValueA(
         HKEY_LOCAL_MACHINE,
         "Software\\Microsoft\\Windows\\Dwm",
         "ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         pvData,
         (LPDWORD)&pcbData) )
  {
    v5 = 0;
    goto LABEL_17;
  }
  v25 = 0;
  v7 = 0;
  v26 = 0;
  v23 = pvData;
  v8 = pvData;
  v24 = 0LL;
  v27 = 0;
  if ( !*pvData )
  {
LABEL_15:
    *a3 = v7;
    DynArrayImpl<0>::DetachData(&v24, 6LL, a2);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v9 = _o_strtoul(v8, &v23, 16LL);
    v10 = v9;
    if ( (unsigned int)(v9 - 1) > 0xFFFE || *v23 != 58 )
      break;
    v11 = _o_strtoul(v23 + 1, &v23, 16LL);
    v12 = (unsigned int)v23;
    v13 = 0;
    if ( *v23 == 42 )
    {
      v11 *= 16;
      v13 = 1;
      v12 = (_DWORD)v23++ + 1;
    }
    HIWORD(v29) = v11;
    v14 = -16;
    LOWORD(v29) = v10;
    if ( !v13 )
      v14 = -1;
    v15 = v7 + 1;
    v30 = v14;
    if ( v7 + 1 < v7 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v15 <= v26 )
      {
        v16 = v24;
        v17 = v7++;
        v27 = v15;
        v18 = 3 * v17;
        *(_DWORD *)(v24 + 2 * v18) = v29;
        *(_WORD *)(v16 + 2 * v18 + 4) = v30;
        goto LABEL_14;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet(&v24, 6LL, 1LL, &v29);
      v22 = v20;
      if ( v20 >= 0 )
      {
        v7 = v27;
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC0u, 0LL);
      v7 = v27;
    }
    if ( v22 < 0 )
      break;
LABEL_14:
    v8 = v23;
    if ( !*v23 )
      goto LABEL_15;
  }
  v5 = 0;
LABEL_16:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v24);
LABEL_17:
  if ( pvData )
    operator delete(pvData);
  return v5;
}
