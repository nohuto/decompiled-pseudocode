/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x1801CAF80
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180074CF4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180076E08 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180076F24 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801CACFC (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x1801CB8E4 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x1801CB9C0 (McTemplateU0zqqqqq_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *k; // rcx
  unsigned __int64 v6; // r13
  int v7; // r8d
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rcx
  unsigned __int64 *i; // rdx
  unsigned __int16 *v11; // rbp
  unsigned __int64 v12; // r10
  int v13; // ecx
  int v14; // r9d
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  char v18; // r14
  int v19; // r9d
  int v20; // r8d
  int v21; // ecx
  int v22; // ecx
  char v23; // al
  int v24; // r9d
  _QWORD *j; // rdx
  unsigned __int16 *v26; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int16 v27[128]; // [rsp+50h] [rbp-138h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 69);
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v2;
    if ( (v4 & 1) == 0 )
    {
LABEL_51:
      while ( v4 )
      {
        v6 = v4;
        v7 = *((_DWORD *)this + 137) >> 5;
        v8 = v4;
        v26 = (unsigned __int16 *)(*(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
        v9 = (unsigned __int64 *)v4;
        v4 = *(_QWORD *)v4;
        if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v4 = *v9;
        if ( (v4 & 1) != 0 )
        {
          for ( i = (unsigned __int64 *)(*((_QWORD *)this + 69)
                                       + 8LL
                                       + 8LL
                                       * ((37
                                         * (BYTE6(v26)
                                          + 37
                                          * (BYTE5(v26)
                                           + 37
                                           * (BYTE4(v26)
                                            + 37
                                            * (BYTE3(v26)
                                             + 37
                                             * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                                         + HIBYTE(v26)) & (unsigned int)(v7 - 1)));
                (unsigned __int64)i < *((_QWORD *)this + 69)
                                    + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
                ++i )
          {
            v4 = *i;
            if ( (*i & 1) == 0 )
              goto LABEL_19;
          }
          v4 = 0LL;
        }
LABEL_19:
        v11 = *(unsigned __int16 **)(v8 + 16);
        v26 = 0LL;
        if ( !v11 )
        {
          if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                      (const struct _GUID *)(v8 + 32),
                      (const unsigned __int16 **)&v26) >= 0 )
          {
            LODWORD(v11) = (_DWORD)v26;
          }
          else
          {
            CAnimationTracking::GuidToString((const struct _GUID *)(v8 + 32), v27);
            v11 = v27;
          }
        }
        v12 = *(unsigned int *)(v8 + 56);
        v13 = 127;
        v14 = 255;
        v15 = 255;
        if ( *(_DWORD *)(v8 + 120) < 0xFFu )
          v14 = *(_DWORD *)(v8 + 120);
        if ( *(_DWORD *)(v8 + 124) < 0xFFu )
          v15 = *(_DWORD *)(v8 + 124);
        if ( (unsigned int)(*(_QWORD *)(v8 + 128) / v12) < 0x7F )
          v13 = *(_QWORD *)(v8 + 128) / v12;
        v16 = 255;
        if ( (unsigned int)(8LL * *(_QWORD *)(v8 + 136) / v12) < 0xFF )
          v16 = 8LL * *(_QWORD *)(v8 + 136) / v12;
        v17 = v14 | ((v15 | ((v13 | (v16 << 8)) << 8)) << 8);
        if ( *(_QWORD *)(v8 + 16) )
          v17 |= 0x800000u;
        v18 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
        {
          McTemplateU0zqqqqq_EventWriteTransfer(
            v13,
            v17,
            (_DWORD)v11,
            v12,
            100 * *(_DWORD *)(v8 + 96) / (unsigned int)v12,
            100 * *(_DWORD *)(v8 + 112) / (unsigned int)v12,
            v17,
            *(_QWORD *)(v8 + 128) / v12);
          LODWORD(v12) = *(_DWORD *)(v6 + 56);
          v18 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits);
        }
        v19 = 255;
        v20 = 255;
        if ( *(_DWORD *)(v8 + 120) < 0xFFu )
          v19 = *(_DWORD *)(v8 + 120);
        if ( *(_DWORD *)(v8 + 124) < 0xFFu )
          v20 = *(_DWORD *)(v8 + 124);
        v21 = 255;
        if ( (unsigned int)(*(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v12) < 0xFF )
          v21 = *(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v12;
        v22 = v19 | ((v20 | (v21 << 8)) << 8);
        v23 = v22;
        if ( !*(_QWORD *)(v8 + 16) )
          v23 = v22;
        if ( (v18 & 1) != 0 )
          McTemplateU0zqqqq_EventWriteTransfer(
            v22,
            *(_QWORD *)(v8 + 144) % (unsigned __int64)(unsigned int)v12,
            (_DWORD)v11,
            v12,
            100 * *(_DWORD *)(v8 + 68) / (unsigned int)v12,
            100 * *(_DWORD *)(v8 + 84) / (unsigned int)v12,
            v23);
        v24 = *((_DWORD *)this + 137) >> 5;
        v26 = (unsigned __int16 *)(*(_QWORD *)(v8 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
        for ( j = (_QWORD *)(*((_QWORD *)this + 69)
                           + 8LL
                           * ((37
                             * (BYTE6(v26)
                              + 37
                              * (BYTE5(v26)
                               + 37
                               * (BYTE4(v26)
                                + 37
                                * (BYTE3(v26)
                                 + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                             + HIBYTE(v26)) & (unsigned int)(v24 - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
        {
          if ( *j == v8 )
          {
            *j = *(_QWORD *)v8;
            --*((_DWORD *)this + 136);
            *(_QWORD *)v8 |= 0x8000000000000002uLL;
            break;
          }
        }
        CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v8);
      }
      goto LABEL_52;
    }
    v3 = (_QWORD *)*((_QWORD *)this + 69);
  }
  for ( k = v2 + 1; k < &v3[(unsigned __int64)*((unsigned int *)this + 137) >> 5]; ++k )
  {
    v4 = *k;
    if ( (*k & 1) == 0 )
      goto LABEL_51;
  }
LABEL_52:
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
