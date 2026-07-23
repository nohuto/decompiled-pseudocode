/*
 * XREFs of KiOpComputeLinearAddress @ 0x1405247EC
 * Callers:
 *     KiOpRetrieveRegMemAddress @ 0x1403CD570 (KiOpRetrieveRegMemAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // bl
  KPCR *Object; // rdx
  __int16 v8; // r10
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = *a2;
  v6 = *(_BYTE *)(a1 + 81);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 48));
  Object = 0LL;
  v8 = *(_WORD *)(*(unsigned int *)&KiOpSegmentOffsetTable[2 * a1] + *(_QWORD *)(v3 + 24));
  if ( 1 << a1 == 32 )
  {
    if ( v6 )
    {
      Object = (KPCR *)CurrentThread[1].WaitBlock[2].Object;
      if ( !Object )
      {
        v10 = KeGetCurrentThread();
        if ( (v10->MiscFlags & 0x400) != 0 || v10->ApcStateIndex == 1 )
          Object = 0LL;
        else
          Object = (KPCR *)v10->Teb;
      }
    }
    else
    {
      Object = KeGetPcr();
    }
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    Object = (KPCR *)CurrentThread[1].WaitBlock[2].Thread;
    if ( !Object )
    {
      v11 = KeGetCurrentThread();
      if ( (v11->MiscFlags & 0x400) != 0 || v11->ApcStateIndex == 1 )
        Object = 0LL;
      else
        Object = (KPCR *)v11->Teb;
      if ( Object )
        Object = (KPCR *)((char *)Object + 0x2000);
    }
    goto LABEL_4;
  }
  if ( v6 != 1 || !*(_BYTE *)(v3 + 58) || ((v8 - 35) & 0xFFE7) == 0 && v8 != 59 )
  {
LABEL_4:
    *a2 = (__int64)Object + v5;
    return 0LL;
  }
  *a2 = 0x7FFFFFFF0000LL;
  return 3221225477LL;
}
