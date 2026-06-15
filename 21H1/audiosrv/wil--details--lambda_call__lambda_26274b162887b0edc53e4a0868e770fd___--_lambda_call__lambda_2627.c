/*
 * XREFs of wil::details::lambda_call__lambda_26274b162887b0edc53e4a0868e770fd___::_lambda_call__lambda_26274b162887b0edc53e4a0868e770fd___ @ 0x1800D59B8
 * Callers:
 *     _CreateLowRightsRegistryKey_::_1_::dtor$0 @ 0x180075D04 (_CreateLowRightsRegistryKey_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_26274b162887b0edc53e4a0868e770fd___::_lambda_call__lambda_26274b162887b0edc53e4a0868e770fd___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    operator delete(*(void **)(*(_QWORD *)a1 + 8LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
  return result;
}
