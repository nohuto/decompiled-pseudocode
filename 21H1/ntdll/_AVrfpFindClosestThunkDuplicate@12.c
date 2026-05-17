/*
 * XREFs of _AVrfpFindClosestThunkDuplicate@12 @ 0x4B338F06
 * Callers:
 *     _AVrfpChainDuplicateVerificationLayers@0 @ 0x4B338A4E (_AVrfpChainDuplicateVerificationLayers@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     __stricmp @ 0x4B2F7400 (__stricmp.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

const char *__fastcall AVrfpFindClosestThunkDuplicate(int a1, const wchar_t *a2, char *a3)
{
  int *v3; // ebx
  int *v4; // esi
  const wchar_t **v5; // ecx
  int v6; // esi
  const wchar_t **v7; // edi
  const char **v8; // edi
  int v9; // ecx
  const char **v10; // eax
  int v11; // eax
  const char **v13; // [esp+Ch] [ebp-10h]
  const wchar_t **v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v3 = *(int **)(a1 + 4);
  do
  {
LABEL_16:
    if ( v3 == &AVrfpVerifierProvidersList )
      return 0;
    v4 = v3;
    v3 = (int *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v4[3]);
    v5 = (const wchar_t **)v4[5];
    v6 = 0;
    v15 = v5;
  }
  while ( !*v5 );
  v7 = v5;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v7 = &v5[4 * v6];
      DbgPrint("AVRF: chain: dll: %ws\n", *v7);
    }
    if ( !_wcsicmp(*v7, a2) )
    {
      v8 = (const char **)v7[3];
      v9 = 0;
      v16 = 0;
      if ( *v8 )
        break;
    }
LABEL_15:
    v5 = v15;
    ++v6;
    v7 = &v15[4 * v6];
    if ( !*v7 )
      goto LABEL_16;
  }
  v10 = v8;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v13 = &v8[3 * v9];
      DbgPrint("AVRF: chain: thunk: %s == %s ?\n", *v13, a3);
      v10 = v13;
    }
    if ( !_stricmp(*v10, a3) )
      break;
    v9 = v16 + 1;
    v11 = 3 * ++v16;
    v10 = &v8[v11];
    if ( !*v10 )
      goto LABEL_15;
  }
  if ( (AVrfpDebug & 0x20) != 0 )
    DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, v15[4 * v6]);
  return v8[3 * v16 + 2];
}
