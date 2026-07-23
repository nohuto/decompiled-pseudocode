/*
 * XREFs of HalpDmaCheckMdlAccessibility @ 0x14039FB08
 * Callers:
 *     HalMapTransferEx @ 0x14039F830 (HalMapTransferEx.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2E80 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14020ED00 (IoBuildPartialMdl.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 */

char *__fastcall HalpDmaCheckMdlAccessibility(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        ULONG a4,
        char *a5,
        PMDL *a6)
{
  unsigned int v8; // r10d
  _QWORD *v9; // rbx
  char v11; // r15
  char *result; // rax
  __int64 v13; // r9
  ULONG v14; // edi
  unsigned int v15; // r13d
  int v16; // eax
  PMDL Mdl; // rax
  struct _MDL *v18; // r14
  unsigned int v20; // ecx
  ULONG v21; // eax
  struct _MDL *Next; // rbx
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *p_Next; // [rsp+98h] [rbp+30h]

  v8 = a3;
  v9 = a2;
  *a6 = 0LL;
  p_Next = 0LL;
  if ( KeGetCurrentIrql() > 2u || *(_BYTE *)(a1 + 437) )
  {
LABEL_3:
    if ( *a6 )
    {
      do
      {
        Next = (*a6)->Next;
        IoFreeMdl(*a6);
        *a6 = Next;
      }
      while ( Next );
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a2 )
    {
      while ( a4 )
      {
        v13 = *((unsigned int *)v9 + 11);
        v14 = *((_DWORD *)v9 + 10) - v8;
        if ( v14 >= a4 )
          v14 = a4;
        v15 = v13 + v8;
        if ( !*(_BYTE *)(a1 + 437) )
        {
          v16 = HalpDmaGetAdapterCacheAlignment(a1, a2, a3) - 1;
          if ( (v16 & v15) != 0 || (v14 & v16) != 0 )
            goto LABEL_3;
        }
        VirtualAddress = (PVOID)(v8 + v13 + v9[4]);
        Mdl = IoAllocateMdl(VirtualAddress, v14, 0, 0, 0LL);
        v18 = Mdl;
        if ( !Mdl )
          goto LABEL_3;
        if ( *a6 )
          *p_Next = Mdl;
        else
          *a6 = Mdl;
        p_Next = &Mdl->Next;
        if ( !((*((_BYTE *)v9 + 10) & 5) != 0
             ? (PVOID)v9[3]
             : MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000020u)) )
          goto LABEL_3;
        IoBuildPartialMdl((PMDL)v9, v18, VirtualAddress, v14);
        v20 = 4096 - (v15 & 0xFFF);
        a2 = &v9[((unsigned __int64)v15 >> 12) + 6];
        if ( v14 )
        {
          a3 = *(_QWORD *)(a1 + 136);
          while ( a3 >= *a2 << 12 || *(_DWORD *)(a1 + 512) == 2 )
          {
            ++a2;
            v21 = v14;
            if ( v14 >= v20 )
              v21 = v20;
            v20 = 4096;
            a4 -= v21;
            v14 -= v21;
            if ( !v14 )
              goto LABEL_28;
          }
          goto LABEL_3;
        }
LABEL_28:
        v9 = (_QWORD *)*v9;
        v8 = 0;
        if ( !v9 )
          break;
      }
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}
