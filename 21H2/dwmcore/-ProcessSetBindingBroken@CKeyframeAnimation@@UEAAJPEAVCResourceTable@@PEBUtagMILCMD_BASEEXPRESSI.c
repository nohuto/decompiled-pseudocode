/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800ACF70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180062734 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18006499C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A9A4C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800ACCE4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800E2CF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v4; // al
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  CExpressionValue *v13; // rax
  const struct CExpressionValue *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+38h] [rbp-39h] BYREF
  int v19; // [rsp+48h] [rbp-29h]
  __int128 v20; // [rsp+50h] [rbp-21h] BYREF
  int v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+64h] [rbp-Dh]
  unsigned int v23; // [rsp+68h] [rbp-9h]
  _BYTE v24[80]; // [rsp+78h] [rbp+7h] BYREF

  *((_BYTE *)this + 548) &= ~1u;
  v4 = *((_BYTE *)this + 208);
  if ( (v4 & 2) == 0 )
    goto LABEL_12;
  v6 = CBaseExpression::NotifyAnimationDisconnected(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x204u, 0LL);
    return v8;
  }
  if ( *((_BYTE *)a3 + 8) && *((_DWORD *)this + 132) == 1 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v18[1] = v9;
    v18[0] = &CExpressionValueStack::`vftable';
    v20 = 0LL;
    v10 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v18);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x20Cu, 0LL);
    }
    else
    {
      v12 = (unsigned int)(v19 - 1);
      if ( (unsigned int)v12 < v23 )
      {
        v14 = (const struct CExpressionValue *)(v20 + 80 * v12);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
        v14 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
      }
      v15 = CBaseExpression::SetOutputValue(this, v14);
      v8 = v15;
      if ( v15 >= 0 )
      {
        --v19;
        v18[0] = &CExpressionValueStack::`vftable';
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v20);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x20Fu, 0LL);
    }
    v18[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v20);
    return v8;
  }
LABEL_11:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  v4 = *((_BYTE *)this + 208);
LABEL_12:
  *((_BYTE *)this + 208) = v4 | 0x10;
  return 0;
}
