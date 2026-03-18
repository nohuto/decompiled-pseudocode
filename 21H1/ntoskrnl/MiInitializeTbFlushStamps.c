/*
 * XREFs of MiInitializeTbFlushStamps @ 0x140223C50
 * Callers:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  if ( (unsigned int)MiPteInShadowRange(a1, a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      v10 = v2 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v2;
      v2 = v10;
      if ( (v9 & 0x42) != 0 )
        v2 = v10 | 0x42;
    }
  }
  _InterlockedOr(v11, 0);
  if ( v2 && qword_140C4DE80 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140C4DE80 & v2;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v2);
  v6 = (unsigned __int64)result;
  if ( !v7 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v5, result) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v6 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v6 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *a1 = v6;
    return result;
  }
  if ( !HIBYTE(word_140C4DF48) && (v6 & 1) != 0 )
    v6 |= 0x8000000000000000uLL;
  *a1 = v6;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v6);
}
