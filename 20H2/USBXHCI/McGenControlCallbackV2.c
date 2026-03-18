/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0018740
 * Callers:
 *     <none>
 * Callees:
 *     Etw_EnableCallback @ 0x1C0018870 (Etw_EnableCallback.c)
 *     memset @ 0x1C001BFC0 (memset.c)
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
  UCHAR v8; // r14
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  bool v13; // r10
  int v14; // edx
  int *v15; // rcx
  int v16; // eax
  int v17; // edx
  __int64 v18; // r8
  int v19; // eax

  v8 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_QWORD *)&Level = 0LL;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v11 = *((_BYTE *)CallbackContext + 40);
            v13 = 0;
            if ( *(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v11 || !v11 )
            {
              v12 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
              if ( !v12
                || (v12 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v12 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
              {
                v13 = 1;
              }
            }
            v14 = 1 << (Level & 0x1F);
            v15 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)Level >> 5));
            v16 = *v15;
            if ( v13 )
              v17 = v16 | v14;
            else
              v17 = v16 & ~v14;
            *v15 = v17;
            *(_QWORD *)&Level = (unsigned int)(Level + 1);
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v19 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v19 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v19 - 1) / 32 + 1));
    }
    LOBYTE(v18) = v8;
    Etw_EnableCallback(SourceId, ControlCode, v18, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext);
  }
}
