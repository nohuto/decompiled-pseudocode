/*
 * XREFs of sub_180010E60 @ 0x180010E60
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     pfnti @ 0x1800118E0 (pfnti.c)
 * Callees:
 *     sub_180010F18 @ 0x180010F18 (sub_180010F18.c)
 */

void __fastcall sub_180010E60(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // esi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
  if ( !*(_DWORD *)(a1 + 320) )
  {
    v3 = *(_DWORD *)(a1 + 628);
    *(_DWORD *)(a1 + 320) = 1;
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 324);
      if ( v4 == *(_DWORD *)(a1 + 328) && !v3 )
        break;
      *(_DWORD *)(a1 + 328) = v4;
      LeaveCriticalSection(v1);
      sub_180010F18(a1, v4);
      EnterCriticalSection(v1);
      *(_DWORD *)(a1 + 628) = 0;
      v3 = 0;
    }
    *(_DWORD *)(a1 + 320) = 0;
  }
  LeaveCriticalSection(v1);
}
