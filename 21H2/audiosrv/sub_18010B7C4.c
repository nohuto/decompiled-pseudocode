/*
 * XREFs of sub_18010B7C4 @ 0x18010B7C4
 * Callers:
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010ADAC @ 0x18010ADAC (sub_18010ADAC.c)
 *     sub_18010AE5C @ 0x18010AE5C (sub_18010AE5C.c)
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 *     sub_18010BBE4 @ 0x18010BBE4 (sub_18010BBE4.c)
 */

__int64 __fastcall sub_18010B7C4(__int64 a1, DWORD a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  bool v11; // cf
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r12d
  double v20; // xmm0_8
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  bool v24[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-1Ch] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  v7 = a3;
  sub_18010A130("Sarm::CStreamResource::ProcessDynamicObjectCountChange", 409, a3, (__int64)a4);
  *a4 = 0LL;
  v8 = sub_18010BBE4(a1, a2, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v7 < *(_DWORD *)(a1 + 68);
    v12 = v7;
    *(_DWORD *)(a1 + 64) = a2;
    if ( !v11 )
      v12 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 72) = v12;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v19 = sub_18010AE5C(a1, v7);
    if ( v19 < *(_DWORD *)(a1 + 80) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      if ( qword_180145000 < 0 )
        v20 = (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1))
            + (double)(int)(qword_180145000 & 1 | ((unsigned __int64)qword_180145000 >> 1));
      else
        v20 = (double)(int)qword_180145000;
      v16 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( *v16 >= 0 )
        v13 = *v16;
      if ( v16[1] >= 0 )
        v14 = v16[1];
      v15 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v20);
    }
    if ( (unsigned int)CallbackContext > 5 )
    {
      v11 = v19 < *(_DWORD *)(a1 + 80);
      v27 = a1 + 16;
      v21 = *(_QWORD *)(a1 + 40);
      v24[0] = v11;
      v28 = v21;
      v25 = v7;
      PerformanceCount.LowPart = a2;
      sub_18010ADAC(
        (__int64)v16,
        byte_1801693CB,
        v17,
        v18,
        (__int64)&v28,
        &v27,
        (__int64)&PerformanceCount,
        (__int64)&v25,
        (__int64)v24);
    }
    v22 = sub_18010BA60(a1, v19, v15 + v13);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a4 = v13 + v15 + v14;
      return 0LL;
    }
    else
    {
      sub_18004BD84(
        (int)retaddr,
        442,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        v22);
      return v23;
    }
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      412,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      v8);
    return v9;
  }
}
