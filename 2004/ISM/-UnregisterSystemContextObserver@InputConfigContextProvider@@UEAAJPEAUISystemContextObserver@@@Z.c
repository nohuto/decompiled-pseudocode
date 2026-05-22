/*
 * XREFs of ?UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1801473F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall InputConfigContextProvider::UnregisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  return SystemContextProvider::UnregisterSystemContextObserver(this, a2);
}
