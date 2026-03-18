/*
 * XREFs of ?JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D446
 * Callers:
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     ?UpdateJob@@YGXPAUtagW32JOB@@@Z @ 0x9D3F8 (-UpdateJob@@YGXPAUtagW32JOB@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 */

int __fastcall JobCalloutAddProcess(int a1, _DWORD *a2, struct tagW32JOB *a3, struct tagPROCESSINFO *a4)
{
  int v4; // ecx
  _DWORD *v5; // esi
  char v7; // [esp-4h] [ebp-8h]

  if ( !*a2 )
    return 0;
  if ( (a2[2] & 0x8000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(a1, (int)a2, 0xDu, 23, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1, v7);
    }
    return 0;
  }
  v4 = 3;
  v5 = a2 + 42;
  while ( v4 )
  {
    ++v5;
    --v4;
  }
  return JobCalloutAddProcessWorker(a3, a4);
}
