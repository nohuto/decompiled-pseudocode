/*
 * XREFs of ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18015B904
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18015B820 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x18015BA34 (-Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z.c)
 */

__int64 __fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeThem<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        CCompareRecoveredWindows *a4)
{
  unsigned __int64 v4; // rdi
  char *v6; // rbp
  size_t v7; // rbx
  CCompareRecoveredWindows *v8; // rcx
  const struct ENUMERATED_WINDOW *v9; // r15
  char v10; // si
  __int64 v11; // rdi
  __int64 v12; // r12
  int v13; // eax
  char *v14; // rcx
  const struct ENUMERATED_WINDOW *v15; // rdx
  __int64 result; // rax
  const void *v17; // rdx
  __int64 v18; // [rsp+70h] [rbp+8h]
  CCompareRecoveredWindows *v19; // [rsp+78h] [rbp+10h]
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]

  v4 = (unsigned __int64)a4 >> 1;
  v6 = (char *)(*(_QWORD *)a1 + 16 * a3);
  v7 = 16 * ((unsigned __int64)a4 >> 1);
  v20 = (unsigned __int64)a4 >> 1;
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v18 = 0LL;
  v9 = (const struct ENUMERATED_WINDOW *)&v6[v7];
  v19 = (CCompareRecoveredWindows *)v4;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    v13 = CCompareRecoveredWindows::Compare(v8, (const struct ENUMERATED_WINDOW *)(v12 + *(_QWORD *)(a1 + 16)), v9);
    v14 = &v6[16 * v11];
    if ( v13 <= 0 )
    {
      v12 += 16LL;
      v17 = (const void *)(*(_QWORD *)(a1 + 16) + 16 * v18++);
      memmove_0(v14, v17, 0x10uLL);
      result = 1LL;
      if ( v18 == v20 )
        v10 = 1;
    }
    else
    {
      v19 = (CCompareRecoveredWindows *)((char *)v19 + 1);
      v15 = v9;
      v9 = (const struct ENUMERATED_WINDOW *)((char *)v9 + 16);
      result = (__int64)memmove_0(v14, v15, 0x10uLL);
      v8 = a4;
      if ( v19 == a4 )
      {
        result = (__int64)memcpy_0(
                            &v6[16 * v11 + 16],
                            (const void *)(v12 + *(_QWORD *)(a1 + 16)),
                            16LL * (_QWORD)((char *)a4 - v11 - 1));
        v10 = 1;
      }
    }
    ++v11;
  }
  while ( !v10 );
  return result;
}
