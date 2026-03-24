/*
 * XREFs of NtUnloadKey2 @ 0x140773890
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey2(__int64 a1, unsigned int a2)
{
  return CmUnloadKey(a1, a2, 0, 0LL);
}
