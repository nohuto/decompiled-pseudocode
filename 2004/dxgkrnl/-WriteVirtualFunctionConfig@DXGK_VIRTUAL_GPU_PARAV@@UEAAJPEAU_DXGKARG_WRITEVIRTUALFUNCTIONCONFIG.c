/*
 * XREFs of ?WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0236740
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ @ 0x1C002590C (-IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfig(
        DXGVIRTUALMACHINE **this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2)
{
  __int64 v4; // r9
  __int64 Offset; // rcx
  size_t Length; // rdx

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
  {
    if ( DXGVIRTUALMACHINE::IsWsl2Guest(this[13])
      && (Offset = a2->Offset, (unsigned int)Offset >= 0xD0)
      && (Length = a2->Length, (unsigned int)(Length + Offset) <= 0xD4)
      || (Offset = a2->Offset, (unsigned int)Offset >= 0xD4)
      && (Length = a2->Length, (unsigned int)(Length + Offset) <= 0xD8) )
    {
      memmove((void *)(Offset + v4 + 144), a2->Data, Length);
    }
  }
  return 0LL;
}
