/*
 * XREFs of ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAII@Z @ 0x180247B14
 * Callers:
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBAII@Z @ 0x1800F1A50 (-CheckPresentDurationSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBAII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::CheckPresentDurationSupport(CLegacySwapChain *this, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this - 35);
  v3 = 0;
  v9 = 0;
  v4 = a2;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, unsigned int *))(*(_QWORD *)v2 + 192LL))(
         v2,
         a2,
         &v9,
         &v10);
  if ( v5 >= 0 )
  {
    v7 = v10;
    if ( (int)abs32(v4 - v9) < (int)abs32(v4 - v10) )
      return v9;
    return v7;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x174u, 0LL);
  }
  return v3;
}
