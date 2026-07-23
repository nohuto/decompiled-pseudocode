/*
 * XREFs of MxCreatePfns @ 0x140A57C60
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140A5768C (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x140A57C60 (MxCreatePfns.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MxCreatePfns @ 0x140A57C60 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x140A57F34 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x140A58070 (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v5; // edi
  unsigned __int64 i; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int16 v15; // di
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int16 v20; // di
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r15
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v27; // rdx
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  int v30; // [rsp+80h] [rbp+18h]

  if ( a1 <= a2 )
  {
    v30 = a3;
    v5 = a3;
    for ( i = a1; i <= a2; i += 8LL )
    {
      v8 = MI_READ_PTE_LOCK_FREE(i);
      v28 = v8;
      v9 = v8;
      if ( (v8 & 1) != 0 )
      {
        v10 = v8;
        if ( MiPteInShadowRange((unsigned __int64)&v28) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v10 |= 0x20uLL;
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v28 >> 3) & 0x1FF)) & 0x20) == 0 )
                v10 = v9;
            }
          }
          v9 = v28;
        }
        v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
        v29 = MI_READ_PTE_LOCK_FREE(((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = v29;
        if ( MiPteInShadowRange((unsigned __int64)&v29) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v12 & 1) != 0
            && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v27 )
            {
              if ( ((__int64)*(&v27->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF)) & 0x20) != 0 )
                v12 |= 0x20uLL;
            }
          }
          v9 = v28;
        }
        v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(48 * v13 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v13 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v13 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v5 )
        {
          if ( (v9 & 0x80u) == 0LL )
          {
            MxCreatePfn(v11, i, v9, v13, 0, 0);
            if ( i != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(i << 25) >> 16, ((__int64)(i << 25) >> 16) + 4088, (unsigned int)(v5 - 1), a4);
            continue;
          }
          v19 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
          v20 = v19 | 0x800;
          if ( (v19 & 0x42) == 0 )
            v20 = v19;
          v21 = v19 | 0x800;
          v22 = ((unsigned __int16)((unsigned __int8)word_140C4E048 << 8) ^ v20) & 0x100;
          if ( (v19 & 0x42) == 0 )
            v21 = v19;
          v23 = v21 ^ v22;
          MiWriteValidPteNewProtection(i, v23);
          v24 = (__int64)(i << 25) >> 16;
          v25 = v24 + 4096;
          while ( v24 < v25 )
          {
            if ( (unsigned int)MiIsRegularMemory(a4, v11) )
              MxCreatePfn(v11, v24, v23, v13, 1, 1);
            ++v11;
            v24 += 8LL;
          }
        }
        else
        {
          v14 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
          v15 = v14 | 0x800;
          if ( (v14 & 0x42) == 0 )
            v15 = v14;
          v16 = v14 | 0x800;
          v17 = ((unsigned __int16)((unsigned __int8)word_140C4E048 << 8) ^ v15) & 0x100;
          if ( (v14 & 0x42) == 0 )
            v16 = v14;
          v18 = v16 ^ v17;
          MiWriteValidPteNewProtection(i, v18);
          if ( (unsigned int)MiIsRegularMemory(a4, v11) )
            MxCreatePfn(v11, i, v18, v13, 0, 1);
        }
        v5 = v30;
      }
    }
  }
}
