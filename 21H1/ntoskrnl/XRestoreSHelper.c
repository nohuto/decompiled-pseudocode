/*
 * XREFs of XRestoreSHelper @ 0x1403FEDE0
 * Callers:
 *     RtlXRestoreS @ 0x14037EEF8 (RtlXRestoreS.c)
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
