/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140374264
 * Callers:
 *     MiFindPagesForMdl @ 0x14029542C (MiFindPagesForMdl.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiGetEnclavePage @ 0x14054A918 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int16 v11; // r11
  signed __int32 v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  int v15; // ebx
  __int64 v16; // r10
  unsigned __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  unsigned __int64 EnclavePage; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  BOOL v23; // eax
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  int v26; // eax
  int v27; // edi
  int v28; // edi
  unsigned int v29; // esi
  unsigned int v31; // [rsp+20h] [rbp-68h]
  int v32; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v33; // [rsp+30h] [rbp-58h]
  __int128 v34; // [rsp+38h] [rbp-50h] BYREF
  int v39; // [rsp+C0h] [rbp+38h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = a1;
  v34 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v34);
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v34, 1u);
  v13 = 8;
  v14 = HIDWORD(v34) | v12 & DWORD2(v34);
  v15 = -1;
  v31 = v14;
  v17 = *(unsigned int *)(a2 + 40);
  v18 = v11 & 0x400;
  *(_QWORD *)&v34 = KiProcessorBlock[*(unsigned int *)(v16 + 588)];
  v32 = v18;
  v33 = (unsigned __int64 *)(a2 + 48 + 8 * (v17 >> 12));
  v19 = 1;
  v39 = 1;
  while ( 1 )
  {
    if ( v19 == 1 )
    {
      v39 = 0;
      v13 = 2 * ((v11 & 1) == 0) + 8;
    }
    if ( v18 )
      EnclavePage = MiGetEnclavePage(v10, 0LL);
    else
      EnclavePage = MiGetPage(v10, v14, v13);
    v21 = EnclavePage;
    if ( EnclavePage == -1LL )
    {
      v14 = v31;
LABEL_21:
      v29 = 1;
      goto LABEL_22;
    }
    v22 = 48 * EnclavePage - 0x58000000000LL;
    if ( EnclavePage > a5 )
      break;
    v23 = MiPfnZeroingNeeded(v22, a4);
    v24 = v9 + 1;
    if ( !v23 )
      v24 = v9;
    v9 = v24;
    if ( v15 == -1 )
      v15 = *((_DWORD *)MiSearchNumaNodeTable((v22 + 0x58000000000LL) / 48) + 2);
    v25 = (v22 + 0x58000000000LL) / 48;
    if ( *((_DWORD *)MiSearchNumaNodeTable(v25) + 2) == v15 )
    {
      if ( (*(_DWORD *)(v22 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else
      {
        v26 = v13 | 2;
        if ( (a3 & 1) == 0 )
          v26 = v13;
        v13 = v26;
      }
    }
    else
    {
      v39 = 1;
    }
    ++v8;
    v15 = *((_DWORD *)MiSearchNumaNodeTable(v25) + 2);
    *v33++ = v21;
    v27 = *((_DWORD *)MiSearchNumaNodeTable(v25) + 2);
    v28 = ((unsigned int)MiGetPfnChannel(v22) << byte_140C4DECD) | dword_140C4DF38 & v21 | (v27 << byte_140C4DECC);
    v14 = v28 & ~dword_140C4DEC0 | dword_140C4DEC0 & (v28 + 1);
    v31 = v14;
    if ( v8 >= a6 )
      goto LABEL_21;
    v19 = v39;
    LOBYTE(v11) = a3;
    v10 = a1;
    v18 = v32;
  }
  MiReleaseFreshPage(v22);
  v14 = v31;
  v29 = 0;
LABEL_22:
  if ( v8 )
    *(_DWORD *)(v34 + 32528) = v14;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v29;
}
