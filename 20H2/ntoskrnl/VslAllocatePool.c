/*
 * XREFs of VslAllocatePool @ 0x1404FA338
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x140393C58 (VslpLockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(SIZE_T NumberOfBytes, ULONG Tag, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  ULONG v7; // ebx
  struct _MDL *PoolWithTag; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // ebx

  v7 = NumberOfBytes;
  if ( NumberOfBytes > 0x1FA000 )
    return 3221225659LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x54736D56u);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741670;
LABEL_9:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v12;
  }
  v12 = VslpLockPagesForTransfer((__int64)v10, PoolWithTag, v7, 1, 0);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_9;
  }
  *a3 = v11[7];
  *a4 = *v11;
  *a5 = v11;
  return 0LL;
}
