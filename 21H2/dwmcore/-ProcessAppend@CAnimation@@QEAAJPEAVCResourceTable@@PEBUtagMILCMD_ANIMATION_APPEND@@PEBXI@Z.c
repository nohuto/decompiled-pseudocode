/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180209628
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800E65D4 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x1800E6720 (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180253818 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  __int64 *v8; // rdi
  unsigned int v9; // ebx
  struct CPayloadedAnimationPrimitiveBuffer *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 2);
  v8 = (__int64 *)this;
  if ( !is_mul_ok(v5, 0x20uLL) )
  {
    v9 = -2147024362;
    v16 = 289;
    goto LABEL_18;
  }
  this = (CAnimation *)a5;
  v9 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v9 = -2003303421;
    v16 = 293;
LABEL_18:
    v13 = v9;
    goto LABEL_19;
  }
  if ( a4 && v5 )
  {
    v10 = (struct CPayloadedAnimationPrimitiveBuffer *)v8[16];
    if ( !v10 )
    {
      v11 = CPayloadedAnimationPrimitiveBuffer::Create(&v17);
      v9 = v11;
      if ( v11 < 0 )
      {
        v16 = 302;
LABEL_15:
        v13 = v11;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v13, v16);
        goto LABEL_20;
      }
      v10 = v17;
      v8[16] = (__int64)v17;
      v5 = *((_DWORD *)a3 + 2);
    }
    v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, _QWORD, const void *))(*(_QWORD *)v10 + 48LL))(
            v10,
            v5,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v16 = 306;
    }
    else
    {
      v12 = v8[19];
      if ( v12 && !*(_QWORD *)(v12 + 96) )
        goto LABEL_20;
      v11 = CBaseAnimation::RegisterAnimateResource((CBaseAnimation *)v8);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_20;
      v16 = 312;
    }
    goto LABEL_15;
  }
LABEL_20:
  v14 = v8[16];
  if ( v14 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14) )
    ReleaseInterface<CAnimationPrimitiveBuffer>(v8 + 16);
  return v9;
}
