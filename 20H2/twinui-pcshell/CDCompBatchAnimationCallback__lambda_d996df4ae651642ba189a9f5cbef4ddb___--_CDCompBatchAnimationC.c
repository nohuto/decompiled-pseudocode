/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x18040C4EC
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_scalar_deleting_destructor_ @ 0x18040C8F0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_scalar_deleting_destr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18040E6F0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = off_1804966C0;
  result = Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
