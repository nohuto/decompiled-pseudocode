/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800CD510
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800CDB54 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?CheckAndSendTimeEventNotifications@CAnimation@@AEAAX_J@Z @ 0x1800CD654 (-CheckAndSendTimeEventNotifications@CAnimation@@AEAAX_J@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD690 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800CDD50 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x180113A80 (McTemplateU0xxxqf_EventWriteTransfer.c)
 */

void __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  bool AnimationValue; // al
  int v5; // eax
  unsigned int v6; // esi
  int v7; // edx
  unsigned int v8; // eax
  double v9; // [rsp+60h] [rbp+8h] BYREF
  float v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 608LL);
  if ( v2 >= *((_QWORD *)this + 10) && *((_DWORD *)this + 8) )
  {
    *((_BYTE *)this + 56) |= 1u;
    v3 = *((_QWORD *)this + 18);
    if ( (*((_BYTE *)this + 56) & 0x10) == 0 )
      v3 += v2 - *((_QWORD *)this + 19);
    LOBYTE(v9) = 0;
    v10 = 0.0;
    AnimationValue = CAnimationInterpolator::GetAnimationValue(
                       (CAnimation *)((char *)this + 208),
                       v3,
                       &v10,
                       (bool *)&v9);
    *((_BYTE *)this + 56) &= ~4u;
    *((_BYTE *)this + 56) |= 4 * (LOBYTE(v9) & 1);
    if ( AnimationValue )
    {
      v5 = *((_DWORD *)this + 8);
      v6 = 0;
      v9 = (double)(int)v3 / (double)(int)g_qpcFrequency.LowPart;
      if ( v5 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v6)
                                                                   + 96LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v6),
            *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v6 + 8),
            18LL,
            &v10);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xxxqf_EventWriteTransfer(
              *((_QWORD *)this + 1),
              v7,
              LODWORD(v9),
              (_DWORD)this - 64,
              *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v6),
              *(_DWORD *)(*((_QWORD *)this + 1) + 16LL * v6 + 8),
              SLOBYTE(v10));
          v8 = *((_DWORD *)this + 8);
          ++v6;
        }
        while ( v6 < v8 );
        if ( v8 )
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 424LL) + 448LL) |= 2u;
      }
    }
    CAnimation::CheckAndSendTimeEventNotifications((CAnimation *)((char *)this - 64), v3);
    if ( (*((_BYTE *)this + 56) & 0xC) == 4 )
      CAnimation::EndAnimation((CAnimation *)((char *)this - 64));
  }
}
