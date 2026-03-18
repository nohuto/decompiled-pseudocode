/*
 * XREFs of McGenControlCallbackV2 @ 0x1C001CB10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00B867C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  bool v10; // r11
  __int64 v11; // rax
  int v12; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v7 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v10 = 0;
          if ( *(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8 )
          {
            v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v7);
            if ( !v9
              || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v10 = 1;
            }
          }
          v11 = *((_QWORD *)CallbackContext + 6);
          LODWORD(SourceId) = v7 & 0x1F;
          *(_QWORD *)&ControlCode = (unsigned __int64)v7 >> 5;
          *(_QWORD *)&Level = (unsigned int)(1 << (char)SourceId);
          if ( v10 )
          {
            *(_DWORD *)(v11 + 4LL * *(_QWORD *)&ControlCode) |= Level;
          }
          else
          {
            *(_QWORD *)&Level = (unsigned int)~Level;
            *(_DWORD *)(v11 + 4LL * *(_QWORD *)&ControlCode) &= Level;
          }
        }
      }
    }
    else
    {
      v12 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v12 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v12 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback((unsigned int)SourceId, ControlCode, Level);
  }
}
