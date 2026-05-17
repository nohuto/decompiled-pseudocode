/*
 * XREFs of _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 *     _TppTerminateProcess@4 @ 0x4B38492C (_TppTerminateProcess@4.c)
 */

int __thiscall TppWorkerpInnerExceptionFilter(int this, _DWORD *a2)
{
  int v3; // esi
  int *v4; // eax

  v3 = TppExceptionFilter((const void **)this);
  if ( !v3 )
    *a2 = 1;
  if ( v3 == 1 )
  {
    v4 = *(int **)this;
    if ( **(_DWORD **)this != -1073741571 )
    {
      if ( *v4 > -1073740022 && (*v4 <= -1073740018 || *v4 == -1073740016) )
        return -1;
      v4 = (int *)TppTerminateProcess((int **)this);
    }
    RtlReportException((int)v4, *(_DWORD *)(this + 4), 3);
  }
  return v3;
}
