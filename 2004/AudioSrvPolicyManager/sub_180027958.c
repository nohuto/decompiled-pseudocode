/*
 * XREFs of sub_180027958 @ 0x180027958
 * Callers:
 *     sub_180027A98 @ 0x180027A98 (sub_180027A98.c)
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_18000FD24 @ 0x18000FD24 (sub_18000FD24.c)
 *     sub_1800278D4 @ 0x1800278D4 (sub_1800278D4.c)
 */

void __fastcall sub_180027958(int *a1)
{
  int *v2; // rbx
  _QWORD *v3; // rax
  int *v4; // rcx
  int v5; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( *a1 )
  {
    v3 = (_QWORD *)qword_18004FF98;
    while ( v3 )
    {
      v4 = (int *)v3[2];
      v3 = (_QWORD *)*v3;
      if ( *v4 && v4[86] )
      {
        v2 = v4;
        break;
      }
    }
    if ( v2 != a1 )
    {
      v5 = -2;
      if ( v2 )
      {
        v2[86] = 0;
        v5 = *v2;
        if ( (unsigned int)dword_180050008 <= 1 )
          v2[13] = 1;
      }
      a1[13] = 0;
      a1[86] = 1;
      if ( (unsigned int)dword_180050008 <= 1 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 4u )
        {
          v6 = *a1;
          sub_18000FD24(*((_QWORD *)off_18004F000 + 2), 0xEu, &stru_180044DE8, v5, v6);
        }
        if ( (int)sub_1800278D4(v5, *a1) < 0
          && off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0xFu, &stru_180044DE8);
        }
      }
    }
  }
  LeaveCriticalSection(&CriticalSection);
}
