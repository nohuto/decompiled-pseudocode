/*
 * XREFs of NtCreateKey @ 0x140651F70
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x140651FB0 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return CmCreateKey(a1, a2, a3, a4);
}
