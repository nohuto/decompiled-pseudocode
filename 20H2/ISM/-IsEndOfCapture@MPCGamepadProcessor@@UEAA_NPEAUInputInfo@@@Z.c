/*
 * XREFs of ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180192440
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180191C4C (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 */

bool __fastcall MPCGamepadProcessor::IsEndOfCapture(
        MPCGamepadProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  return MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32), (__int64)a2, a3, a4) == 0;
}
