/*
 * XREFs of _OpenClipboard @ 0x1C005A0D8
 * Callers:
 *     NtUserOpenClipboard @ 0x1C0059BD0 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C021F4D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  struct tagWINDOWSTATION *v5; // rax
  struct tagWINDOWSTATION *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v5 = CheckClipboardAccess();
    v6 = v5;
    if ( v5 )
    {
      v7 = (char *)v5 + 96;
      v8 = *((_QWORD *)v5 + 12);
      if ( a1 == v8 )
      {
        if ( gptiCurrent == *((_QWORD *)v6 + 10) )
          return 1LL;
        if ( a1 == v8 )
          goto LABEL_8;
      }
      if ( !*((_QWORD *)v6 + 10) )
      {
LABEL_8:
        v11[0] = v7;
        v11[1] = a1;
        HMAssignmentLock(v11);
        *((_QWORD *)v6 + 10) = gptiCurrent;
        if ( a2 )
        {
          v9 = *((_QWORD *)v6 + 14);
          if ( !v9 || *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 712LL) = *((_DWORD *)v6 + 35);
        }
        return 1LL;
      }
      UserSetLastError(5LL);
      if ( (unsigned int)dword_1C032B3F8 > 5
        && (qword_1C032B408 & 0x400000000000LL) != 0
        && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
      {
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          *(_QWORD *)(*((_QWORD *)v6 + 10) + 416LL),
          &unk_1C02F13C5);
      }
    }
  }
  return 0LL;
}
