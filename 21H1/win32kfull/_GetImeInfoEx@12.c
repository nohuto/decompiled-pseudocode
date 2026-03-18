/*
 * XREFs of _GetImeInfoEx@12 @ 0xA1848
 * Callers:
 *     _NtUserGetImeInfoEx@8 @ 0xA1772 (_NtUserGetImeInfoEx@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GetImeInfoEx(int a1, wchar_t *a2, int a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  const void *v6; // esi
  int v8; // ecx

  if ( a1 )
  {
    v4 = *(_DWORD **)(a1 + 36);
    if ( v4 )
    {
      v5 = *(_DWORD **)(a1 + 36);
      if ( a3 )
      {
        if ( a3 == 3 )
        {
          while ( 1 )
          {
            v8 = v5[11];
            if ( v8 )
            {
              if ( !__wcsnicmp((const wchar_t *)(v8 + 184), a2 + 92, 0x50u) )
                break;
            }
            v5 = (_DWORD *)v5[2];
            if ( v5 == v4 )
              return 0;
          }
          v6 = (const void *)v5[11];
          goto LABEL_6;
        }
      }
      else
      {
        while ( v5[5] != *(_DWORD *)a2 )
        {
          v5 = (_DWORD *)v5[2];
          if ( v5 == v4 )
            return 0;
        }
        v6 = (const void *)v5[11];
        if ( v6 )
        {
LABEL_6:
          qmemcpy(a2, v6, 0x15Cu);
          return 1;
        }
      }
    }
  }
  return 0;
}
