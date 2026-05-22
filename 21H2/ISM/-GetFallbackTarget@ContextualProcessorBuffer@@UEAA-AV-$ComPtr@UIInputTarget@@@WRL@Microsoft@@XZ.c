/*
 * XREFs of ?GetFallbackTarget@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x18014C370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033710 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall ContextualProcessorBuffer::GetFallbackTarget(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL);
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(a2);
  return a2;
}
