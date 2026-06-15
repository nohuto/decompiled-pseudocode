/*
 * XREFs of sub_180047614 @ 0x180047614
 * Callers:
 *     sub_18004C944 @ 0x18004C944 (sub_18004C944.c)
 *     sub_18012D84C @ 0x18012D84C (sub_18012D84C.c)
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall sub_180047614(void *a1)
{
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = a1;
  return RpcBindingFree(&Binding);
}
