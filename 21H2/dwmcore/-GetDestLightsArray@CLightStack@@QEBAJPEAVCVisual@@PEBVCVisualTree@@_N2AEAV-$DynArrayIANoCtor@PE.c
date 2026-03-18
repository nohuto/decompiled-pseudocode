/*
 * XREFs of ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x180010A94
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800107F0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x180193F24 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // rcx
  unsigned int i; // ecx
  __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // edi
  unsigned int v25; // ecx
  int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = *((_DWORD *)a1 + 6);
  v12 = 0;
  v13 = a6;
  if ( !v11 )
  {
LABEL_18:
    if ( *(_DWORD *)(v13 + 24) && v7 )
      *v7 = 1;
    return 0;
  }
  v14 = *((_DWORD *)a1 + 6);
  while ( 1 )
  {
    v15 = *a1;
    v16 = 1;
    if ( *(_DWORD *)(*a1 + 16LL * v12 + 8) != 1 )
      break;
LABEL_17:
    if ( ++v12 >= v14 )
      goto LABEL_18;
  }
  v17 = 0LL;
  if ( *(_DWORD *)(v13 + 24) )
  {
    while ( *(_QWORD *)(*(_QWORD *)v13 + 8 * v17) != *(_QWORD *)(v15 + 16LL * v12) )
    {
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= *(_DWORD *)(v13 + 24) )
        goto LABEL_7;
    }
    v16 = 0;
  }
LABEL_7:
  for ( i = v12 + 1; i < v11; ++i )
  {
    if ( *(_DWORD *)(v15 + 16LL * i + 8) == 1 && *(_QWORD *)(v15 + 16LL * v12) == *(_QWORD *)(v15 + 16LL * i) )
      goto LABEL_16;
  }
  if ( !v16 )
  {
LABEL_16:
    v11 = *((_DWORD *)a1 + 6);
    v14 = v11;
    goto LABEL_17;
  }
  v19 = *(_QWORD *)(v15 + 16LL * v12);
  v28 = v19;
  if ( !a5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, 30LL) )
      goto LABEL_34;
    v19 = v28;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 256LL))(v19)
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v28 + 248LL))(v28, a3, a2) )
  {
LABEL_34:
    if ( v7 )
      *v7 = 0;
    goto LABEL_16;
  }
  v21 = *(_DWORD *)(v13 + 24);
  v22 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    v26 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v22 <= *(_DWORD *)(v13 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)v13 + 8LL * v21) = v28;
      *(_DWORD *)(v13 + 24) = v22;
      goto LABEL_16;
    }
    v26 = DynArrayImpl<0>::AddMultipleAndSet(v13, 8LL, 1LL, &v28);
    if ( v26 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v26, 0xC0u, 0LL);
  }
  v23 = v26;
  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x11Au, 0LL);
  return v23;
}
