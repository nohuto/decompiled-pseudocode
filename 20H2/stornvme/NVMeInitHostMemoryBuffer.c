/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C000D548
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005200 (memmove.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A4C0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r8
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ecx
  int v20; // [rsp+20h] [rbp-188h]
  size_t Size; // [rsp+28h] [rbp-180h]
  __int64 v22; // [rsp+30h] [rbp-178h]
  int v23; // [rsp+38h] [rbp-170h]
  int v24; // [rsp+40h] [rbp-168h]
  __int64 v25; // [rsp+48h] [rbp-160h]
  __int64 v26; // [rsp+50h] [rbp-158h]
  __int64 v27; // [rsp+58h] [rbp-150h]
  __int64 v28; // [rsp+60h] [rbp-148h] BYREF
  __int64 v29; // [rsp+68h] [rbp-140h]
  __int64 Src; // [rsp+70h] [rbp-138h] BYREF
  __int64 v31; // [rsp+78h] [rbp-130h]
  __int64 v32; // [rsp+80h] [rbp-128h]
  __int64 v33; // [rsp+88h] [rbp-120h]
  _QWORD v34[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = (_QWORD *)(a1 + 3768);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 3768);
  LODWORD(v28) = 8;
  if ( v6 )
    goto LABEL_18;
  v8 = *(_QWORD *)(a1 + 1608);
  v9 = 0;
  v10 = (unsigned int)(*(_DWORD *)(v8 + 276) << 12);
  v11 = *(_DWORD *)(v8 + 272) << 12;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 116);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 116);
        if ( (v12 & 0xFFF) != 0 )
          v11 = (v12 + 4095) & 0xFFFFF000;
        if ( v11 < (unsigned int)v10 )
          v11 = v10;
      }
      HIDWORD(v28) = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 152) + 20LL) >> 7) & 0xF) + 12);
      LODWORD(Size) = HIDWORD(v28);
      v13 = StorPortExtendedFunction(
              69LL,
              a1,
              v10,
              v11,
              0,
              Size,
              0LL,
              -1,
              0,
              v34,
              &v28,
              v27,
              v28,
              v29,
              Src,
              v31,
              v32,
              v33);
      if ( v13 )
        goto LABEL_21;
      v5 = v28;
      if ( (unsigned int)v28 > 8 )
        v5 = 8;
      v14 = 16 * v5;
      NVMeZeroMemory(&Src, 16 * v5);
      if ( v5 )
      {
        v15 = HIDWORD(v28);
        v16 = 0LL;
        v17 = v5;
        do
        {
          v18 = v34[v16 + 1];
          v9 += v18;
          *(__int64 *)((char *)&Src + v16 * 8) = v34[v16];
          v16 += 2LL;
          *(_DWORD *)((char *)&v29 + v16 * 8) = v18 / v15;
          --v17;
        }
        while ( v17 );
      }
      v13 = StorPortExtendedFunction(
              0LL,
              a1,
              v14 + 8,
              1701672526LL,
              (_DWORD)v4,
              Size,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              Src,
              v31,
              v32,
              v33);
      if ( v13 )
        goto LABEL_19;
      *(_DWORD *)*v4 = v9;
      memmove((void *)(*v4 + 8LL), &Src, v14);
      *(_DWORD *)(*v4 + 4LL) = v14;
      v6 = *(_QWORD *)(a1 + 3768);
LABEL_18:
      LODWORD(Size) = *(_DWORD *)(v6 + 4);
      v13 = NVMeSetHostMemoryBuffer(a1, (void *)(v6 + 8), Size);
      if ( !v13 )
        return v13;
LABEL_19:
      if ( v5 )
        StorPortExtendedFunction(
          70LL,
          a1,
          v34,
          v5,
          v20,
          Size,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          Src,
          v31,
          v32,
          v33);
      goto LABEL_21;
    }
  }
  v13 = -1056964606;
LABEL_21:
  if ( *v4 )
  {
    StorPortExtendedFunction(1LL, a1, *v4, a4, v20, Size, v22, v23, v24, v25, v26, v27, v28, v29, Src, v31, v32, v33);
    *v4 = 0LL;
  }
  return v13;
}
