/*
 * XREFs of BiAddBootEntryToNvramDisplayOrder @ 0x1409704E0
 * Callers:
 *     BiBindEfiEntries @ 0x140970808 (BiBindEfiEntries.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     BiQueryBootEntryOrder @ 0x140972A3C (BiQueryBootEntryOrder.c)
 *     BiSetBootEntryOrder @ 0x140972CA4 (BiSetBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToNvramDisplayOrder(__int64 a1)
{
  ULONG *v2; // rdi
  int v3; // eax
  void *v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rbx
  ULONG *PoolWithTag; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  Src = 0LL;
  v2 = 0LL;
  v3 = BiQueryBootEntryOrder(&Src, &v9);
  v4 = Src;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = 0LL;
    if ( v9 )
    {
      while ( *((_DWORD *)Src + v6) != *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)(v6 + 1), 0x4B444342u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (_DWORD)v6 )
          memmove(PoolWithTag + 1, v4, 4LL * (unsigned int)v6);
        *v2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        v5 = BiSetBootEntryOrder(v2, (int)v6 + 1);
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
