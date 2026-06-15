/*
 * XREFs of sub_180015790 @ 0x180015790
 * Callers:
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 * Callees:
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180015790(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r8d
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( (unsigned int)v3 <= 1 )
  {
    v6 = *(_DWORD *)(a1 + 4 * v3 + 512);
    if ( v6 || a3 )
    {
      v7 = v6 + (a3 != 0 ? 1 : -1);
      *(_DWORD *)(a1 + 4 * v3 + 512) = v7;
      if ( !v7 || v7 == 1 && a3 )
        sub_180011230(*(_QWORD *)(a1 + 240));
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
