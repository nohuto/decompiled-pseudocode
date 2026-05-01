/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___ @ 0x180460CB8
 * Callers:
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU2341@@Z @ 0x180461D74 (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@@impl@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_1804979D8;
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a2);
  return a1;
}
