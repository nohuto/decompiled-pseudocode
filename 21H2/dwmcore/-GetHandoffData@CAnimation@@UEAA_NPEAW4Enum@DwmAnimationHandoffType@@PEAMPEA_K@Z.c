/*
 * XREFs of ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800D7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD690 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ @ 0x1800D7B4C (-CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCAnimation@@@@YAXAEAPEAVCAnimation@@@Z @ 0x1802094FC (--$ReleaseInterface@VCAnimation@@@@YAXAEAPEAVCAnimation@@@Z.c)
 */

bool __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  char *v4; // rsi
  __int64 v6; // rcx
  bool AnimationValue; // di
  unsigned __int64 v12; // rax
  __int64 v13; // rdx

  v4 = (char *)this + 128;
  v6 = *((_QWORD *)this + 16);
  AnimationValue = 1;
  if ( !v6 )
    goto LABEL_2;
  v12 = *((_QWORD *)this + 4);
  if ( *(_QWORD *)(v6 + 144) > v12 )
    goto LABEL_2;
  v13 = *((_QWORD *)this + 18);
  if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
    v13 += v12 - *((_QWORD *)this + 19);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v6 + 272),
                     v13,
                     (float *)this + 34,
                     0LL);
  if ( AnimationValue )
  {
    ReleaseInterface<CAnimation>(v4);
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 28);
    *a3 = *((float *)this + 34);
    *a4 = *((_QWORD *)this + 15);
    CAnimation::CheckAndSendHandoffPrevValueNotification((CAnimation *)((char *)this - 112));
  }
  return AnimationValue;
}
