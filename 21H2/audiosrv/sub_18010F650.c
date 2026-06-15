/*
 * XREFs of sub_18010F650 @ 0x18010F650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 */

__int64 __fastcall sub_18010F650(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v4 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 60);
  else
    v4 = -2147467261;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
