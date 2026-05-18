/*
 * XREFs of _Cnd_wait @ 0x18012542C
 * Callers:
 *     sub_1800B4E48 @ 0x1800B4E48 (sub_1800B4E48.c)
 *     sub_1800B5910 @ 0x1800B5910 (sub_1800B5910.c)
 *     sub_1800B5BC8 @ 0x1800B5BC8 (sub_1800B5BC8.c)
 *     sub_18011C1E4 @ 0x18011C1E4 (sub_18011C1E4.c)
 *     sub_18011C290 @ 0x18011C290 (sub_18011C290.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_wait(_Cnd_t a1, _Mtx_t a2)
{
  return _Cnd_wait(a1, a2);
}
