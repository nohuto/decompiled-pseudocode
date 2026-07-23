/*
 * XREFs of MiZeroWithSystemPtes @ 0x1403F5238
 * Callers:
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiZeroMemory @ 0x140297934 (MiZeroMemory.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     memset @ 0x140414300 (memset.c)
 */

unsigned __int64 __fastcall MiZeroWithSystemPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 PfnPageSizeIndex; // rax
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // rbx
  unsigned __int8 *v8; // rdi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v14; // r13
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned __int64 i; // rcx
  _KPROCESS *v19; // rdx
  __int64 v20; // [rsp+28h] [rbp-120h]
  unsigned __int64 v21; // [rsp+30h] [rbp-118h]
  _QWORD v22[24]; // [rsp+40h] [rbp-108h] BYREF

  if ( (*(_QWORD *)(a3 + 40) & 0x1000000000LL) == 0 )
    goto LABEL_6;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3);
  if ( (_DWORD)PfnPageSizeIndex == -1 )
    PfnPageSizeIndex = 3LL;
  if ( (unsigned int)PfnPageSizeIndex < 3 )
    v6 = MiLargePageSizes[PfnPageSizeIndex];
  else
LABEL_6:
    v6 = 1LL;
  v7 = (a3 + 0x58000000000LL) / 48;
  if ( !a1 )
  {
    if ( v6 )
    {
      v8 = (unsigned __int8 *)(a3 + 34);
      do
      {
        MiZeroPhysicalPage(v7++, 1, *v8 >> 6);
        v8 += 48;
        --v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
  v10 = a2;
  v11 = (_QWORD *)a1;
  if ( a2 >= v6 )
    v10 = v6;
  v21 = v10;
  v12 = (__int64)(a1 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  v14 = 0LL;
  ValidPte = MiMakeValidPte(a1, v7, ProtectionPfnCompatible | 0xA0000000);
  v20 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v16 = ValidPte;
      if ( !MiPteInShadowRange((unsigned __int64)v11) )
        goto LABEL_23;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      v17 = 1;
      if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
        v16 = ValidPte | 0x8000000000000000uLL;
LABEL_24:
      *v11 = v16;
      if ( v17 )
        MiWritePteShadow((__int64)v11, v16);
      ++v11;
      ++v14;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      if ( v14 == a2 )
      {
        memset(v22, 0, 0xB8uLL);
        MiZeroMemory(v12, (__int64)((__int64)v11 - a1) >> 3 << 12);
        if ( v20 + 1 == v6 )
        {
          v12 = 0LL;
          goto LABEL_34;
        }
        for ( i = 0LL; i < a2; ++i )
          *(_QWORD *)(a1 + 8 * i) = ZeroPte;
        LODWORD(v22[0]) = 0;
        WORD2(v22[0]) = 0;
        v22[2] = 0LL;
        v22[3] = 0LL;
        v22[1] = 20LL;
        MiInsertTbFlushEntry((__int64)v22, v12, a2, 0);
        MiFlushTbList((__int64)v22, v19);
        v14 = 0LL;
        v11 = (_QWORD *)a1;
      }
      if ( ++v20 >= v6 )
        goto LABEL_34;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      v16 = ValidPte | 0x8000000000000000uLL;
    }
LABEL_23:
    v17 = 0;
    goto LABEL_24;
  }
LABEL_34:
  if ( v12 )
    MiZeroMemory(v12, (__int64)((__int64)v11 - a1) >> 3 << 12);
  return v21;
}
