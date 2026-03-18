/*
 * XREFs of ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x180156804
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801533D4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801567D8 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CAnimationTracking::ClearAllLongtermScenarios(CAnimationTracking *this)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 *i; // rcx
  unsigned __int64 v7; // r10
  unsigned __int64 *v8; // r8
  unsigned __int64 *j; // rcx
  _QWORD *k; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h]
  __int64 v12; // [rsp+40h] [rbp+8h]

  v1 = (_QWORD *)((char *)this + 552);
  v3 = (_QWORD *)*((_QWORD *)this + 69);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) == 0 )
      goto LABEL_25;
    v4 = (_QWORD *)*v1;
  }
  for ( i = v3 + 1; i < &v4[(unsigned __int64)*((unsigned int *)this + 137) >> 5]; ++i )
  {
    v5 = *i;
    if ( (*i & 1) == 0 )
      goto LABEL_25;
  }
  v5 = 0LL;
LABEL_25:
  while ( v5 )
  {
    v7 = v5;
    v11 = *(_QWORD *)(v5 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v8 = (unsigned __int64 *)v5;
    v5 = *(_QWORD *)v5;
    if ( (v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v8;
    if ( (v5 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(*v1
                                   + 8LL
                                   * ((37
                                     * (BYTE6(v11)
                                      + 37
                                      * (BYTE5(v11)
                                       + 37
                                       * (BYTE4(v11)
                                        + 37
                                        * (BYTE3(v11)
                                         + 37
                                         * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                                     + HIBYTE(v11)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1))
                                   + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v5 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_19;
      }
      v5 = 0LL;
    }
LABEL_19:
    v12 = *(_QWORD *)(v7 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8LL
                       * ((37
                         * (BYTE6(v12)
                          + 37
                          * (BYTE5(v12)
                           + 37
                           * (BYTE4(v12)
                            + 37
                            * (BYTE3(v12)
                             + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
                         + HIBYTE(v12)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
    {
      if ( *k == v7 )
      {
        *k = *(_QWORD *)v7;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v7 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v7);
  }
}
