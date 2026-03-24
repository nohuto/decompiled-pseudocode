/*
 * XREFs of MiCreateMdl @ 0x1406D3A74
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402D6A20 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x1406D4ED4 (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(ULONG_PTR *a1, int a2, SIZE_T a3, int a4)
{
  ULONG v4; // edi
  SIZE_T v5; // rbp
  PMDL Mdl; // rax
  struct _MDL *v9; // rdi
  SIZE_T v10; // rsi
  _QWORD *p_Next; // r14
  __int64 PageForHeader; // rax
  PVOID MappedSystemVa; // rax
  PVOID Pool; // rax
  void *v16; // rbx
  struct _MDL *v17; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v9 = Mdl;
    if ( Mdl )
    {
      v10 = 0LL;
      p_Next = &Mdl[1].Next;
      if ( v5 )
      {
        while ( 1 )
        {
          PageForHeader = MiGetPageForHeader(a1, a2);
          if ( PageForHeader == -1 )
            break;
          if ( !v10 )
            v9->MdlFlags |= 0x4002u;
          *p_Next = PageForHeader;
          ++v10;
          ++p_Next;
          if ( v10 >= v5 )
            goto LABEL_8;
        }
        v9->ByteCount = (_DWORD)v10 << 12;
        goto LABEL_16;
      }
LABEL_8:
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
      {
LABEL_16:
        MiDeleteImageCreationMdls(v9);
        return 0LL;
      }
      return v9;
    }
  }
  else
  {
    Pool = MiAllocatePool(64, a3, 0x78786D4Du);
    v16 = Pool;
    if ( Pool )
    {
      v17 = IoAllocateMdl(Pool, v4, 0, 0, 0LL);
      v9 = v17;
      if ( !v17 )
      {
        ExFreePoolWithTag(v16, 0);
        return 0LL;
      }
      MmBuildMdlForNonPagedPool(v17);
      v9->MdlFlags |= 0x4000u;
      return v9;
    }
  }
  return 0LL;
}
