/*
 * XREFs of PopPlInitDevice @ 0x1408F629C
 * Callers:
 *     PopPlInitDevices @ 0x1408F63B8 (PopPlInitDevices.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     PopPlInitComponents @ 0x1408F6168 (PopPlInitComponents.c)
 *     PopPlInitWString @ 0x1408F663C (PopPlInitWString.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPlInitDevice(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  __int64 v5; // rbx
  int inited; // edi
  PVOID PoolWithTag; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8

  v5 = 0LL;
  if ( a2 + 44 <= a4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6C506F50u);
    v5 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x58uLL);
      inited = PopPlInitWString((PUNICODE_STRING)v5);
      if ( inited < 0 )
        goto LABEL_9;
      *(_QWORD *)(v5 + 16) = a1;
      v12 = (_QWORD *)(v5 + 36);
      v13 = 4LL;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + a2 - v5 - 32);
        ++v12;
        --v13;
      }
      while ( v13 );
      inited = PopPlInitComponents(
                 v5,
                 (__int128 *)(a3 + *(unsigned int *)(a2 + 40)),
                 *(unsigned int *)(a2 + 36),
                 a3,
                 a4,
                 (unsigned __int64 *)(v5 + 72),
                 (_QWORD *)(v5 + 80));
      if ( inited < 0 )
      {
LABEL_9:
        ExFreePoolWithTag((PVOID)v5, 0x6C506F50u);
        v5 = 0LL;
      }
    }
    else
    {
      inited = -1073741670;
    }
  }
  else
  {
    inited = -1073741306;
  }
  *a5 = v5;
  return (unsigned int)inited;
}
