/*
 * XREFs of std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18003E0A0
 * Callers:
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003DB50 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004495C (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  result[2] = 1;
  result[3] = 1;
  *(_QWORD *)result = off_18004DA90;
  *((_QWORD *)result + 2) = a2;
  *a1 = a2;
  a1[1] = result;
  return result;
}
