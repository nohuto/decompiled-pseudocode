/*
 * XREFs of ??_G__ExceptionPtr@@QEAAPEAXI@Z @ 0x18010EA64
 * Callers:
 *     sub_180074BE0 @ 0x180074BE0 (sub_180074BE0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18010E960 @ 0x18010E960 (sub_18010E960.c)
 */

__ExceptionPtr *__fastcall __ExceptionPtr::`scalar deleting destructor'(__ExceptionPtr *this, char a2)
{
  sub_18010E960((__int64)this);
  if ( (a2 & 1) != 0 )
    sub_18006A148(this);
  return this;
}
