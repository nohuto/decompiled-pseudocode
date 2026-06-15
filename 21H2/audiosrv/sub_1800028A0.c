/*
 * XREFs of sub_1800028A0 @ 0x1800028A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D2DC8 @ 0x1800D2DC8 (sub_1800D2DC8.c)
 */

__int64 __fastcall sub_1800028A0(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // esi
  __int64 v7; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  *(_DWORD *)(a1 + 280) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v7 = 0LL;
    do
    {
      sub_1800D2DC8(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v7), a2);
      v7 = ++v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 104) );
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
