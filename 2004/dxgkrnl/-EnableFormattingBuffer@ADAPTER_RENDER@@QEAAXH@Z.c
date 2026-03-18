/*
 * XREFs of ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0215FF8
 * Callers:
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C0268FA8 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003AF20 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0215830 (-CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableFormattingBuffer(ADAPTER_RENDER *this, __int64 a2)
{
  if ( *((_BYTE *)this + 832) )
  {
    if ( (_DWORD)a2 )
      ADAPTER_RENDER::CreateFormattingBuffer(this, a2);
    else
      ADAPTER_RENDER::DestroyFormattingBuffer(this);
  }
}
