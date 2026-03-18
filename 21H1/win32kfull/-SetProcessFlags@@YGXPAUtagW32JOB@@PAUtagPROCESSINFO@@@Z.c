/*
 * XREFs of ?SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D4F4
 * Callers:
 *     ?UpdateJob@@YGXPAUtagW32JOB@@@Z @ 0x9D3F8 (-UpdateJob@@YGXPAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D474 (-JobCalloutAddProcessWorker@@YGHPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_qqD@32 @ 0x9D582 (_WPP_RECORDER_SF_qqD@32.c)
 */

void __fastcall SetProcessFlags(int a1, int a2)
{
  int v4; // eax
  unsigned int v5; // eax
  int v6; // edx
  int v7; // esi
  int j; // ecx
  int v9; // esi
  int i; // ecx
  int v11; // [esp-18h] [ebp-20h]
  int v12; // [esp-14h] [ebp-1Ch]
  int v13; // [esp-10h] [ebp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(v11, v12, v13, a1, a2, *(_DWORD *)(a1 + 12));
  v4 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a1 + 12) )
    v5 = v4 | 0x2000000;
  else
    v5 = v4 & 0xFDFFFFFF;
  v6 = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(a2 + 8) = v5;
  if ( v6 )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      do
      {
        *(_DWORD *)(v6 + 264) |= 0x20000000u;
        v9 = v6 + 216;
        v6 = *(_DWORD *)(v6 + 364);
        for ( i = 3; i; --i )
          v9 += 4;
      }
      while ( v6 );
    }
    else
    {
      do
      {
        *(_DWORD *)(v6 + 264) &= ~0x20000000u;
        v7 = v6 + 216;
        v6 = *(_DWORD *)(v6 + 364);
        for ( j = 3; j; --j )
          v7 += 4;
      }
      while ( v6 );
    }
  }
}
