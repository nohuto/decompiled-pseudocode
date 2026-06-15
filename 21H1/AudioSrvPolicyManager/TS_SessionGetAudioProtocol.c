/*
 * XREFs of TS_SessionGetAudioProtocol @ 0x1800305B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002BC3C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18002E244 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003BFC8 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionGetAudioProtocol(void *a1, DWORD a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  DWORD SessionId; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 || !a4 )
    return 87LL;
  *a3 = 0xFFFF;
  *a4 = 0;
  result = RpcClientProcessSessionId(a1, v8, &SessionId);
  if ( !(_DWORD)result )
  {
    if ( a2 == -1 )
      a2 = SessionId;
    if ( !SessionId || a2 == SessionId )
    {
      if ( a2 )
      {
        result = TsSessionIdGetAudioProtocol(a2, a3, a4);
        if ( (_DWORD)result == 1168 )
        {
          *a3 = GetTsAudioProtocol(a2);
          *a4 = 0;
          return 0LL;
        }
      }
      else
      {
        *a3 = 0;
        *a4 = 0;
      }
    }
    else
    {
      return 5LL;
    }
  }
  return result;
}
