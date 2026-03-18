/*
 * XREFs of BgpTxtGetRegionContext @ 0x140AABF48
 * Callers:
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     BgpFoGetFontHandle @ 0x140AABE98 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtGetRegionContext(__int64 a1)
{
  BOOL v2; // edi
  __int64 result; // rax
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 || (int)BgpFoGetFontHandle(0LL, &v4) < 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 48) == (_QWORD)v4;
  result = BgpFwAllocateMemory(0x24uLL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 32) = 0;
    *(_QWORD *)result = *(_QWORD *)a1;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(result + 28) = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(result + 24) = v2;
  }
  return result;
}
