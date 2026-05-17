/*
 * XREFs of _AVrfpDllUnloadNotificationInternal@4 @ 0x4B338CF6
 * Callers:
 *     _AVrfDllUnloadNotification@4 @ 0x4B33849A (_AVrfDllUnloadNotification@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _AVrfpClearVerifiedExports@8 @ 0x4B338B2B (_AVrfpClearVerifiedExports@8.c)
 */

int __fastcall AVrfpDllUnloadNotificationInternal(int a1)
{
  int *v1; // edi
  const wchar_t **v2; // ebx
  int v3; // edi
  const wchar_t **v4; // esi
  char v5; // al
  int *v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+14h] [ebp-4h]

  v8 = a1;
  if ( AVrfpEnabled )
  {
    v1 = (int *)AVrfpVerifierProvidersList;
    while ( v1 != &AVrfpVerifierProvidersList )
    {
      v2 = (const wchar_t **)v1[5];
      v1 = (int *)*v1;
      v7 = v1;
      if ( *v2 )
      {
        v3 = 0;
        v4 = v2;
        do
        {
          if ( ((_BYTE)v4[1] & 1) != 0 )
          {
            if ( _wcsicmp(*(const wchar_t **)(a1 + 48), *v4) )
            {
              a1 = v8;
            }
            else
            {
              if ( (AVrfpDebug & 4) != 0 )
                DbgPrint(
                  "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                  NtCurrentTeb()->ClientId.UniqueProcess,
                  *(_DWORD *)(v8 + 48));
              v5 = AVrfpClearVerifiedExports(v4[3], v8);
              a1 = v8;
              if ( v5 )
                v4[1] = (const wchar_t *)((unsigned int)v4[1] & 0xFFFFFFFE);
            }
          }
          ++v3;
          v4 = &v2[4 * v3];
        }
        while ( *v4 );
        v1 = v7;
      }
    }
  }
  return 0;
}
