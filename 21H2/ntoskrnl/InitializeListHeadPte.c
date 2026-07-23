/*
 * XREFs of InitializeListHeadPte @ 0x1403B65B4
 * Callers:
 *     MiInitializeSystemCache @ 0x1407A0828 (MiInitializeSystemCache.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall InitializeListHeadPte(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r8

  *(_QWORD *)(a1 + 16) = a2;
  result = MiSwizzleInvalidPte((__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - a2 - 0x98000000000LL) >> 3 << 28);
  *v3 = result;
  v3[1] = result;
  return result;
}
