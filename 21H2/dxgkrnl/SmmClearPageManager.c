/*
 * XREFs of SmmClearPageManager @ 0x1C006D7E8
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03BFF78 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     SmmIoMmuDeleteTreeNode @ 0x1C006D9DC (SmmIoMmuDeleteTreeNode.c)
 */

void __fastcall SmmClearPageManager(volatile LONG *a1)
{
  KIRQL v2; // al
  struct _SLIST_ENTRY *v3; // r8
  KIRQL v4; // bp
  struct _SLIST_ENTRY *v5; // rcx
  struct _SLIST_ENTRY *v6; // rax
  struct _SLIST_ENTRY *Next; // rbx
  unsigned __int64 v8; // rbx

  v2 = ExAcquireSpinLockExclusive(a1 + 2);
  v3 = *(struct _SLIST_ENTRY **)a1;
  v4 = v2;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v3->Next )
        {
          v5 = v3;
          v3 = v3->Next;
          v5->Next = 0LL;
        }
        if ( !*((_QWORD *)&v3->Next + 1) )
          break;
        v6 = v3;
        v3 = (struct _SLIST_ENTRY *)*((_QWORD *)&v3->Next + 1);
        *((_QWORD *)&v6->Next + 1) = 0LL;
      }
      Next = v3[1].Next;
      SmmIoMmuDeleteTreeNode(v3);
      v8 = (unsigned __int64)Next & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v3 = (struct _SLIST_ENTRY *)v8;
    }
  }
  *(_QWORD *)a1 = 0LL;
  ExReleaseSpinLockExclusive(a1 + 2, v4);
}
