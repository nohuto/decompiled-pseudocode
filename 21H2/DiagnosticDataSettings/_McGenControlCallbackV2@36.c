/*
 * XREFs of _McGenControlCallbackV2@36 @ 0x10003630
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x10004BC6 (_memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        unsigned __int16 *CallbackContext)
{
  unsigned int v7; // edx
  unsigned __int8 v8; // cl
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  bool v12; // bl
  char v13; // di
  int *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        v7 = 0;
        *((_BYTE *)CallbackContext + 40) = Level;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < CallbackContext[21]; ++v7 )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v12 = 0;
          if ( *(_BYTE *)(v7 + *((_DWORD *)CallbackContext + 13)) <= v8 || !v8 )
          {
            v9 = *((_DWORD *)CallbackContext + 12);
            v10 = *(_DWORD *)(v9 + 8 * v7);
            v11 = *(_DWORD *)(v9 + 8 * v7 + 4);
            if ( !*(_QWORD *)(v9 + 8 * v7)
              || *((_DWORD *)CallbackContext + 5) & v11 | *((_DWORD *)CallbackContext + 4) & v10
              && (v10 & *((_DWORD *)CallbackContext + 6)) == *((_DWORD *)CallbackContext + 6)
              && (v11 & *((_DWORD *)CallbackContext + 7)) == *((_DWORD *)CallbackContext + 7) )
            {
              v12 = 1;
            }
          }
          v13 = v7 & 0x1F;
          v14 = (int *)(*((_DWORD *)CallbackContext + 11) + 4 * (v7 >> 5));
          v15 = *v14;
          if ( v12 )
            v16 = v15 | (1 << v13);
          else
            v16 = v15 & ~(1 << v13);
          *v14 = v16;
        }
      }
    }
    else
    {
      v17 = CallbackContext[21];
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_DWORD *)CallbackContext + 4) = 0;
      *((_DWORD *)CallbackContext + 5) = 0;
      *((_DWORD *)CallbackContext + 6) = 0;
      *((_DWORD *)CallbackContext + 7) = 0;
      if ( (_WORD)v17 )
        memset(*((void **)CallbackContext + 11), 0, 4 * ((v17 - 1) / 32) + 4);
    }
  }
}
