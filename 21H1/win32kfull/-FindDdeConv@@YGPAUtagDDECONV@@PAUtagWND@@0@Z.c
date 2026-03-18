/*
 * XREFs of ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1
 * Callers:
 *     _ValidateDDEConvPair@8 @ 0x17FF6F (_ValidateDDEConvPair@8.c)
 *     __ImpersonateDdeClientWindow@8 @ 0x18000E (__ImpersonateDdeClientWindow@8.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxDDETrackPostHook@20 @ 0x18033E (_xxxDDETrackPostHook@20.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(int a1, int a2)
{
  struct tagDDECONV *result; // eax

  for ( result = (struct tagDDECONV *)_GetProp(a1, (unsigned __int16)atomDDETrack, 1);
        result && *((_DWORD *)result + 6) != a2;
        result = (struct tagDDECONV *)*((_DWORD *)result + 3) )
  {
    ;
  }
  return result;
}
