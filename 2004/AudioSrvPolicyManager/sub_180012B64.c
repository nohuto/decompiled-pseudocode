/*
 * XREFs of sub_180012B64 @ 0x180012B64
 * Callers:
 *     sub_180010090 @ 0x180010090 (sub_180010090.c)
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_1800205B0 @ 0x1800205B0 (sub_1800205B0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_1800121E8 @ 0x1800121E8 (sub_1800121E8.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180012B64(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v5; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+38h] [rbp-8h]

  v6 = (LPCRITICAL_SECTION)(a1 + 440);
  v7 = 0;
  sub_18001A330(&v6);
  if ( *(_DWORD *)(a1 + 488) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x21u, &stru_180043390, *(const wchar_t **)(a1 + 24));
    }
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 480), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 480), 1);
    *(_DWORD *)(a1 + 488) = 0;
    if ( (unsigned int)sub_180012748(a1) )
    {
      sub_1800121E8(a1);
      lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
      v5 = 0;
      sub_18001A330(&lpCriticalSection);
      v2 = *(_QWORD **)(a1 + 72);
      while ( v2 )
      {
        v3 = (_DWORD *)v2[2];
        v2 = (_QWORD *)*v2;
        if ( !v3[112] && v3[127] == 7 )
        {
          v3[127] = 0;
          v3[128] = 0;
          v3[129] = 4;
        }
      }
      if ( v5 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
      }
    }
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
