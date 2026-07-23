/*
 * XREFs of IopGetRelatedFileName @ 0x1405D87C8
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetRelatedFileName(__int64 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  _DWORD *v4; // rsi
  int v5; // r13d
  const void **v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  const void **PoolWithTag; // rax
  int NameStringMode; // eax
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  int FileInformation; // eax
  unsigned int v16; // ecx
  PVOID v17; // rax
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v7 = 256;
  v19[0] = 0;
  v8 = 256;
  do
  {
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      v6 = 0LL;
    }
    if ( v8 >= 0xFFFF )
    {
      v13 = -1073741562;
      goto LABEL_21;
    }
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v8, 0x63466F49u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v8);
    NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a1 + 8), (_DWORD)v6, v8, (unsigned int)v19, 0);
    v13 = NameStringMode;
    v8 = v19[0] + 8;
    if ( a4 )
      *a4 = *(_WORD *)v6;
  }
  while ( NameStringMode == -2147483643 );
  if ( NameStringMode >= 0 )
  {
    do
    {
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v4 = 0LL;
      }
      if ( v7 >= 0xFFFF )
        goto LABEL_26;
      v14 = ExAllocatePoolWithTag(PagedPool, v7, 0x63466F49u);
      v4 = v14;
      if ( !v14 )
      {
        v13 = -1073741670;
        goto LABEL_21;
      }
      memset(v14, 0, v7);
      FileInformation = IopGetFileInformation(*(PADAPTER_OBJECT *)(a1 + 64), (__int64)v19);
      v13 = FileInformation;
      v7 = *v4 + 8;
    }
    while ( FileInformation == -2147483643 );
    if ( FileInformation < 0 )
      goto LABEL_19;
    v16 = v5 + *v4 + *(unsigned __int16 *)v6;
    if ( v16 >= 0xFFFF )
    {
LABEL_26:
      v13 = -1073741562;
      goto LABEL_19;
    }
    *(_WORD *)(a2 + 2) = v16;
    *(_WORD *)a2 = v16 - v5;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x63466F49u);
    *(_QWORD *)(a2 + 8) = v17;
    if ( v17 )
    {
      memmove(v17, v6[1], *(unsigned __int16 *)v6);
      memmove((void *)(*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)v6), v4 + 1, (unsigned int)*v4);
    }
    else
    {
      v13 = -1073741670;
    }
LABEL_19:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v13;
}
