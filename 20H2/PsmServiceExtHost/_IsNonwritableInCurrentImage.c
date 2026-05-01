/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x180044F80
 * Callers:
 *     sub_18004494C @ 0x18004494C (sub_18004494C.c)
 * Callees:
 *     sub_180044F30 @ 0x180044F30 (sub_180044F30.c)
 *     sub_180044FE0 @ 0x180044FE0 (sub_180044FE0.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = sub_180044FE0(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = sub_180044F30((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
