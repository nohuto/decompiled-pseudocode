/*
 * XREFs of MiPteIsSessionDynamicBuffer @ 0x14038BD68
 * Callers:
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPteIsSessionDynamicBuffer(unsigned __int64 a1)
{
  return a1 >= (((unsigned __int64)qword_140C4CC10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && a1 < (((unsigned __int64)(qword_140C4CC10 + 0x2000) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
