/*
 * XREFs of _AVrfpChainDuplicateVerificationLayers@0 @ 0x4B338A4E
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _AVrfpFindClosestThunkDuplicate@12 @ 0x4B338F06 (_AVrfpFindClosestThunkDuplicate@12.c)
 */

void __stdcall AVrfpChainDuplicateVerificationLayers()
{
  int *v0; // esi
  int *v1; // eax
  int v2; // edx
  _DWORD *v3; // eax
  int *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  _DWORD *v7; // ebx
  int ClosestThunkDuplicate; // eax
  int v9; // ebx
  int *v10; // [esp+10h] [ebp-18h]
  _DWORD *v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  _DWORD *v14; // [esp+20h] [ebp-8h]
  int *v15; // [esp+24h] [ebp-4h]
  int v16; // [esp+24h] [ebp-4h]

  v0 = (int *)AVrfpVerifierProvidersList;
  while ( v0 != &AVrfpVerifierProvidersList )
  {
    v1 = v0;
    v2 = 0;
    v0 = (int *)*v0;
    v15 = v1;
    v10 = v0;
    v3 = (_DWORD *)v1[5];
    v14 = v3;
    v13 = 0;
    if ( *v3 )
    {
      v4 = v15;
      v5 = v3;
      v6 = v3;
      do
      {
        v16 = 0;
        v11 = (_DWORD *)v5[3];
        if ( *v11 )
        {
          v7 = (_DWORD *)v5[3];
          do
          {
            if ( (AVrfpDebug & 0x20) != 0 )
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v4[3], *v5, *v7);
            ClosestThunkDuplicate = AVrfpFindClosestThunkDuplicate((char *)*v7);
            v12 = ClosestThunkDuplicate;
            if ( ClosestThunkDuplicate )
            {
              if ( (AVrfpDebug & 0x10) != 0 )
              {
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v5, *v7, v4[3]);
                ClosestThunkDuplicate = v12;
              }
              v7[1] = ClosestThunkDuplicate;
            }
            v9 = 3 * ++v16;
            v7 = &v11[v9];
          }
          while ( *v7 );
          v6 = v14;
          v2 = v13;
        }
        v13 = ++v2;
        v5 = &v6[4 * v2];
      }
      while ( *v5 );
      v0 = v10;
    }
  }
}
