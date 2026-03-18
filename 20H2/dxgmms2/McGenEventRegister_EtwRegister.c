/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C0017238
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C009011C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !DxgkControlGuid_Context )
    return EtwRegister(&DxgkControlGuid, McGenControlCallbackV2, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
  return result;
}
