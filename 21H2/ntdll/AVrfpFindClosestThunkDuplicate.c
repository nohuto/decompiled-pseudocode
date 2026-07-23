/*
 * XREFs of AVrfpFindClosestThunkDuplicate @ 0x1800DABC4
 * Callers:
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DA618 (AVrfpChainDuplicateVerificationLayers.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     _stricmp @ 0x18008DCF0 (_stricmp.c)
 *     _wcsicmp @ 0x18008E370 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpFindClosestThunkDuplicate(__int64 a1, const wchar_t *a2, const char *a3)
{
  __int64 *v3; // rdi
  const wchar_t *v5; // rbx
  __int64 *v6; // rsi
  _QWORD *v7; // rsi
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  __int64 v10; // r12

  v3 = *(__int64 **)(a1 + 8);
  v5 = a2;
  do
  {
LABEL_15:
    if ( v3 == &AVrfpVerifierProvidersList )
      return 0LL;
    v6 = v3;
    v3 = (__int64 *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v6[3]);
    v7 = (_QWORD *)v6[5];
    v8 = 0;
  }
  while ( !*v7 );
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: dll: %ws\n", v7[4 * v8]);
    if ( !wcsicmp((const wchar_t *)v7[4 * v8], v5) )
    {
      v9 = (_QWORD *)v7[4 * v8 + 3];
      v10 = 0LL;
      if ( *v9 )
        break;
    }
LABEL_14:
    if ( !v7[4 * ++v8] )
      goto LABEL_15;
  }
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: thunk: %s == %s ?\n", (const char *)v9[3 * v10], a3);
    if ( !stricmp((const char *)v9[3 * v10], a3) )
      break;
    v10 = (unsigned int)(v10 + 1);
    if ( !v9[3 * v10] )
    {
      v5 = a2;
      goto LABEL_14;
    }
  }
  if ( (AVrfpDebug & 0x20) != 0 )
    DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, v7[4 * v8]);
  return v9[3 * v10 + 2];
}
