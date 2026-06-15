/*
 * XREFs of ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140015CC0
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x140015C14 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64),
        __int64 (__fastcall *a7)(__int64))
{
  int v7; // eax
  __int64 v8; // r13
  float v11; // xmm1_4
  __int64 result; // rax
  __int64 v13; // rbp
  float v14; // xmm1_4
  __int64 v15; // rsi

  v7 = *(_DWORD *)(a1 + 144);
  v8 = a4;
  *(_DWORD *)(a1 + 152) = 1065353216;
  v11 = (float)v7;
  result = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(float *)(a1 + 140) = v11 / (float)a3;
  if ( a3 )
  {
    v13 = (unsigned int)a3;
    do
    {
      v14 = *(float *)(a1 + 136);
      result = (unsigned int)(int)v14;
      *(float *)(a1 + 136) = v14 + *(float *)(a1 + 140);
      if ( (_DWORD)v8 )
      {
        v15 = v8;
        do
        {
          a6(a2);
          result = a7(a2);
          a2 += (unsigned __int64)a5 >> 3;
          --v15;
        }
        while ( v15 );
      }
      --v13;
    }
    while ( v13 );
  }
  return result;
}
