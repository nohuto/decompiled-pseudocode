/*
 * XREFs of ?do_is@?$ctype@_W@std@@MEBA_NF_W@Z @ 0x180027D10
 * Callers:
 *     <none>
 * Callees:
 *     _Getwctype @ 0x1800AEF30 (_Getwctype.c)
 */

bool __fastcall std::ctype<wchar_t>::do_is(__int64 a1, unsigned __int16 a2, wchar_t a3)
{
  return ((unsigned __int16)Getwctype(a3, (const _Ctypevec *)(a1 + 16)) & a2) != 0;
}
