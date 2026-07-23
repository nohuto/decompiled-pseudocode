/*
 * XREFs of _RtlOpenImageFileOptionsKey@12 @ 0x4B33FD90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 */

int __stdcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, int a2, _DWORD *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, 9u, 0, a3);
}
