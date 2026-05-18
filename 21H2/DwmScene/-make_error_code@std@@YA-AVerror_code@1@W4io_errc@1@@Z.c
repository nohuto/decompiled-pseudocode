/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x180031A3C
 * Callers:
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_1800315C8 @ 0x1800315C8 (sub_1800315C8.c)
 * Callees:
 *     ?_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z @ 0x180125282 (-_Execute_once@std@@YAHAEAUonce_flag@1@P6AHPEAX1PEAPEAX@Z1@Z.c)
 */

__int64 __fastcall std::make_error_code(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !std::_Execute_once(
          (struct std::once_flag *)&unk_18021FB50,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_Generic_error_category>,
          &unk_18021FB58) )
  {
    _o_terminate();
    __debugbreak();
  }
  *(_QWORD *)(a1 + 8) = &unk_18021FB58;
  result = a1;
  *(_DWORD *)a1 = a2;
  return result;
}
