/*
 * XREFs of sub_18001078C @ 0x18001078C
 * Callers:
 *     sub_180010370 @ 0x180010370 (sub_180010370.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_18001078C(__int64 a1)
{
  _QWORD *v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ecx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = 0;
  while ( v2 )
  {
    v4 = v2[2];
    v5 = v3 + 1;
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)(v4 + 448) )
      v5 = v3;
    v3 = v5;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
