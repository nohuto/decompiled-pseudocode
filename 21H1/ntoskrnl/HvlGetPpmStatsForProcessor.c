/*
 * XREFs of HvlGetPpmStatsForProcessor @ 0x14038A9C0
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x140271E60 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     HvlGetReferenceTime @ 0x14038AA58 (HvlGetReferenceTime.c)
 */

__int64 __fastcall HvlGetPpmStatsForProcessor(struct _KPRCB *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  unsigned __int64 *StatisticsPage; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int64 *v10; // rbx
  __int64 ReferenceTime; // rdx
  __int64 v13; // rcx

  if ( a1 == KeGetCurrentPrcb() )
  {
    v6 = HIDWORD(xmmword_140CED2E0);
    StatisticsPage = a1->StatisticsPage;
    do
    {
      v8 = StatisticsPage[v6];
      *a3 = a1->StatisticsPage[(unsigned int)xmmword_140CED2F0];
    }
    while ( v8 != StatisticsPage[v6] );
    v9 = DWORD1(xmmword_140CED2F0);
    v10 = a1->StatisticsPage;
    do
    {
      *a2 = v10[v9];
      ReferenceTime = HvlGetReferenceTime();
    }
    while ( *a2 != v10[v9] );
  }
  else
  {
    ReferenceTime = HvlGetReferenceTime();
    v13 = (unsigned int)xmmword_140CED2F0;
    *a2 = ReferenceTime - a1->StatisticsPage[DWORD1(xmmword_140CED2E0)];
    *a3 = a1->StatisticsPage[v13];
  }
  return ReferenceTime;
}
