/*
 * XREFs of MiInitializeTbFlushStamps @ 0x14021B0C0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r8d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *a1;
  if ( (unsigned int)MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a1 >> 3) & 0x1FF));
      v9 = v1 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v1;
      v1 = v9;
      if ( (v8 & 0x42) != 0 )
        v1 = v9 | 0x42;
    }
  }
  _InterlockedOr(v10, 0);
  if ( v1 && qword_140C4DF80 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_140C4DF80 & v1;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v1);
  v5 = (unsigned __int64)result;
  if ( !v6 )
    goto LABEL_4;
  if ( !(unsigned int)MiPteHasShadow(v4, result) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v5 |= 0x8000000000000000uLL;
    }
LABEL_4:
    *a1 = v5;
    return result;
  }
  if ( !HIBYTE(word_140C4E048) && (v5 & 1) != 0 )
    v5 |= 0x8000000000000000uLL;
  *a1 = v5;
  return (struct _KTHREAD *)MiWritePteShadow(a1);
}
