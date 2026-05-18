/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180004D34
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000446C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180003A28 (ModuleFailFastForHRESULT.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180004CC8 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::Alloc();
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
