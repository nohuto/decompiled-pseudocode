/*
 * XREFs of MiInitializeTbFlushStamps @ 0x1403018E0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v9 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v10 = v1 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v1;
      v1 = v10;
      if ( (v9 & 0x42) != 0 )
        v1 = v10 | 0x42;
    }
  }
  _InterlockedOr(v11, 0);
  if ( v1 && qword_140C4DDC0 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_140C4DDC0 & v1;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v1);
  v7 = (unsigned __int64)result;
  if ( !(_DWORD)v5 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v4, result, v5, v6) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v7 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v7 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *(_QWORD *)a1 = v7;
    return result;
  }
  if ( !HIBYTE(word_140C4DE88) && (v7 & 1) != 0 )
    v7 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v7;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v7);
}
