/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003F4AC
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003F398 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18008060C (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return v2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
    v11 = v6;
    if ( !*(_BYTE *)(v6 + 221) )
      goto LABEL_8;
    v7 = *(_DWORD *)(a2 + 24);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
      break;
    if ( v8 <= *(_DWORD *)(a2 + 20) )
    {
      v2 = 0;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 24)) = v6;
      *(_DWORD *)(a2 + 24) = v8;
    }
    else
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v11);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
      if ( (v2 & 0x80000000) != 0 )
        goto LABEL_12;
    }
LABEL_8:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      return v2;
  }
  v2 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x137u);
  return v2;
}
