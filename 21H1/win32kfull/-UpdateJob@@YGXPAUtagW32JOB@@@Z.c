/*
 * XREFs of ?UpdateJob@@YGXPAUtagW32JOB@@@Z @ 0x9D3F8
 * Callers:
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D446 (-JobCalloutAddProcess@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D4F4 (-SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 */

void __usercall UpdateJob(int a1@<ecx>, struct tagW32JOB *a2@<esi>)
{
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  int i; // ecx
  struct tagW32JOB *v6; // [esp-4h] [ebp-Ch]
  struct tagPROCESSINFO *v7; // [esp+0h] [ebp-8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(a1, 4, 0xDu, 17, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, a1);
  v3 = (_DWORD *)_gppiList;
  if ( _gppiList )
  {
    v6 = a2;
    do
    {
      if ( PsGetProcessJob(*v3) == *(_DWORD *)(a1 + 4) )
      {
        if ( v3[104] )
        {
          v4 = v3 + 42;
          for ( i = 3; i; --i )
            ++v4;
          SetProcessFlags(v6, v7);
        }
        else
        {
          JobCalloutAddProcess(v6, v7);
        }
      }
      v3 = (_DWORD *)v3[52];
    }
    while ( v3 );
  }
}
