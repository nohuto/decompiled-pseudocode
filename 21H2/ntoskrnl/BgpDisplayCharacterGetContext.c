/*
 * XREFs of BgpDisplayCharacterGetContext @ 0x1409F5A4C
 * Callers:
 *     BgpConsoleInitialize @ 0x1409F5820 (BgpConsoleInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140A97A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     BgpTxtCreateRegion @ 0x1409F40D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x1409F50EC (BgpTxtDestroyRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterGetContext(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v3; // rbx
  __int64 Memory; // rdi
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v11[12]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  Memory = BgpFwAllocateMemory(0x20uLL);
  if ( Memory )
  {
    v8 = a2[1];
    v11[0] = *a2;
    v11[2] = v11[0];
    v10 = 0LL;
    v11[1] = v8;
    if ( (int)BgpTxtCreateRegion(&v10, v11, (_OWORD *)a1, &v12, a3) < 0 )
    {
      BgpFwFreeMemory(Memory);
      if ( v12 )
        BgpTxtDestroyRegion(v12);
    }
    else
    {
      v3 = Memory;
      *(_QWORD *)(Memory + 12) = *(_QWORD *)a2;
      *(_DWORD *)(Memory + 20) = a2[2];
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(Memory + 24) = v12;
    }
  }
  return v3;
}
