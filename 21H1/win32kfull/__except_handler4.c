/*
 * XREFs of __except_handler4 @ 0xEE020
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ValidateLocalCookies @ 0xEDFE0 (ValidateLocalCookies.c)
 *     @_EH4_CallFilterFunc@8 @ 0xEE268 (@_EH4_CallFilterFunc@8.c)
 *     @_EH4_TransferToHandler@8 @ 0xEE280 (@_EH4_TransferToHandler@8.c)
 *     @_EH4_GlobalUnwind@4 @ 0xEE29C (@_EH4_GlobalUnwind@4.c)
 *     @_EH4_LocalUnwind@16 @ 0xEE2B8 (@_EH4_LocalUnwind@16.c)
 */

int __cdecl _except_handler4(int a1, char *TargetFrame, int a3)
{
  char *v3; // esi
  uintptr_t v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int *v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  char v15; // [esp+1Fh] [ebp-1h]
  int v16; // [esp+28h] [ebp+8h]

  v3 = TargetFrame + 16;
  v4 = __security_cookie ^ *((_DWORD *)TargetFrame + 2);
  v11 = 0;
  v12 = 0;
  v15 = 0;
  v14 = 1;
  v5 = *((_DWORD *)TargetFrame + 3);
  if ( (*(_BYTE *)(a1 + 4) & 0x66) != 0 )
  {
    if ( v5 != -2 )
      _EH4_LocalUnwind(TargetFrame + 16, &__security_cookie);
  }
  else
  {
    v11 = a1;
    v12 = a3;
    *((_DWORD *)TargetFrame - 1) = &v11;
    if ( v5 != -2 )
    {
      do
      {
        v6 = v5 + 2 * (v5 + 2);
        v7 = *(_DWORD *)(v4 + 4 * v6 + 4);
        v13 = (int *)(v4 + 4 * v6);
        v8 = *v13;
        v16 = *v13;
        if ( v7 )
        {
          v9 = _EH4_CallFilterFunc(v7, v3);
          v15 = 1;
          if ( v9 < 0 )
            return 0;
          if ( v9 > 0 )
          {
            _EH4_GlobalUnwind(TargetFrame);
            if ( *((_DWORD *)TargetFrame + 3) != v5 )
              _EH4_LocalUnwind(v3, &__security_cookie);
            *((_DWORD *)TargetFrame + 3) = v16;
            ValidateLocalCookies(v4);
            _EH4_TransferToHandler(v13[2], v3);
            __debugbreak();
          }
          v8 = v16;
        }
        v5 = v8;
      }
      while ( v8 != -2 );
    }
  }
  return v14;
}
