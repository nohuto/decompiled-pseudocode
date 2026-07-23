/*
 * XREFs of MiVaToPfn @ 0x1402269B4
 * Callers:
 *     MiCheckKernelShadow @ 0x140226740 (MiCheckKernelShadow.c)
 *     MiGetPhysicalAddress @ 0x140226874 (MiGetPhysicalAddress.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiInitializeShadowPageTable @ 0x1407A0568 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  memset(v13, 0, 32);
  MiFillPteHierarchy(a1, v13);
  v2 = 4;
  v3 = 4LL;
  do
  {
    v4 = *(_QWORD *)&v13[8 * v3-- - 8];
    --v2;
    v5 = MI_READ_PTE_LOCK_FREE(v4);
    v14 = v5;
  }
  while ( v3 && (v5 & 0x80u) == 0LL );
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL;
  if ( v2 )
  {
    v7 = 1LL;
    v8 = a1 >> 12;
    do
    {
      v9 = v8;
      v8 >>= 9;
      v10 = v7 * (v9 & 0x1FF);
      v7 <<= 9;
      v6 += v10;
      --v2;
    }
    while ( v2 );
  }
  return v6;
}
