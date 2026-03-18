/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EDD4
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18004F148 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetIsComplete@Timer@@QEBA_NXZ @ 0x18004F1FC (-GetIsComplete@Timer@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  int *v4; // rsi
  int v5; // eax
  int v6; // r8d
  int v7; // edi
  int v8; // r8d
  char v9; // r10
  int v10; // r11d
  int v11; // edx
  int v12; // ecx
  int v13; // r9d
  float v14; // xmm1_4
  int *v15; // r9
  int v16; // edx
  int v17; // edi
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // edx
  __int64 v23; // r14
  __int64 v24; // r15
  int Value; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  __int128 v29; // xmm1
  __int64 v30; // rdi
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // ecx
  _QWORD v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v38[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  char v41; // [rsp+9Ch] [rbp-64h]
  _BYTE v42[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  char v45; // [rsp+ECh] [rbp-14h]
  _BYTE v46[64]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  char v49; // [rsp+13Ch] [rbp+3Ch]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( *((_DWORD *)this + 28) < 2u )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = (int *)((char *)this + 80);
  v5 = *((_DWORD *)this + 23);
  v6 = *((_DWORD *)this + 20);
  if ( v5 >= v6 )
  {
    v6 = *((_DWORD *)this + 23);
    if ( v5 > *((_DWORD *)this + 21) )
      v6 = *((_DWORD *)this + 21);
  }
  if ( (*((_BYTE *)this + 140) & 8) != 0 )
    v6 = *((_DWORD *)this + 30) - v6;
  v7 = v6 - *((_DWORD *)this + 31);
  if ( Timer::GetIsComplete((KeyframeSequence *)((char *)this + 80))
    || v7 < 0
    || v7 > *((_DWORD *)this + 32)
    || (v9 & 0x20) != 0 )
  {
    v11 = v4[3];
    v12 = *v4;
    if ( v11 < *v4 )
    {
      v13 = *v4;
    }
    else
    {
      v13 = v4[3];
      if ( v11 > v4[1] )
        v13 = v4[1];
    }
    v14 = (float)v4[2];
    if ( (float)((float)v13 / v14) == 0.0 )
    {
      if ( (v9 & 8) != 0 )
      {
LABEL_44:
        v35 = *((_DWORD *)this + 30);
        v36 = v10 - 1;
        goto LABEL_42;
      }
    }
    else
    {
      if ( v11 >= v12 )
      {
        v12 = v4[3];
        if ( v11 > *((_DWORD *)this + 21) )
          v12 = *((_DWORD *)this + 21);
      }
      if ( (float)((float)v12 / v14) != 1.0 )
      {
        v15 = (int *)*((_QWORD *)this + 13);
        v16 = 0;
        *((_DWORD *)this + 29) = 0;
        *(_QWORD *)((char *)this + 124) = 0LL;
        v17 = *v15;
        v18 = v10 - 1;
        if ( v18 )
        {
          while ( 1 )
          {
            v19 = (unsigned int)(v16 + 1);
            if ( v15[6 * v19] > v17 + v8 )
              break;
            ++v16;
            if ( (unsigned int)v19 >= v18 )
              goto LABEL_24;
          }
          *((_DWORD *)this + 29) = v16;
          *((_DWORD *)this + 31) = v15[6 * v16] - v17;
          *((_DWORD *)this + 32) = v15[6 * v19] - v15[6 * v16];
        }
        goto LABEL_24;
      }
      if ( (v9 & 8) == 0 )
        goto LABEL_44;
    }
    v35 = 0;
    v36 = 0;
LABEL_42:
    *((_DWORD *)this + 29) = v36;
    *((_DWORD *)this + 31) = v35;
    *((_DWORD *)this + 32) = 0;
LABEL_24:
    *((_BYTE *)this + 140) &= ~0x20u;
  }
  memset_0(v46, 0, sizeof(v46));
  v47 = 0LL;
  v48 = 18;
  v49 = 0;
  memset_0(v42, 0, sizeof(v42));
  v43 = 0LL;
  v44 = 18;
  v45 = 0;
  memset_0(v38, 0, sizeof(v38));
  v39 = 0LL;
  v40 = 18;
  v41 = 0;
  v20 = *((_DWORD *)this + 29);
  v21 = *((_QWORD *)this + 13);
  if ( v20 >= *((_DWORD *)this + 28) - 1 )
  {
    v22 = v20 - 1;
  }
  else
  {
    v22 = *((_DWORD *)this + 29);
    ++v20;
  }
  v23 = 3LL * v20;
  v24 = 3LL * v22;
  Value = KeyframeValue::GetValue(*(KeyframeValue **)(v21 + 24LL * v22 + 8), a2, (struct CExpressionValue *)v46);
  if ( Value < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, Value, 0x1CDu, 0LL);
    goto LABEL_50;
  }
  v27 = KeyframeValue::GetValue(*(KeyframeValue **)(v21 + 8 * v23 + 8), a2, (struct CExpressionValue *)v42);
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1CEu, 0LL);
LABEL_50:
    v30 = v39;
    goto LABEL_34;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *, _BYTE *, _OWORD *))(**(_QWORD **)(v21 + 8 * v23 + 16) + 32LL))(
    *(_QWORD *)(v21 + 8 * v23 + 16),
    *(_QWORD *)(v21 + 8 * v24 + 8),
    *(unsigned int *)(*(_QWORD *)(v21 + 8 * v24 + 8) + 16LL),
    v46,
    v42,
    v38);
  if ( Timer::GetIsComplete((Timer *)v4) )
    *((_BYTE *)this + 140) &= ~2u;
  v29 = v38[1];
  v30 = v39;
  *(_OWORD *)this = v38[0];
  v31 = v38[2];
  *((_OWORD *)this + 1) = v29;
  v32 = v38[3];
  *((_OWORD *)this + 2) = v31;
  *((_OWORD *)this + 3) = v32;
  if ( *((_QWORD *)this + 8) != v30 )
  {
    v37[0] = v30;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v37);
    v37[0] = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v30;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v37);
    v30 = v39;
  }
  *((_DWORD *)this + 18) = v40;
  *((_BYTE *)this + 76) = v41;
LABEL_34:
  if ( v30 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v33 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
}
