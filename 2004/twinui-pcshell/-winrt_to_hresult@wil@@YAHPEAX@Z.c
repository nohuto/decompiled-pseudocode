/*
 * XREFs of ?winrt_to_hresult@wil@@YAHPEAX@Z @ 0x1801F8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180150098 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::winrt_to_hresult(wil *this, void *a2)
{
  return wil::details::ReportFailure_CaughtException();
}
