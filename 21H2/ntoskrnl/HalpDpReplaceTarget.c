/*
 * XREFs of HalpDpReplaceTarget @ 0x1409A9880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A91AC (HalpDpOfflineProcessorForReplace.c)
 */

__int64 __fastcall HalpDpReplaceTarget(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  unsigned int v8; // edi
  __int64 result; // rax

  v3 = *(_DWORD *)a1;
  v5 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  v6 = *(_DWORD *)(a1 + 48);
  v7 = v3 + 1;
  while ( v6 < v7 )
  {
    if ( (++v5 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
      _mm_pause();
    else
      qword_140C4A1C0(v5, a2, a3);
    v6 = *(_DWORD *)(a1 + 48);
  }
  if ( !*(_BYTE *)(a1 + 68) )
    HalpDpOfflineProcessorForReplace(a1);
  v8 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (int)result >= v7 )
      break;
    if ( (++v8 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
      _mm_pause();
    else
      qword_140C4A1C0(v8, a2, a3);
  }
  return result;
}
