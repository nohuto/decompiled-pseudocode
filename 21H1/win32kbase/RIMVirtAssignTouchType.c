/*
 * XREFs of RIMVirtAssignTouchType @ 0x1C01688F4
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMVirtAssignTouchType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 312) & 0xFFFFFFFD | (*(_DWORD *)(a3 + 484) != 0 ? 2 : 0);
  *(_DWORD *)(a1 + 312) = v5;
  *(_WORD *)(a1 + 728) = *(_WORD *)(a3 + 1104);
  v6 = v5 & 0xFFFFFFDF | (*(_DWORD *)(a3 + 500) != 0 ? 0x20 : 0);
  *(_DWORD *)(a1 + 312) = v6;
  if ( (v6 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 712) = 0LL;
    return 0LL;
  }
  v7 = Win32AllocPoolZInit(0x28uLL, 0x71707352u);
  *(_QWORD *)(a1 + 712) = v7;
  v10 = (__int64)v7;
  *(_DWORD *)(a1 + 24) = 3;
  if ( v7 )
  {
    LODWORD(v17) = *(_DWORD *)(a3 + 1056);
    WORD2(v17) = *(_WORD *)(a3 + 1060);
    WORD3(v17) = *(_WORD *)(a3 + 1064);
    WORD4(v17) = *(_WORD *)(a3 + 1068);
    WORD5(v17) = *(_WORD *)(a3 + 1072);
    HIDWORD(v17) = *(_DWORD *)(a3 + 1076);
    LODWORD(v19) = *(_DWORD *)(a3 + 1088) != 0;
    v11 = *(_DWORD *)(a3 + 1092);
    *(_OWORD *)v10 = v17;
    HIDWORD(v19) = v11;
    *(_OWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 32) = v19;
    *(_QWORD *)(*(_QWORD *)(a1 + 712) + 16LL) = Win32AllocPoolZInit(
                                                  24LL * *(unsigned int *)(*(_QWORD *)(a1 + 712) + 12LL),
                                                  0x71707352u);
    v10 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v10 + 16) )
    {
      v12 = 0LL;
      if ( *(_DWORD *)(v10 + 12) )
      {
        do
        {
          v13 = *(_QWORD *)(a3 + 1080) + 48 * v12;
          LOWORD(v18) = *(_WORD *)v13;
          WORD1(v18) = *(_WORD *)(v13 + 4);
          WORD2(v18) = *(_WORD *)(v13 + 8);
          WORD3(v18) = *(_WORD *)(v13 + 12);
          WORD4(v18) = *(_WORD *)(v13 + 16);
          WORD5(v18) = *(_WORD *)(v13 + 20);
          HIDWORD(v18) = (*(_DWORD *)(v13 + 32) << 9) | (unsigned __int8)*(_DWORD *)(v13 + 24) | (*(_DWORD *)(v13 + 28) != 0
                                                                                                ? 0x100
                                                                                                : 0);
          v14 = 3 * v12;
          v12 = (unsigned int)(v12 + 1);
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 16LL);
          *(_OWORD *)(v15 + 8 * v14) = v18;
          *(_QWORD *)(v15 + 8 * v14 + 16) = 0LL;
        }
        while ( (unsigned int)v12 < *(_DWORD *)(*(_QWORD *)(a1 + 712) + 12LL) );
      }
      return 0LL;
    }
  }
  if ( v10 )
  {
    Win32FreePool(v10, v8, v9);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  return 3221225628LL;
}
