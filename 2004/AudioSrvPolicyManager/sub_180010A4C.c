/*
 * XREFs of sub_180010A4C @ 0x180010A4C
 * Callers:
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001EBA4 @ 0x18001EBA4 (sub_18001EBA4.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18002CAC0 @ 0x18002CAC0 (sub_18002CAC0.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180010A4C(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r8d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = 4;
  if ( *(_DWORD *)(a1 + 556) )
  {
    v2 = *(_DWORD *)(a1 + 560);
  }
  else
  {
    v3 = *(_QWORD **)(a1 + 72);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( !*(_DWORD *)(v4 + 448) || *(_QWORD *)(v4 + 392) )
      {
        v5 = *(_DWORD *)(v4 + 512);
        v6 = v5 ? *(_DWORD *)(v4 + 516) : *(_DWORD *)(v4 + 344);
        if ( v6 < v2 )
        {
          if ( v5 )
            v2 = *(_DWORD *)(v4 + 516);
          else
            v2 = *(_DWORD *)(v4 + 344);
        }
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
