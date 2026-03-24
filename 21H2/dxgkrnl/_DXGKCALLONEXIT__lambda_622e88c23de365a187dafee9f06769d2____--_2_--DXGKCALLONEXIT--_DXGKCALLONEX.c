/*
 * XREFs of _DXGKCALLONEXIT__lambda_622e88c23de365a187dafee9f06769d2____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002670C
 * Callers:
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244B40 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int **__fastcall DXGKCALLONEXIT__lambda_622e88c23de365a187dafee9f06769d2____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  int **result; // rax
  int *v2; // rdx

  if ( *(_BYTE *)(a1 + 32) )
  {
    result = *(int ***)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(int ***)(a1 + 8);
      v2 = *result;
      if ( *result )
      {
        if ( (result = *(int ***)(a1 + 16), *result) && **result < 0
          || (result = *(int ***)(a1 + 24), !*(_BYTE *)result) )
        {
          _InterlockedDecrement(v2 + 90);
        }
      }
    }
  }
  return result;
}
