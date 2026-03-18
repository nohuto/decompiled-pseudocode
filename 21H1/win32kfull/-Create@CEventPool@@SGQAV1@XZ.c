/*
 * XREFs of ?Create@CEventPool@@SGQAV1@XZ @ 0xE5EDA
 * Callers:
 *     ?Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ @ 0xE5E8C (-Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ.c)
 * Callees:
 *     <none>
 */

struct CEventPool *__stdcall CEventPool::Create()
{
  struct CEventPool *result; // eax

  result = (struct CEventPool *)EngAllocMem(0, 0x10u, 0x676D6466u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *(_DWORD *)result = 0;
  return result;
}
