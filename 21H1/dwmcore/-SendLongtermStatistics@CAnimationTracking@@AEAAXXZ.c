/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18015B3E8
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800893DC (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x18003B0E8 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x18008A4D4 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18015B148 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x18015BC70 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x18015BD4C (McTemplateU0zqqqqq_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v1; // r15
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 *i; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 *j; // rcx
  unsigned __int16 *v13; // rbp
  unsigned __int64 v14; // r10
  int v15; // r9d
  unsigned int v16; // r12d
  unsigned int v17; // r11d
  unsigned int v18; // r13d
  int v19; // r8d
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  int v25; // r8d
  int v26; // ecx
  int v27; // ecx
  char v28; // al
  int v29; // r9d
  _QWORD *k; // rdx
  unsigned __int16 *v31; // [rsp+40h] [rbp-158h] BYREF
  __int64 v32; // [rsp+48h] [rbp-150h]
  unsigned __int64 v33; // [rsp+50h] [rbp-148h]
  unsigned __int16 v34[128]; // [rsp+60h] [rbp-138h] BYREF

  v1 = (_QWORD *)((char *)this + 552);
  v3 = (_QWORD *)*((_QWORD *)this + 69);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) == 0 )
      goto LABEL_11;
    v4 = (_QWORD *)*v1;
  }
  for ( i = v3 + 1; i < &v4[(unsigned __int64)*((unsigned int *)this + 137) >> 5]; ++i )
  {
    v5 = *i;
    if ( (*i & 1) == 0 )
      goto LABEL_11;
  }
  v5 = 0LL;
LABEL_11:
  while ( v5 )
  {
    v7 = v5;
    v8 = v5;
    v9 = *((_DWORD *)this + 137) >> 5;
    v31 = (unsigned __int16 *)(*(_QWORD *)(v5 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    v10 = *v1
        + 8LL
        * ((37
          * (BYTE6(v31)
           + 37
           * (BYTE5(v31)
            + 37
            * (BYTE4(v31)
             + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
          + HIBYTE(v31)) & (unsigned int)(v9 - 1));
    v11 = (unsigned __int64 *)v5;
    v5 = *(_QWORD *)v5;
    if ( (v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v11;
    if ( (v5 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v10 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v5 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_20;
      }
      v5 = 0LL;
    }
LABEL_20:
    v13 = *(unsigned __int16 **)(v8 + 16);
    v31 = 0LL;
    if ( !v13 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  (const struct _GUID *)(v8 + 32),
                  (const unsigned __int16 **)&v31) >= 0 )
      {
        LODWORD(v13) = (_DWORD)v31;
      }
      else
      {
        CAnimationTracking::GuidToString((const struct _GUID *)(v8 + 32), v34);
        v13 = v34;
      }
    }
    v14 = *(unsigned int *)(v8 + 56);
    v15 = 255;
    v16 = *(_DWORD *)(v8 + 120);
    v17 = (100 * *(_DWORD *)(v8 + 96) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 100) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 104) / (unsigned int)v14) | ((100 * *(_DWORD *)(v8 + 108) / (unsigned int)v14) << 8)) << 8)) << 8);
    LODWORD(v31) = (100 * *(_DWORD *)(v8 + 112) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 116) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 64) / (unsigned int)v14) | ((100 * *(_DWORD *)(v8 + 60) / (unsigned int)v14) << 8)) << 8)) << 8);
    v18 = *(_DWORD *)(v8 + 124);
    v19 = 255;
    if ( v16 < 0xFF )
      v15 = v16;
    v20 = 127;
    if ( v18 < 0xFF )
      v19 = *(_DWORD *)(v8 + 124);
    v33 = *(_QWORD *)(v8 + 128) / v14;
    if ( (unsigned int)v33 < 0x7F )
      v20 = v33;
    v21 = 255;
    if ( (unsigned int)(8LL * *(_QWORD *)(v8 + 136) / v14) < 0xFF )
      v21 = 8LL * *(_QWORD *)(v8 + 136) / v14;
    v32 = *(_QWORD *)(v8 + 16);
    v22 = v15 | ((v19 | ((v20 | (v21 << 8)) << 8)) << 8);
    v23 = v22 | 0x800000;
    if ( !v32 )
      v23 = v22;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    {
      McTemplateU0zqqqqq_EventWriteTransfer(v23, v22, (_DWORD)v13, v14, v17, (char)v31, v23, v33);
      LODWORD(v14) = *(_DWORD *)(v7 + 56);
      v16 = *(_DWORD *)(v8 + 120);
      v18 = *(_DWORD *)(v8 + 124);
      v32 = *(_QWORD *)(v7 + 16);
    }
    v24 = 255;
    v25 = 255;
    if ( v16 < 0xFF )
      v24 = v16;
    if ( v18 < 0xFF )
      v25 = v18;
    v26 = 255;
    if ( (unsigned int)(*(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v14) < 0xFF )
      v26 = *(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v14;
    v27 = v24 | ((v25 | (v26 << 8)) << 8);
    v28 = v27;
    if ( !v32 )
      v28 = v27;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      McTemplateU0zqqqq_EventWriteTransfer(
        v27,
        *(_QWORD *)(v8 + 144) % (unsigned __int64)(unsigned int)v14,
        (_DWORD)v13,
        v14,
        100 * *(_DWORD *)(v8 + 68) / (unsigned int)v14,
        100 * *(_DWORD *)(v8 + 84) / (unsigned int)v14,
        v28);
    v29 = *((_DWORD *)this + 137) >> 5;
    v31 = (unsigned __int16 *)(*(_QWORD *)(v8 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8LL
                       * ((37
                         * (BYTE6(v31)
                          + 37
                          * (BYTE5(v31)
                           + 37
                           * (BYTE4(v31)
                            + 37
                            * (BYTE3(v31)
                             + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                         + HIBYTE(v31)) & (unsigned int)(v29 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
    {
      if ( *k == v8 )
      {
        *k = *(_QWORD *)v8;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v8 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v8);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
