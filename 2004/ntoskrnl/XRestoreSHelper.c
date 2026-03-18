/*
 * XREFs of XRestoreSHelper @ 0x140400070
 * Callers:
 *     RtlXRestoreS @ 0x14037F8E8 (RtlXRestoreS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XRestoreSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}
