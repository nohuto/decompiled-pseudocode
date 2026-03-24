/*
 * XREFs of MiInitializeTbFlushStamps @ 0x1402967E0
 * Callers:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402964D0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

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
      v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      v11 = v2 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v2;
      v2 = v11;
      if ( (v10 & 0x42) != 0 )
        v2 = v11 | 0x42;
    }
  }
  _InterlockedOr(v12, 0);
  if ( v2 && qword_140C4DF40 )
  {
    if ( (v2 & 0x10) != 0 )
      LODWORD(v2) = v2 & 0xFFFFFFEF;
    else
      LODWORD(v2) = ~(_DWORD)qword_140C4DF40 & v2;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v2);
  v8 = (unsigned __int64)result;
  if ( !(_DWORD)v6 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v5, result, v6, v7) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v8 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v8 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *a1 = v8;
    return result;
  }
  if ( !HIBYTE(word_140C4E008) && (v8 & 1) != 0 )
    v8 |= 0x8000000000000000uLL;
  *a1 = v8;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v8);
}
