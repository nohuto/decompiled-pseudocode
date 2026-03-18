/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140371824
 * Callers:
 *     MiFindPagesForMdl @ 0x1403429A8 (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiGetEnclavePage @ 0x140544BB8 (MiGetEnclavePage.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  BOOL v25; // eax
  __int64 v26; // rcx
  ULONG_PTR v27; // rdi
  int v28; // eax
  int v29; // edi
  int v30; // edi
  unsigned int v31; // esi
  unsigned int v33; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v35; // [rsp+30h] [rbp-58h]
  __int128 v36; // [rsp+38h] [rbp-50h] BYREF
  int v41; // [rsp+C0h] [rbp+38h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = a1;
  v36 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v36);
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v36, 1u);
  v13 = 8;
  v14 = HIDWORD(v36) | v12 & DWORD2(v36);
  v15 = -1;
  v33 = v14;
  v17 = *(unsigned int *)(a2 + 40);
  v18 = v11 & 0x400;
  *(_QWORD *)&v36 = KiProcessorBlock[*(unsigned int *)(v16 + 588)];
  v34 = v18;
  v35 = (unsigned __int64 *)(a2 + 48 + 8 * (v17 >> 12));
  v19 = 1;
  v41 = 1;
  while ( 1 )
  {
    if ( v19 == 1 )
    {
      v41 = 0;
      v13 = 2 * ((v11 & 1) == 0) + 8;
    }
    if ( v18 )
      EnclavePage = MiGetEnclavePage(v10, 0LL);
    else
      EnclavePage = MiGetPage(v10, v14, v13);
    v23 = EnclavePage;
    if ( EnclavePage == -1LL )
    {
      v14 = v33;
LABEL_21:
      v31 = 1;
      goto LABEL_22;
    }
    v24 = 48 * EnclavePage - 0x58000000000LL;
    if ( EnclavePage > a5 )
      break;
    v25 = MiPfnZeroingNeeded(v24, a4);
    v26 = v9 + 1;
    if ( !v25 )
      v26 = v9;
    v9 = v26;
    if ( v15 == -1 )
      v15 = *((_DWORD *)MiSearchNumaNodeTable((v24 + 0x58000000000LL) / 48) + 2);
    v27 = (v24 + 0x58000000000LL) / 48;
    if ( *((_DWORD *)MiSearchNumaNodeTable(v27) + 2) == v15 )
    {
      if ( (*(_DWORD *)(v24 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else
      {
        v28 = v13 | 2;
        if ( (a3 & 1) == 0 )
          v28 = v13;
        v13 = v28;
      }
    }
    else
    {
      v41 = 1;
    }
    ++v8;
    v15 = *((_DWORD *)MiSearchNumaNodeTable(v27) + 2);
    *v35++ = v23;
    v29 = *((_DWORD *)MiSearchNumaNodeTable(v27) + 2);
    v30 = ((unsigned int)MiGetPfnChannel(v24) << byte_140C4DDCD) | dword_140C4DE38 & v23 | (v29 << byte_140C4DDCC);
    v14 = v30 & ~dword_140C4DDC0 | dword_140C4DDC0 & (v30 + 1);
    v33 = v14;
    if ( v8 >= a6 )
      goto LABEL_21;
    v19 = v41;
    LOBYTE(v11) = a3;
    v10 = a1;
    v18 = v34;
  }
  MiReleaseFreshPage(v24, v21, v22);
  v14 = v33;
  v31 = 0;
LABEL_22:
  if ( v8 )
    *(_DWORD *)(v36 + 32528) = v14;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v31;
}
