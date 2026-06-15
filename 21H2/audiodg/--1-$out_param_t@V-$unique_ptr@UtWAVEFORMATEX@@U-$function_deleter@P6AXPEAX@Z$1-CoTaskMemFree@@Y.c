/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14004E920
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x14002CB30 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
