/*
 * XREFs of ??_G?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@QEAAPEAXI@Z @ 0x180046130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 24LL);
  return a1;
}
