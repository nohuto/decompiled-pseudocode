/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180017ADC
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180070DE0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Push(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  unsigned int v8; // ecx
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  DWORD2(v10) = a3;
  *(_QWORD *)&v10 = a2;
  v5 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 <= *(_DWORD *)(a1 + 20) )
    {
      *(_OWORD *)(*(_QWORD *)a1 + 16LL * v3) = v10;
      *(_DWORD *)(a1 + 24) = v5;
      goto LABEL_4;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, 1LL, &v10);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0xC0u, 0LL);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, 0x20u, 0LL);
    return (unsigned int)v6;
  }
LABEL_4:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return (unsigned int)v6;
}
