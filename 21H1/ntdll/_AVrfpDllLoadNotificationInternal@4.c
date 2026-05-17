/*
 * XREFs of _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D
 * Callers:
 *     _AVrfDllLoadNotification@4 @ 0x4B2A6D66 (_AVrfDllLoadNotification@4.c)
 *     _AVrfpSnapAlreadyLoadedDlls@0 @ 0x4B33953A (_AVrfpSnapAlreadyLoadedDlls@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _AVrfpDetectVerifiedExports@8 @ 0x4B338B79 (_AVrfpDetectVerifiedExports@8.c)
 *     _AVrfpSnapDllImports@4 @ 0x4B33959D (_AVrfpSnapDllImports@4.c)
 */

int __thiscall AVrfpDllLoadNotificationInternal(const wchar_t **this)
{
  int *v3; // edi
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // ecx
  char v8; // al
  int *v9; // [esp+Ch] [ebp-Ch]
  _DWORD *v10; // [esp+14h] [ebp-4h]

  if ( !AVrfpEnabled )
    return 0;
  v3 = (int *)AVrfpVerifierProvidersList;
  while ( v3 != &AVrfpVerifierProvidersList )
  {
    v4 = (_DWORD *)v3[5];
    v3 = (int *)*v3;
    v9 = v3;
    v10 = v4;
    if ( *v4 )
    {
      v5 = 0;
      v6 = (int)v4;
      v7 = v4;
      do
      {
        if ( (*(_BYTE *)(v6 + 4) & 1) == 0 )
        {
          if ( _wcsicmp(this[12], *(const wchar_t **)v6) )
          {
            v7 = v10;
          }
          else
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                NtCurrentTeb()->ClientId.UniqueProcess,
                this[12]);
            v8 = AVrfpDetectVerifiedExports(v6, (int)this);
            v7 = v10;
            if ( v8 )
              *(_DWORD *)(v6 + 4) |= 1u;
          }
        }
        ++v5;
        v6 = (int)&v7[4 * v5];
      }
      while ( *(_DWORD *)v6 );
      v3 = v9;
    }
  }
  return AVrfpSnapDllImports(this);
}
