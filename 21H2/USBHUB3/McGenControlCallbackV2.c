/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0001130
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0043B00 (memset.c)
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0074060 (HUBDRIVER_EtwEnableCallback.c)
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
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  bool v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        MatchAnyKeyword = 0LL;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1;
              (unsigned int)MatchAnyKeyword < *((unsigned __int16 *)CallbackContext + 21);
              MatchAnyKeyword = (unsigned int)(MatchAnyKeyword + 1) )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v10 = 0;
          if ( *(_BYTE *)((unsigned int)MatchAnyKeyword + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8 )
          {
            v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * (unsigned int)MatchAnyKeyword);
            if ( !v9
              || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v10 = 1;
            }
          }
          v11 = *((_QWORD *)CallbackContext + 6);
          SourceId = (LPCGUID)(MatchAnyKeyword & 0x1F);
          v12 = (unsigned __int64)(unsigned int)MatchAnyKeyword >> 5;
          *(_QWORD *)&Level = (unsigned int)(1 << (char)SourceId);
          if ( v10 )
          {
            *(_DWORD *)(v11 + 4 * v12) |= Level;
          }
          else
          {
            *(_QWORD *)&Level = (unsigned int)~Level;
            *(_DWORD *)(v11 + 4 * v12) &= Level;
          }
        }
      }
    }
    else
    {
      v13 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v13 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v13 - 1) / 32 + 1));
    }
    HUBDRIVER_EtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
}
