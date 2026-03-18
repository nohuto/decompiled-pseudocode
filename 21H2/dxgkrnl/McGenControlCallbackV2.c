/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0028F30
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0029028 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v7; // esi
  unsigned int v10; // r9d
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  bool v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // r8d
  int v17; // eax

  v7 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v10 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v10 < *((unsigned __int16 *)CallbackContext + 21); ++v10 )
        {
          v11 = *((_BYTE *)CallbackContext + 40);
          v13 = 0;
          if ( *(_BYTE *)(v10 + *((_QWORD *)CallbackContext + 8)) <= v11 || !v11 )
          {
            v12 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v10);
            if ( !v12
              || (v12 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v12 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v13 = 1;
            }
          }
          v14 = *((_QWORD *)CallbackContext + 6);
          v15 = (unsigned __int64)v10 >> 5;
          v16 = 1 << (v10 & 0x1F);
          if ( v13 )
            *(_DWORD *)(v14 + 4 * v15) |= v16;
          else
            *(_DWORD *)(v14 + 4 * v15) &= ~v16;
        }
      }
    }
    else
    {
      v17 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v17 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v17 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback(ControlCode, v7, MatchAnyKeyword);
  }
}
