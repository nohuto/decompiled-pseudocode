/*
 * XREFs of ACPIIoctlEvalPostProcessingV1 @ 0x1C001BE20
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0058090 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001BF00 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001C0A0 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV1(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  __int64 v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_DWORD *)(a1[23] + 8LL)
    || (v14 = 0,
        v15 = 0,
        (int)ACPIIoctlCalculateOutputBufferSizeV1(a2, (unsigned int)&v14, (unsigned int)&v15, a3, 1) < 0) )
  {
    a1[7] &= v3;
    return 0LL;
  }
  v9 = (unsigned int)(v3 + 20);
  v10 = v14 + 12;
  v11 = v14 + 12;
  if ( v14 + 12 < (unsigned int)v9 )
  {
    v10 = v3 + 20;
    v11 = v3 + 20;
  }
  if ( v8 >= (unsigned int)v9 )
  {
    v12 = (_DWORD *)a1[3];
    v12[1] = v10;
    v3 = (unsigned __int64)(v12 + 3);
    v12[2] = v15;
    *v12 = 1114596673;
  }
  if ( v11 <= v8 )
  {
    LOBYTE(v7) = 1;
    a1[7] = v11;
    LOBYTE(v9) = a3;
    if ( (int)ACPIIoctlCalculateOutputBufferV1(a2, v3, v9, v7) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = v9;
  return 2147483653LL;
}
