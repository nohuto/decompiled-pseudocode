/*
 * XREFs of ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x1800121FC
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x180042798 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

bool __fastcall GameInputModule::ValidateModuleVersion(HINSTANCE a1, const struct GameInputVersion *a2)
{
  __int64 v3; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+48h] [rbp-30h] BYREF

  v4[2] = 0LL;
  v4[0] = 16LL;
  v4[1] = 1LL;
  return (int)LdrResSearchResource(a1, v4, 3LL, 256LL, &v3, 0LL, 0LL, 0LL) >= 0
      && (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned int *)(v3 + 48) << 32)) >= 0x7744A610B95LL;
}
