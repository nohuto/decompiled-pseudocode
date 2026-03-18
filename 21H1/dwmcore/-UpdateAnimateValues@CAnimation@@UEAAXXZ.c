/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800AB920
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800ABF04 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800AC14C (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x1801BA79C (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x180221A48 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180221E84 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

void __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r13
  char AdjustedHandoffValue; // r15
  _QWORD *v5; // r14
  unsigned int (__fastcall ***v6)(_QWORD); // rcx
  float v7; // xmm7_4
  char v8; // r12
  __int64 v9; // rbp
  unsigned int (__fastcall **v10)(_QWORD); // rax
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD); // rcx
  unsigned int v13; // edi
  unsigned int v14; // edi
  __int64 v15; // rax
  unsigned int i; // edi
  unsigned int v17; // eax
  __int64 v18; // rdi
  int v19; // ecx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rbp
  double v26; // xmm6_8
  __int64 v27; // rax
  double v28; // xmm0_8
  double v29; // xmm6_8
  float v30; // xmm6_4
  unsigned int v31; // edi
  int v32; // edx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  unsigned int j; // eax
  __int64 v38; // r8
  int v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+38h] [rbp-A0h]
  int v41; // [rsp+40h] [rbp-98h] BYREF
  __int64 v42; // [rsp+48h] [rbp-90h]
  __int64 v43; // [rsp+50h] [rbp-88h]
  __int64 v44; // [rsp+58h] [rbp-80h]
  _QWORD v45[2]; // [rsp+60h] [rbp-78h] BYREF
  char v46; // [rsp+E0h] [rbp+8h]
  double v47; // [rsp+E0h] [rbp+8h]
  float v48; // [rsp+E8h] [rbp+10h]
  float v49; // [rsp+F0h] [rbp+18h] BYREF
  int v50; // [rsp+F8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this - 5) + 456LL);
  if ( v2 >= *((_QWORD *)this + 10) && *((_DWORD *)this + 8) )
  {
    *((_BYTE *)this + 56) |= 1u;
    v3 = *((_QWORD *)this + 18);
    if ( (*((_BYTE *)this + 56) & 0x10) == 0 )
      v3 += v2 - *((_QWORD *)this + 19);
    AdjustedHandoffValue = 0;
    v49 = 0.0;
    v41 = 0;
    v5 = (_QWORD *)((char *)this + 208);
    v6 = (unsigned int (__fastcall ***)(_QWORD))*((_QWORD *)this + 26);
    v7 = 0.0;
    v45[0] = 0LL;
    v8 = 0;
    v50 = 0;
    v9 = v3;
    v48 = 0.0;
    v10 = *v6;
    v42 = v3;
    if ( (*v10)(v6) )
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, 0LL);
    else
      v11 = 0LL;
    v12 = (__int64 (__fastcall ***)(_QWORD))*v5;
    v43 = v11;
    v13 = (**v12)(v12) - 1;
    if ( v13 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5) )
      v44 = 0LL;
    else
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v13);
    v46 = 0;
    if ( v11 )
    {
      v14 = *((_DWORD *)this + 54);
      if ( v14 != -1 )
      {
        v15 = v14 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
            ? 0LL
            : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v14);
        if ( *(_QWORD *)(v15 + 8) > v3 )
          *((_DWORD *)this + 54) = -1;
      }
      for ( i = *((_DWORD *)this + 54); ; *((_DWORD *)this + 54) = i )
      {
        if ( ++i < (unsigned __int64)(**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5) )
        {
          v34 = i >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
              ? 0LL
              : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, i);
          if ( *(_QWORD *)(v34 + 8) <= v3 )
            continue;
        }
        break;
      }
      v17 = *((_DWORD *)this + 54);
      if ( v17 != -1 )
      {
        AdjustedHandoffValue = 1;
        v18 = v11 + 32LL * v17;
        v19 = *(_DWORD *)v18;
        if ( *(_DWORD *)v18 == 4 || v19 == 6 && v18 == v44 )
          v46 = 1;
        while ( ((v19 - 3) & 0xFFFFFFFC) == 0 && v19 != 4 )
        {
          if ( v11 == v18 )
            goto LABEL_81;
          v20 = 0LL;
          v21 = 0LL;
          v22 = (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
              ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, 0LL)
              : 0LL;
          switch ( *(_DWORD *)v18 )
          {
            case 3:
              v23 = *(_QWORD *)(v18 + 16);
              v24 = *(_QWORD *)(v18 + 8);
              if ( v23 )
              {
                v25 = v42 - v24;
                if ( v23 == 43046875 )
                  v20 = v25 % 0x290D7DB;
                else
                  v20 = v25 % v23;
              }
              v21 = v24 + v20 - v23;
              if ( v21 < *(_QWORD *)(v22 + 8) )
                v21 = *(_QWORD *)(v18 + 8);
              break;
            case 5:
              v35 = *(_QWORD *)(v18 + 8);
              v36 = v35 - *(_QWORD *)(v22 + 8);
              if ( v42 - v35 <= v36 )
                v36 = v42 - v35;
              v21 = v35 - v36;
              break;
            case 6:
              v21 = *(_QWORD *)(v18 + 8);
              break;
          }
          v9 = v21;
          v42 = v21;
          if ( *(_QWORD *)(v18 + 8) < v21 )
          {
LABEL_81:
            AdjustedHandoffValue = 0;
            goto LABEL_48;
          }
          v18 -= 32LL;
          if ( *(_QWORD *)(v18 + 8) > v21 )
          {
            while ( v18 != v43 )
            {
              v18 -= 32LL;
              if ( *(_QWORD *)(v18 + 8) <= v21 )
                goto LABEL_35;
            }
            goto LABEL_84;
          }
LABEL_35:
          v19 = *(_DWORD *)v18;
          v11 = v43;
        }
        switch ( v19 )
        {
          case 1:
            v26 = (double)((int)v9 - *(_DWORD *)(v18 + 8));
            v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
            if ( v27 < 0 )
              v28 = (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1))
                  + (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1));
            else
              v28 = (double)(int)v27;
            v29 = v26 / v28;
            v30 = *(float *)(v18 + 16) * (v29 * v29) * v29
                + *(float *)(v18 + 20) * (v29 * v29)
                + *(float *)(v18 + 24) * v29
                + *(float *)(v18 + 28);
            break;
          case 4:
            v30 = *(float *)(v18 + 16);
            break;
          case 2:
            v30 = CAnimationInterpolator::InterpolateSinusoidal(
                    (CAnimation *)((char *)this + 208),
                    (const struct DwmAnimationPrimitive *)v18,
                    v9);
            break;
          default:
