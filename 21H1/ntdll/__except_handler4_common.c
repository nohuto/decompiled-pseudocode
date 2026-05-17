/*
 * XREFs of __except_handler4_common @ 0x4B2F68B0
 * Callers:
 *     __except_handler4 @ 0x4B2FAD10 (__except_handler4.c)
 * Callees:
 *     ValidateLocalCookies @ 0x4B2F6860 (ValidateLocalCookies.c)
 *     @_EH4_CallFilterFunc@8 @ 0x4B2F6FA0 (@_EH4_CallFilterFunc@8.c)
 *     @_EH4_TransferToHandler@8 @ 0x4B2F6FB8 (@_EH4_TransferToHandler@8.c)
 *     @_EH4_GlobalUnwind@4 @ 0x4B2F6FD4 (@_EH4_GlobalUnwind@4.c)
 *     @_EH4_LocalUnwind@16 @ 0x4B2F6FF0 (@_EH4_LocalUnwind@16.c)
 *     ___except_validate_context_record @ 0x4B2FB774 (___except_validate_context_record.c)
 */

int __cdecl _except_handler4_common(_DWORD *a1, void (__thiscall *a2)(int), int a3, char *TargetFrame, int a5)
{
  char *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  char v12; // cl
  char *v14; // eax
  _DWORD *v15; // [esp-8h] [ebp-2Ch]
  _DWORD v16[2]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+18h] [ebp-Ch]
  _DWORD *v19; // [esp+1Ch] [ebp-8h]
  char v20; // [esp+23h] [ebp-1h]

  v20 = 0;
  v18 = 1;
  v5 = TargetFrame + 16;
  v19 = (_DWORD *)(*a1 ^ *((_DWORD *)TargetFrame + 2));
  ValidateLocalCookies(a2, v19, (int)(TargetFrame + 16));
  __except_validate_context_record(a5);
  v6 = *((_DWORD *)TargetFrame + 3);
  if ( (*(_BYTE *)(a3 + 4) & 0x66) != 0 )
  {
    if ( v6 != -2 )
    {
      _EH4_LocalUnwind(v5, a1);
LABEL_14:
      ValidateLocalCookies(a2, v19, (int)v5);
    }
  }
  else
  {
    v16[0] = a3;
    v16[1] = a5;
    *((_DWORD *)TargetFrame - 1) = v16;
    if ( v6 != -2 )
    {
      do
      {
        v7 = v6 + 2 * (v6 + 2);
        v8 = v19[v7];
        v9 = &v19[v7];
        v10 = v9[1];
        v17 = v9;
        if ( v10 )
        {
          v11 = _EH4_CallFilterFunc(v10, v5);
          v12 = 1;
          v20 = 1;
          if ( v11 < 0 )
          {
            v18 = 0;
            goto LABEL_14;
          }
          if ( v11 > 0 )
          {
            _EH4_GlobalUnwind(TargetFrame);
            v14 = TargetFrame;
            if ( *((_DWORD *)TargetFrame + 3) != v6 )
            {
              _EH4_LocalUnwind(v5, a1);
              v14 = TargetFrame;
            }
            v15 = v19;
            *((_DWORD *)v14 + 3) = v8;
            ValidateLocalCookies(a2, v15, (int)v5);
            _EH4_TransferToHandler(v17[2], v5);
            JUMPOUT(0x4B2F69C5);
          }
        }
        else
        {
          v12 = v20;
        }
        v6 = v8;
      }
      while ( v8 != -2 );
      if ( !v12 )
        return v18;
      goto LABEL_14;
    }
  }
  return v18;
}
