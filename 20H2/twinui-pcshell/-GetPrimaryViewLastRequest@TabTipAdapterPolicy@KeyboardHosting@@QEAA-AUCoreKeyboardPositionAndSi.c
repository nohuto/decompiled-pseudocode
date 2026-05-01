/*
 * XREFs of ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@XZ @ 0x180367DDC
 * Callers:
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18035D790 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B3C34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // r10d
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  _BYTE v14[64]; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+10h]

  v4 = (RTL_SRWLOCK *)(a1 + 440);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 440));
  v15 = v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v5 = *(_DWORD *)(a1 + 612);
  LODWORD(v15) = v5;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v15 + i) ^ (unsigned __int64)v6);
  v8 = 2 * (v6 & *(_QWORD *)(a1 + 424));
  v9 = *(_QWORD *)(a1 + 400);
  v10 = *(__int64 **)(v9 + 16 * (v6 & *(_QWORD *)(a1 + 424)));
  v11 = *(__int64 **)(a1 + 384);
  while ( 1 )
  {
    v12 = *(__int64 **)(v9 + 8 * v8) == v11 ? *(__int64 **)(a1 + 384) : **(__int64 ***)(v9 + 8 * v8 + 8);
    if ( v10 == v12 )
      break;
    if ( *((_DWORD *)v10 + 4) == v5 )
      goto LABEL_11;
    v10 = (__int64 *)*v10;
  }
  v10 = *(__int64 **)(a1 + 384);
LABEL_11:
  if ( v10 != v11 )
  {
    *(_OWORD *)v14 = *(_OWORD *)((char *)v10 + 20);
    *(_OWORD *)&v14[16] = *(_OWORD *)((char *)v10 + 36);
    *(_OWORD *)&v14[32] = *(_OWORD *)((char *)v10 + 52);
    *(_OWORD *)&v14[48] = *(_OWORD *)((char *)v10 + 68);
    if ( (unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)v14) )
    {
      *(_OWORD *)a2 = *(_OWORD *)&v14[4];
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v14[20];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v14[36];
      *(_QWORD *)(a2 + 48) = *(_QWORD *)&v14[52];
      *(_DWORD *)(a2 + 56) = *(_DWORD *)&v14[60];
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return a2;
}
