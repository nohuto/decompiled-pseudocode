/*
 * XREFs of MiFillMapFileInfo @ 0x1408C46CC
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLogMapFileEvent @ 0x1408C48A8 (MiLogMapFileEvent.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 */

int __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  int v5; // r12d
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 *v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned __int64 *)(a2 + 16);
  v18 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = **(_QWORD **)(a1 + 72);
  v8 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( *(_QWORD *)(v7 + 64) )
  {
    v9 = MiReferenceControlAreaFile(v7);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v9 + 24);
    MiDereferenceControlAreaFile(v7, v9);
    MiGetProtoPteAddress(a1, v8, 0, &v18);
    SessionId = MmGetSessionIdEx(v6);
    v11 = *v3 ^ (MiStartingOffset(v18, *(_QWORD *)(a1 + 80), SessionId) ^ *v3) & 0xFFFFFFFFFFFFLL;
    *v3 = v11;
    if ( (v5 & 0x70) == 0x20 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xF80) == 0x380 )
      {
        v12 = v11 & 0xFF7FFFFFFFFFFFFFuLL;
        v13 = 0x40000000000000LL;
      }
      else
      {
        v12 = v11 & 0xFFBFFFFFFFFFFFFFuLL;
        v13 = 0x80000000000000LL;
      }
      v14 = v13 | v12;
    }
    else
    {
      v14 = v11 & 0xFF3FFFFFFFFFFFFFuLL;
    }
  }
  else
  {
    v14 = 0xC0000000000000LL;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 80);
  }
  *v3 = v14;
  v15 = ((unsigned __int64)(*(_DWORD *)(a1 + 64) & 0x1000000) << 29) | *v3 & 0xFFDFFFFFFFFFFFFFuLL;
  *v3 = v15;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v6 + 1088);
  *(_QWORD *)a2 = v8 << 12;
  *(_QWORD *)(a2 + 24) = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                        + 1) << 12;
  *v3 = v15 ^ (v15 ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 41)) & 0x1F000000000000LL;
  v16 = *(unsigned int *)(a1 + 52);
  LODWORD(v16) = v16 & 0x7FFFFFFF;
  *(_QWORD *)(a2 + 32) = (v16 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) << 12;
  return v16;
}
