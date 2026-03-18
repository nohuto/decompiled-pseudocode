/*
 * XREFs of MiSlowRotateCopy @ 0x1405952D8
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetPteMappingSet @ 0x1402E8000 (MiGetPteMappingSet.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x14059508C (MiInitializeSlowPte.c)
 *     MiReturnPteMappingSet @ 0x1405B2504 (MiReturnPteMappingSet.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rsi
  int v5; // edx
  char result; // al
  int v7; // ebp
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  int v13; // edi
  BOOL v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v18; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v17 = 0LL;
  v18 = 0LL;
  v5 = *(_DWORD *)(a3 + 48) & 0xC00;
  result = v5 == 3072;
  if ( (*(_DWORD *)(a3 + 48) & 0x380) != 0 && v5 == 3072 )
    v7 = 2;
  else
    v7 = v5 != 1024;
  if ( v4 )
  {
    v8 = a1 - (_QWORD)v3;
    do
    {
      MiGetPteMappingSet(1, 2uLL, (__int64)&v17);
      v9 = (unsigned __int64)v18;
      v10 = (__int64)(v18 + 1);
      MiInitializeSlowPte(v18, *v3, v7);
      MiInitializeSlowPte((unsigned __int64 *)v10, *(unsigned __int64 *)((char *)v3 + v8 + 48), v7);
      KeCopyPage(v10 << 25 >> 16, (__int64)(v9 << 25) >> 16);
      v11 = ZeroPte;
      if ( !MiPteInShadowRange(v9) )
        goto LABEL_15;
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
          v11 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v9 = v11;
        MiWritePteShadow(v9, v11);
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v9 = (unsigned __int64)v18;
          if ( (ZeroPte & 1) != 0 )
            v11 = ZeroPte | 0x8000000000000000uLL;
LABEL_15:
          *(_QWORD *)v9 = v11;
          goto LABEL_16;
        }
        *v18 = ZeroPte;
      }
LABEL_16:
      v12 = ZeroPte;
      v13 = 0;
      v14 = MiPteInShadowRange(v10);
      v15 = 0LL;
      if ( v14 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v13 = v15 + 1;
          if ( HIBYTE(word_140C51864) == (_BYTE)v15 )
          {
            v16 = ((unsigned __int8)ZeroPte & (unsigned __int8)v13) == 0;
            goto LABEL_23;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (ZeroPte & 1) == 0;
LABEL_23:
          if ( !v16 )
            v12 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = v12;
      if ( v13 )
        MiWritePteShadow(v10, v12);
      result = MiReturnPteMappingSet(&v17, v15);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
