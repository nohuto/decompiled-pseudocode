/*
 * XREFs of _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 *     _TppTerminateProcess@4 @ 0x4B38492C (_TppTerminateProcess@4.c)
 */

int __fastcall TppWorkerpOuterExceptionFilter(int a1, _DWORD *a2)
{
  int v3; // esi
  const void *v4; // eax

  if ( *a2 )
  {
    v3 = 0;
    *a2 = 0;
  }
  else
  {
    v3 = TppExceptionFilter((const void **)a1);
    if ( v3 == 1 )
    {
      v4 = *(const void **)a1;
      if ( **(_DWORD **)a1 != -1073741571 )
        v4 = (const void *)TppTerminateProcess((int **)a1);
      RtlReportException((int)v4, *(_DWORD *)(a1 + 4), 3);
    }
  }
  return v3;
}
