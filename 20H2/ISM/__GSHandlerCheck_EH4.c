/*
 * XREFs of __GSHandlerCheck_EH4 @ 0x18004A4C8
 * Callers:
 *     <none>
 * Callees:
 *     __CxxFrameHandler4_0 @ 0x18003CC62 (__CxxFrameHandler4_0.c)
 *     __GSHandlerCheckCommon @ 0x18004A464 (__GSHandlerCheckCommon.c)
 */

__int64 __fastcall _GSHandlerCheck_EH4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 56);
  _GSHandlerCheckCommon(a2, a4);
  result = 1LL;
  if ( ((((*(_DWORD *)(a1 + 4) & 0x66) != 0) + 1) & *(_DWORD *)(v4 + 4)) != 0 )
    return _CxxFrameHandler4_0();
  return result;
}
