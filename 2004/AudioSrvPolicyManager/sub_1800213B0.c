/*
 * XREFs of sub_1800213B0 @ 0x1800213B0
 * Callers:
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_1800213B0(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rdx
  int v4; // esi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( *(_DWORD *)(a1 + 488) )
    return 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v8 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v3 = *(_QWORD **)(a1 + 72);
  v4 = 0;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v5 + 448) && *(_QWORD *)(v5 + 392) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 || *(_DWORD *)(a1 + 432) )
    return 1;
  return v1;
}
