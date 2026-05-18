/*
 * XREFs of sub_180106420 @ 0x180106420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18008AA84 (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ.c)
 */

char __fastcall sub_180106420(Concurrency::details::UMSThreadProxy **a1, Concurrency::details::UMSThreadProxy **a2)
{
  Concurrency::details::UMSThreadProxy *v2; // rdi
  char result; // al
  int Id; // ebx

  v2 = *a1;
  result = *((_BYTE *)*a1 + 124);
  if ( result == *((_BYTE *)*a2 + 124) )
  {
    Id = Concurrency::details::UMSThreadProxy::GetId(*a2);
    return (int)Concurrency::details::UMSThreadProxy::GetId(v2) > Id;
  }
  return result;
}
