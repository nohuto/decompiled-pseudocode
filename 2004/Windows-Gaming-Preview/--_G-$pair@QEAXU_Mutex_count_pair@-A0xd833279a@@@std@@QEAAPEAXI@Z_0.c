/*
 * XREFs of ??_G?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@QEAAPEAXI@Z_0 @ 0x18003D410
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 24LL);
  return a1;
}
