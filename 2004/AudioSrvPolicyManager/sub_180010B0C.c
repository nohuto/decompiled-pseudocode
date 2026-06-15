/*
 * XREFs of sub_180010B0C @ 0x180010B0C
 * Callers:
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180010B0C(__int64 a1)
{
  _QWORD *v2; // rdx
  int v3; // edi
  _DWORD *v4; // rcx
  int v5; // eax
  int v6; // r8d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 4;
  while ( v2 )
  {
    v4 = (_DWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( !v4[112] )
    {
      v5 = v4[128];
      if ( v5 && v4[127] == 4 )
        v6 = v4[129];
      else
        v6 = v4[86];
      if ( v6 < v3 )
      {
        if ( v5 && v4[127] == 4 )
          v3 = v4[129];
        else
          v3 = v4[86];
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v3;
}
