/*
 * XREFs of NtUnloadKey @ 0x140656500
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 */

__int64 __fastcall NtUnloadKey(__int64 a1)
{
  return CmUnloadKey(a1, 0LL, 0LL, 0LL);
}
