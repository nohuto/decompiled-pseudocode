/*
 * XREFs of MiAllocateInPageSupport @ 0x1402B7B20
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 */

PSLIST_ENTRY __fastcall MiAllocateInPageSupport(unsigned __int64 a1, char a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  char v9; // bl
  char v10; // cl
  PSLIST_ENTRY result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _SLIST_ENTRY *v15; // rdi
  __int64 v16; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = MiGetInPageSupportBlock(v10);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(v7, v12, v13, v14);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v15 = MiGetInPageSupportBlock(v9);
    if ( v15 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return v15;
    *a3 = 16;
    v15 = MiGetInPageSupportBlock(v9 & 0xFE);
    if ( v15 )
    {
LABEL_15:
      if ( a4 )
      {
        v16 = MiLockProtoPoolPage(a1, 0LL);
        if ( !v16 )
        {
          MiFreeInPageSupportBlock(v15);
          return 0LL;
        }
        *a4 = v16;
      }
      return v15;
    }
    return 0LL;
  }
  return result;
}
