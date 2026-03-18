/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00789D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078B10 (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078BCC (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078C6C (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0079F90 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C007D270 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C007D2F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C007D378 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     ??$EmitExpressionsArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@@CBaseExpressionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@1@W4MILCMD@@PEAPEAVCResourceMarshaler@1@IPEAI@Z @ 0x1C00A7A70 (--$EmitExpressionsArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@@CBaseExpressionMar.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C01E51E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  __int64 v5; // r8
  int v6; // eax
  DirectComposition::CKeyframeAnimationMarshaler **v8; // [rsp+20h] [rbp-28h]
  DirectComposition::CKeyframeAnimationMarshaler *v9; // [rsp+30h] [rbp-18h]
  struct DirectComposition::CBatch **v10; // [rsp+38h] [rbp-10h]
  DirectComposition::CKeyframeAnimationMarshaler *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( *((_DWORD *)this + 55) < *((_DWORD *)this + 54) )
    {
      v9 = this;
      v10 = a2;
      v11 = this;
      if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
      {
        v8 = &v11;
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                                 this,
                                 a2) )
          return v4;
        *((_DWORD *)this + 4) |= 0x10000u;
      }
    }
    if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2) )
    {
      LODWORD(v8) = *((_DWORD *)this + 50);
      if ( (unsigned __int8)DirectComposition::CBaseExpressionMarshaler::EmitExpressionsArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES>(
                              this,
                              a2,
                              v5,
                              *((_QWORD *)this + 24),
                              v8,
                              (char *)this + 204,
                              v9,
                              v10) )
      {
        if ( DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
        {
          v6 = *((_DWORD *)this + 4);
          v11 = this;
          if ( (v6 & 0x2000) == 0 )
          {
            if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
                                     this,
                                     a2,
                                     &v11) )
              return v4;
            *((_DWORD *)this + 4) |= 0x2000u;
            v6 = *((_DWORD *)this + 4);
          }
          v11 = this;
          if ( (v6 & 0x4000) == 0 )
          {
            if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___(
                                     this,
                                     a2,
                                     &v11) )
              return v4;
            *((_DWORD *)this + 4) |= 0x4000u;
          }
          if ( DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
          {
            v11 = this;
            if ( (*((_DWORD *)this + 4) & 0x8000) != 0 )
              return 1;
            if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___(
                                    this,
                                    a2,
                                    &v11) )
            {
              *((_DWORD *)this + 4) |= 0x8000u;
              return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
