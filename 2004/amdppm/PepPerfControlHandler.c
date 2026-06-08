/*
 * XREFs of PepPerfControlHandler @ 0x1C000D710
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfSet @ 0x1C000D654 (PepNotifyPerfSet.c)
 *     PepPerformanceFromPercentage @ 0x1C000D9B0 (PepPerformanceFromPercentage.c)
 */

void __fastcall PepPerfControlHandler(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r10
  int v8; // eax
  __int64 v9; // r10
  int *v10; // r11
  int v11; // r8d
  int v12; // r9d

  if ( a3 )
  {
    if ( !a4 )
    {
      PepPerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      PepPerformanceFromPercentage(v5, *(unsigned int *)(v4 + 20));
      v8 = PepPerformanceFromPercentage(v7, *(unsigned int *)(v6 + 16));
      PepNotifyPerfSet(*(_QWORD *)(v9 + 16), v8, v11, *v10, v12, *(_DWORD *)(v9 + 36));
    }
  }
}
