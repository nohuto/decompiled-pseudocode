/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__ @ 0x180003260
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180025D7C (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"CpuClipAreaThreshold", &v2, 0LL);
  v1 = 20000;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::CpuClipAreaThreshold = v1;
  return result;
}
