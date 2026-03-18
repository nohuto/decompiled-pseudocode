/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180023E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180024770 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800278A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18006DB44 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18006FCFC (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801D9BE8 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v4; // al
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]

  *((_BYTE *)this + 540) &= ~1u;
  v4 = *((_BYTE *)this + 208);
  if ( (v4 & 2) == 0 )
    goto LABEL_5;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x204u, 0LL);
    return v8;
  }
  if ( *((_BYTE *)a3 + 8) && *((_DWORD *)this + 130) == 1 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
    v16 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v15[1] = v10;
    v15[0] = &CExpressionValueStack::`vftable';
    v17 = 0LL;
    v11 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v15);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x20Cu, 0LL);
    }
    else
    {
      v13 = CBaseExpression::SetOutputValue(
              this,
              (const struct CExpressionValue *)(v17 + 80LL * (unsigned int)(v16 - 1)));
      v8 = v13;
      if ( v13 >= 0 )
      {
        --v16;
        v15[0] = &CExpressionValueStack::`vftable';
        DynArrayImpl<1>::~DynArrayImpl<1>(&v17);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x20Fu, 0LL);
    }
    v15[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(&v17);
    return v8;
  }
LABEL_4:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v4 = *((_BYTE *)this + 208);
LABEL_5:
  *((_BYTE *)this + 208) = v4 | 0x10;
  return 0;
}
