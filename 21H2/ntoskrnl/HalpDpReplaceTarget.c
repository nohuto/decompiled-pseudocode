/*
 * XREFs of HalpDpReplaceTarget @ 0x1409A8950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A827C (HalpDpOfflineProcessorForReplace.c)
 */

__int64 __fastcall HalpDpReplaceTarget(__int64 a1)
{
  int v1; // esi
  unsigned int v3; // edi
  int v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  __int64 result; // rax

  v1 = *(_DWORD *)a1;
  v3 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 48);
  v5 = v1 + 1;
  while ( v4 < v5 )
  {
    if ( (++v3 & dword_140C4A17C) != 0 || !qword_140C4A180 )
      _mm_pause();
    else
      qword_140C4A180(v3);
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( !*(_BYTE *)(a1 + 68) )
    HalpDpOfflineProcessorForReplace(a1);
  v6 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (int)result >= v5 )
      break;
    if ( (++v6 & dword_140C4A17C) != 0 || !qword_140C4A180 )
      _mm_pause();
    else
      qword_140C4A180(v6);
  }
  return result;
}
