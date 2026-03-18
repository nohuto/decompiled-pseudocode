/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800BFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD68C (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021D320 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rcx
  bool AnimationValue; // di
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  v6 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v6 || (v12 = *((_QWORD *)this + 4), *(_QWORD *)(v6 + 136) > v12) )
  {
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 28);
    *a3 = *((float *)this + 34);
    *a4 = *((_QWORD *)this + 15);
    if ( (*((_BYTE *)this + 8) & 0x40) == 0 )
    {
      if ( *((_DWORD *)this + 49) )
      {
        v14 = *((unsigned int *)this + 48);
        if ( (_DWORD)v14 )
        {
          v16[0] = *((unsigned int *)this + 49);
          v15 = *((_QWORD *)this - 11);
          v16[1] = v14;
          CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v15 + 1080) + 48LL), v16, 2LL, 1LL, 1, &unk_1802885DB);
          *((_BYTE *)this + 8) |= 0x40u;
        }
      }
    }
    return AnimationValue;
  }
  v13 = *((_QWORD *)this + 18);
  if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
    v13 += v12 - *((_QWORD *)this + 19);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v6 + 264),
                     v13,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    ReleaseInterface<CResource>(v4);
    goto LABEL_2;
  }
  return AnimationValue;
}
