/*
 * XREFs of NVMeFreeHostMemoryBuffer @ 0x1C000D424
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A560 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  _DWORD *v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  int Src; // [rsp+20h] [rbp-A8h]
  int Srca; // [rsp+20h] [rbp-A8h]
  size_t Size; // [rsp+28h] [rbp-A0h]
  size_t Sizea; // [rsp+28h] [rbp-A0h]
  size_t Sizeb; // [rsp+28h] [rbp-A0h]
  __int64 v14; // [rsp+30h] [rbp-98h] BYREF
  int v15; // [rsp+38h] [rbp-90h] BYREF
  int v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  __int64 v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+78h] [rbp-50h]
  __int64 v24; // [rsp+80h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 3768);
  LODWORD(Size) = *(_DWORD *)(v1 + 4);
  NVMeSetHostMemoryBuffer(a1, (void *)(v1 + 8), Size);
  v3 = *(_QWORD *)(a1 + 3768);
  v4 = *(_DWORD *)(v3 + 4) >> 4;
  if ( (unsigned int)v4 > 8 )
    v4 = 8LL;
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)v4;
    v6 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)((char *)v6 + (_QWORD)&v14 - v3 - 16) = *((_QWORD *)v6 - 1);
      *(_DWORD *)((char *)v6 + (_QWORD)&v15 - v3 - 16) = *v6;
      v6 += 4;
      --v5;
    }
    while ( v5 );
  }
  StorPortExtendedFunction(70LL, a1, &v14, v4, Src, Sizea, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
  result = StorPortExtendedFunction(
             1LL,
             a1,
             *(_QWORD *)(a1 + 3768),
             v7,
             Srca,
             Sizeb,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25);
  *(_QWORD *)(a1 + 3768) = 0LL;
  return result;
}
