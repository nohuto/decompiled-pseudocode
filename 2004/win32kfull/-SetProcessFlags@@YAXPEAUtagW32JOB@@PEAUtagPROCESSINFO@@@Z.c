/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109D44
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0109AD0 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0109C84 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C0109DC0 (WPP_RECORDER_SF_qqD.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2, int a3, int a4)
{
  __int64 v6; // rax
  unsigned int v7; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD((_DWORD)a1, (_DWORD)a2, a3, a4);
  v6 = *((_QWORD *)a2 + 40);
  v7 = *((_DWORD *)a2 + 3) & 0xFDFFFFFF;
  if ( *((_DWORD *)a1 + 6) )
    v7 = *((_DWORD *)a2 + 3) | 0x2000000;
  *((_DWORD *)a2 + 3) = v7;
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 6) )
    {
      do
      {
        *(_DWORD *)(v6 + 480) |= 0x20000000u;
        v6 = *(_QWORD *)(v6 + 656);
      }
      while ( v6 );
    }
    else
    {
      do
      {
        *(_DWORD *)(v6 + 480) &= ~0x20000000u;
        v6 = *(_QWORD *)(v6 + 656);
      }
      while ( v6 );
    }
  }
}
