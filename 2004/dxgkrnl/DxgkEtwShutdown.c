/*
 * XREFs of DxgkEtwShutdown @ 0x1C0043BA0
 * Callers:
 *     DxgkUnload @ 0x1C02614A0 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C0043BC4 (McGenEventUnregister_EtwUnregister.c)
 */

__int64 DxgkEtwShutdown()
{
  __int64 result; // rax

  result = McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