LABEL_84:
            AdjustedHandoffValue = 0;
            goto LABEL_42;
        }
        if ( _finite(v30) )
        {
          v8 = v46;
          v7 = v30;
          v48 = v30;
        }
        else
        {
          AdjustedHandoffValue = 0;
        }
      }
    }
LABEL_42:
    if ( AdjustedHandoffValue )
    {
      AdjustedHandoffValue = (*(__int64 (__fastcall **)(_QWORD, int *, int *, _QWORD *))(*(_QWORD *)*v5 + 16LL))(
                               *v5,
                               &v50,
                               &v41,
                               v45);
      if ( AdjustedHandoffValue )
      {
        if ( v50 )
        {
          HIWORD(v39) = HIWORD(v41);
          v7 = v48;
          AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue((char *)this + 208, v3);
        }
        if ( AdjustedHandoffValue )
          v49 = v7;
      }
    }
LABEL_48:
    *((_BYTE *)this + 56) &= ~4u;
    *((_BYTE *)this + 56) |= 4 * (v8 & 1);
    if ( AdjustedHandoffValue )
    {
      v31 = 0;
      v47 = (double)(int)v3 / (double)(int)g_qpcFrequency.LowPart;
      if ( *((_DWORD *)this + 8) )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v31)
                                                                   + 96LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v31),
            *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v31 + 8),
            18LL,
            &v49);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxxqf_EventWriteTransfer(
              *((_QWORD *)this + 1),
              v32,
              LODWORD(v47),
              (_DWORD)this - 56,
              *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v31),
              *(_DWORD *)(*((_QWORD *)this + 1) + 16LL * v31 + 8),
              SLOBYTE(v49));
          v33 = *((_DWORD *)this + 8);
          ++v31;
        }
        while ( v31 < v33 );
        if ( v33 )
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 5) + 272LL) + 416LL) |= 2u;
      }
    }
    if ( *((_DWORD *)this + 61) )
    {
      if ( *((_DWORD *)this + 60) )
      {
        for ( j = *((_DWORD *)this + 32); j < *((_DWORD *)this + 30); *((_DWORD *)this + 32) = j )
        {
          v38 = *((_QWORD *)this + 12);
          if ( *(_QWORD *)(v38 + 16LL * j) > v3 )
            break;
          v45[0] = *((unsigned int *)this + 61);
          v45[1] = *((unsigned int *)this + 60);
          LODWORD(v40) = *(_DWORD *)(v38 + 16LL * j + 12);
          LOWORD(v39) = 0;
          CoreUICallSend(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 5) + 1080LL) + 48LL),
            v45,
            2LL,
            1LL,
            v39,
            &unk_1802CFAC7,
            *(_DWORD *)(v38 + 16LL * j + 8),
            v40);
          j = *((_DWORD *)this + 32) + 1;
        }
      }
    }
    if ( (*((_BYTE *)this + 56) & 0xC) == 4 )
      CAnimation::EndAnimation((CAnimation *)((char *)this - 56));
  }
}
