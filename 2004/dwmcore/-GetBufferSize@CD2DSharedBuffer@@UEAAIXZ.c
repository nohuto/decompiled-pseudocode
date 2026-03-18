/*
 * XREFs of ?GetBufferSize@CD2DSharedBuffer@@UEAAIXZ @ 0x1800DDCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DSharedBuffer::GetBufferSize(CD2DSharedBuffer *this)
{
  return *((unsigned int *)this + 4);
}
