/*
 * XREFs of DxgkCleanupPresentHistoryInternal @ 0x1C01E9600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C007BA60 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkCleanupPresentHistoryInternal(int a1, __int64 a2, __int64 a3)
{
  int PresentHistoryInternal; // esi
  unsigned int v6; // edx
  _BYTE *v7; // rbx
  unsigned int v8; // edi
  char *v9; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-838h] BYREF
  __int64 v11; // [rsp+28h] [rbp-830h]
  _BYTE *v12; // [rsp+30h] [rbp-828h]
  unsigned int v13; // [rsp+38h] [rbp-820h]
  int v14; // [rsp+3Ch] [rbp-81Ch]
  _BYTE v15[2048]; // [rsp+40h] [rbp-818h] BYREF

  v11 = 0LL;
  v14 = 0;
  do
  {
    v13 = 0;
    v12 = v15;
    v10[0] = a1;
    v10[1] = 2048;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal((ULONG64)v10, 0, a3);
    if ( PresentHistoryInternal < 0 )
      break;
    v6 = v13;
    v7 = v15;
    v8 = 0;
    if ( !v13 )
      break;
    do
    {
      if ( *(_DWORD *)v7 == 9 && (*((_DWORD *)v7 + 8) & 4) != 0 )
      {
        v9 = (char *)*((_QWORD *)v7 + 2);
        if ( v9 )
        {
          FlipManagerConsumerAdapterCleanupTokenDiscard(v9);
          v6 = v13;
        }
      }
      ++v8;
      v7 += *((unsigned int *)v7 + 1);
    }
    while ( v8 < v6 );
  }
  while ( v6 );
  return (unsigned int)PresentHistoryInternal;
}
