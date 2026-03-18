/*
 * XREFs of ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x1802272E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x180227AD0 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetCommonParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *a3)
{
  float v3; // xmm0_4
  int v4; // eax
  __m128 v5; // xmm2
  __m128 v6; // rt1
  float v8; // [rsp+38h] [rbp+10h]

  *((_DWORD *)this + 102) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 103) = *((_DWORD *)a3 + 3);
  v3 = *((float *)a3 + 2) * 1000.0;
  if ( COERCE_UNSIGNED_INT(fabs(v3)) > 0x497FFFF0 )
  {
    v5 = 0LL;
    v5.m128_f32[0] = (float)(int)v3 - v3;
    v6.m128_f32[0] = FLOAT_N0_5;
    v4 = (int)v3 - _mm_cmple_ss(v5, v6).m128_u32[0];
  }
  else
  {
    v8 = v3 + 6291456.25;
    v4 = (int)(LODWORD(v8) << 10) >> 11;
  }
  *((_DWORD *)this + 104) = v4;
  if ( !*((_BYTE *)a3 + 32) )
    CNaturalAnimation::SetStartTimeIfNecessary(this, *((_QWORD *)a3 + 3));
  return 0LL;
}
