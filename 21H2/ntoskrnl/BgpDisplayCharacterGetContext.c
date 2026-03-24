/*
 * XREFs of BgpDisplayCharacterGetContext @ 0x1409F4A4C
 * Callers:
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x140A96A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterGetContext(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v3; // rbx
  __int64 Memory; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v17[12]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  Memory = BgpFwAllocateMemory(0x20uLL);
  if ( Memory )
  {
    v8 = a2[1];
    v17[0] = *a2;
    v17[2] = v17[0];
    v16 = 0LL;
    v17[1] = v8;
    if ( (int)BgpTxtCreateRegion(&v16, v17, (_OWORD *)a1, &v18, a3) < 0 )
    {
      BgpFwFreeMemory(Memory, v9, v10, v11);
      if ( v18 )
        BgpTxtDestroyRegion(v18, v13, v14, v15);
    }
    else
    {
      v3 = Memory;
      *(_QWORD *)(Memory + 12) = *(_QWORD *)a2;
      *(_DWORD *)(Memory + 20) = a2[2];
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(Memory + 24) = v18;
    }
  }
  return v3;
}
