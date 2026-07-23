/*
 * XREFs of RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x18010474C
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F1230 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int16 *a5)
{
  int v5; // ebx
  __int16 v6; // r10
  unsigned int v9; // esi
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int16 v13; // cx
  __int128 v15; // [rsp+0h] [rbp-28h]

  v5 = a3;
  v6 = 0;
  v15 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v9 = *(unsigned __int16 *)(a2 + 8);
  do
  {
    v10 = (v9 >> (2 * v6)) & 3;
    if ( v10 )
    {
      if ( v10 == 2 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v12 = *(__int16 *)(a2 + 2LL * v6 + 12);
        if ( *(_WORD *)(28 * v12 + v11 + 4) == (_WORD)v5 )
        {
          *(_OWORD *)a4 = *(_OWORD *)(28 * v12 + v11);
          *(_QWORD *)(a4 + 16) = *(_QWORD *)(28 * v12 + v11 + 16);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(28 * v12 + v11 + 24);
          v13 = *(_WORD *)(a2 + 2LL * v6 + 12);
LABEL_9:
          *a5 = v13;
          return 0LL;
        }
      }
      else if ( v10 == 1 && *(__int16 *)(a2 + 2LL * v6 + 12) == v5 )
      {
        LOWORD(v15) = 1;
        v13 = -1;
        WORD2(v15) = v5;
        *(_OWORD *)a4 = v15;
        *(_QWORD *)(a4 + 16) = 0LL;
        *(_DWORD *)(a4 + 24) = 0;
        goto LABEL_9;
      }
    }
    ++v6;
  }
  while ( v6 < 4 );
  return 3221225524LL;
}
