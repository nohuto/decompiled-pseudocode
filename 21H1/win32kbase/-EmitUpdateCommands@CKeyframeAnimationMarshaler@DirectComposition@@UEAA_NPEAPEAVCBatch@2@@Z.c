/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitExpressionsArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@@CBaseExpressionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@1@W4MILCMD@@PEAPEAVCResourceMarshaler@1@IPEAI@Z @ 0x1C0039670 (--$EmitExpressionsArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@@CBaseExpressionMar.c)
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7CA0 (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7D5C (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B7DFC (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB2D0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C00BED30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C00BEDB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C00BEE38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C01ECA94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  __int64 v5; // r8
  int v6; // eax
  DirectComposition::CKeyframeAnimationMarshaler *v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( *((_DWORD *)this + 55) < *((_DWORD *)this + 54) )
    {
      v8 = this;
      if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                                 this,
                                 a2) )
          return v4;
        *((_DWORD *)this + 4) |= 0x10000u;
      }
    }
    if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2)
      && DirectComposition::CBaseExpressionMarshaler::EmitExpressionsArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES>(
           (__int64)this,
           a2,
           v5,
           *((_QWORD *)this + 24),
           *((_DWORD *)this + 50),
           (char *)this + 204)
      && DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
    {
      v6 = *((_DWORD *)this + 4);
      v8 = this;
      if ( (v6 & 0x2000) == 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
                                 this,
                                 a2,
                                 &v8) )
          return v4;
        *((_DWORD *)this + 4) |= 0x2000u;
        v6 = *((_DWORD *)this + 4);
      }
      v8 = this;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___(
                                 this,
                                 a2,
                                 &v8) )
          return v4;
        *((_DWORD *)this + 4) |= 0x4000u;
      }
      if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
      {
        v8 = this;
        if ( (*((_DWORD *)this + 4) & 0x8000) != 0 )
          return 1;
        if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___(
                                this,
                                a2,
                                &v8) )
        {
          *((_DWORD *)this + 4) |= 0x8000u;
          return 1;
        }
      }
    }
  }
  return v4;
}
