/*
 * XREFs of NtCreateKey @ 0x14066F650
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x14066F690 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return CmCreateKey(a1, a2, a3, a4);
}
