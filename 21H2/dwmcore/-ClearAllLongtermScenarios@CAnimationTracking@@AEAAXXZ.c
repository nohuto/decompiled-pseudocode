/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801CAD28
 * Callers:
 *     ??1CAnimationTracking@@QEAA@XZ @ 0x1801AD93C (--1CAnimationTracking@@QEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801CACFC (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *k; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 *v7; // rcx
  unsigned __int64 *i; // rdx
  _QWORD *j; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h]
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)*((_QWORD *)this + 69);
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v2;
    if ( (v4 & 1) == 0 )
    {
LABEL_25:
      while ( v4 )
      {
        v6 = v4;
        v10 = *(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
        v7 = (unsigned __int64 *)v4;
        v4 = *(_QWORD *)v4;
        if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v4 = *v7;
        if ( (v4 & 1) != 0 )
        {
          for ( i = (unsigned __int64 *)(*((_QWORD *)this + 69)
                                       + 8LL
                                       + 8LL
                                       * ((37
                                         * (BYTE6(v10)
                                          + 37
                                          * (BYTE5(v10)
                                           + 37
                                           * (BYTE4(v10)
                                            + 37
                                            * (BYTE3(v10)
                                             + 37
                                             * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                                         + HIBYTE(v10)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
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
        v11 = *(_QWORD *)(v6 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
        for ( j = (_QWORD *)(*((_QWORD *)this + 69)
                           + 8LL
                           * ((37
                             * (BYTE6(v11)
                              + 37
                              * (BYTE5(v11)
                               + 37
                               * (BYTE4(v11)
                                + 37
                                * (BYTE3(v11)
                                 + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                             + HIBYTE(v11)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
              (*j & 1) == 0;
              j = (_QWORD *)*j )
        {
          if ( *j == v6 )
          {
            *j = *(_QWORD *)v6;
            --*((_DWORD *)this + 136);
            *(_QWORD *)v6 |= 0x8000000000000002uLL;
            break;
          }
        }
        CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v6);
      }
      return;
    }
    v3 = (_QWORD *)*((_QWORD *)this + 69);
  }
  for ( k = v2 + 1; k < &v3[(unsigned __int64)*((unsigned int *)this + 137) >> 5]; ++k )
  {
    v4 = *k;
    if ( (*k & 1) == 0 )
      goto LABEL_25;
  }
}
