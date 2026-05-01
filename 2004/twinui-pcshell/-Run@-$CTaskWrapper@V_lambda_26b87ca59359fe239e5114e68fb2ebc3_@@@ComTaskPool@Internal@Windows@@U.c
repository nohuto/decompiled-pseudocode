/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_26b87ca59359fe239e5114e68fb2ebc3_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1801505D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x18015423C (-UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_26b87ca59359fe239e5114e68fb2ebc3_>::Run(
        __int64 a1,
        __int64 a2)
{
  UAFireEvent(a1, a2, *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
