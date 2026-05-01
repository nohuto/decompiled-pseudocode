/*
 * XREFs of ??1?$ComPtr@VScreenManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1804041E4
 * Callers:
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z @ 0x180403D3C (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVScreenManager@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ScreenManager>::~ComPtr<ScreenManager>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(a1);
}
