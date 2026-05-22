/*
 * XREFs of ?GetCurrentInputProvider@MPCManagerClient@@UEAAJPEAULegacyDeviceInfo@@PEAW4MPCSourceKind@@@Z @ 0x18001DA90
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 */

__int64 __fastcall MPCManagerClient::GetCurrentInputProvider(
        MPCManagerClient *this,
        struct LegacyDeviceInfo *a2,
        enum MPCSourceKind *a3)
{
  memcpy_0(a2, (char *)this + 48, 0x60CuLL);
  *(_DWORD *)a3 = *((_DWORD *)this + 399);
  return 0LL;
}
