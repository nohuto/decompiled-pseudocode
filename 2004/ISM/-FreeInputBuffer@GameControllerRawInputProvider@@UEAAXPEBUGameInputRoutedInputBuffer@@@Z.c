/*
 * XREFs of ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x180088530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::FreeInputBuffer(
        GameControllerRawInputProvider *this,
        const struct GameInputRoutedInputBuffer *a2)
{
  operator delete((char *)a2 - 88);
}
