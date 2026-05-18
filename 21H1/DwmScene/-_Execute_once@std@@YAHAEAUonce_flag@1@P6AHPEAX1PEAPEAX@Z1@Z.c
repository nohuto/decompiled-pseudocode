/*
 * XREFs of ?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z @ 0x18011F9B2
 * Callers:
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002C16C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     sub_180115DF0 @ 0x180115DF0 (sub_180115DF0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall std::_Execute_once(struct std::once_flag *a1, int (*a2)(void *, void *, void **), void *a3)
{
  return __imp_?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z(a1, a2, a3);
}
