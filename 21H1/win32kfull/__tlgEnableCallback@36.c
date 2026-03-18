/*
 * XREFs of __tlgEnableCallback@36 @ 0x27A8D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall _tlgEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        int Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v7; // ecx
  void (__stdcall *v8)(LPCGUID, ULONG, int, _DWORD, _DWORD, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD); // ecx

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        if ( (_BYTE)Level )
          v7 = (unsigned __int8)Level + 1;
        else
          v7 = 256;
        *(_DWORD *)CallbackContext = v7;
        CallbackContext[1] = MatchAnyKeyword;
        CallbackContext[2] = MatchAllKeyword;
      }
    }
    else
    {
      *(_DWORD *)CallbackContext = 0;
    }
    v8 = (void (__stdcall *)(LPCGUID, ULONG, int, _DWORD, _DWORD, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD))*((_DWORD *)CallbackContext + 8);
    if ( v8 )
      v8(
        SourceId,
        ControlCode,
        Level,
        MatchAnyKeyword,
        HIDWORD(MatchAnyKeyword),
        MatchAllKeyword,
        HIDWORD(MatchAllKeyword),
        FilterData,
        *((_DWORD *)CallbackContext + 9));
  }
}
