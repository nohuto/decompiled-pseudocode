/*
 * XREFs of MiSlowRotateCopy @ 0x140539F3C
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x140539CEC (MiInitializeSlowPte.c)
 *     MiGetPteMappingPair @ 0x14056383C (MiGetPteMappingPair.c)
 *     MiReturnPteMappingPair @ 0x140563900 (MiReturnPteMappingPair.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rsi
  int v6; // edx
  bool v7; // cl
  char result; // al
  __int64 v9; // r8
  int v10; // ebp
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  int v16; // edi
  BOOL v17; // eax
  __int64 v18; // rdx
  bool v19; // zf
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v21; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v20 = 0LL;
  v21 = 0LL;
  v6 = *(_DWORD *)(a3 + 48) & 0xC00;
  v7 = (*(_DWORD *)(a3 + 48) & 0x380) != 0;
  result = v6 == 3072;
  v9 = 0LL;
  if ( v7 && v6 == 3072 )
    v10 = 2;
  else
    v10 = v6 != 1024;
  if ( v4 )
  {
    v11 = a1 - (_QWORD)v3;
    while ( 1 )
    {
      MiGetPteMappingPair(1LL, &v20, v9);
      v12 = (unsigned __int64)v21;
      v13 = (__int64)(v21 + 1);
      MiInitializeSlowPte(v21, *v3, v10);
      MiInitializeSlowPte((unsigned __int64 *)v13, *(unsigned __int64 *)((char *)v3 + v11 + 48), v10);
      KeCopyPage(v13 << 25 >> 16, (__int64)(v12 << 25) >> 16);
      v14 = ZeroPte;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_16;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
        v14 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)v12 = v14;
      MiWritePteShadow(v12, v14);
LABEL_17:
      v15 = ZeroPte;
      v16 = 0;
      v17 = MiPteInShadowRange(v13);
      v18 = 0LL;
      if ( v17 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v16 = v18 + 1;
          if ( HIBYTE(word_140C4E048) == (_BYTE)v18 )
          {
            v19 = ((unsigned __int8)ZeroPte & (unsigned __int8)v16) == 0;
            goto LABEL_23;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v19 = (ZeroPte & 1) == 0;
LABEL_23:
          if ( !v19 )
            v15 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v13 = v15;
      if ( v16 )
        MiWritePteShadow(v13, v15);
      result = MiReturnPteMappingPair(&v20, v18);
      ++v3;
      if ( !--v4 )
        return result;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      *v21 = ZeroPte;
      goto LABEL_17;
    }
    v12 = (unsigned __int64)v21;
    if ( (ZeroPte & 1) != 0 )
      v14 = ZeroPte | 0x8000000000000000uLL;
LABEL_16:
    *(_QWORD *)v12 = v14;
    goto LABEL_17;
  }
  return result;
}
