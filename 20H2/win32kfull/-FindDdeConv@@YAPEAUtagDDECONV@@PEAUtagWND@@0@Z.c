/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021A808
 * Callers:
 *     ValidateDDEConvPair @ 0x1C021C6A0 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C021C7D4 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021CC3C (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C021CF6C (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
