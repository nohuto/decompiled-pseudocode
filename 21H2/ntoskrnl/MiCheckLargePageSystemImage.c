/*
 * XREFs of MiCheckLargePageSystemImage @ 0x140A68DE0
 * Callers:
 *     MiCheckLargePageOk @ 0x140A68C78 (MiCheckLargePageOk.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiCheckLargePageSystemImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 ***v6; // r14
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v8; // rbx
  __int64 **v9; // rdx
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  ULONG_PTR v13; // [rsp+58h] [rbp+10h] BYREF

  result = 0xFFFFF6FB40000000uLL;
  v4 = ((*(_QWORD *)(a2 + 48) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  v5 = (((*(_QWORD *)(a2 + 48) + (unsigned __int64)*(unsigned int *)(a2 + 64) - 1) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  if ( v4 <= v5 )
  {
    v6 = (__int64 ***)(BugCheckParameter2 + 32);
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v4);
      v13 = BugCheckParameter4;
      v8 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 0x80u) == 0LL )
        KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v4, BugCheckParameter4);
      if ( MiPteInShadowRange((unsigned __int64)&v13)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v13 >> 3) & 0x1FF)) & 0x20) != 0 )
            v8 |= 0x20uLL;
        }
      }
      v9 = *v6;
      result = 0xFFFFFFFFFLL;
      v10 = (v8 >> 12) & 0xFFFFFFFFFLL;
      while ( v9 != (__int64 **)v6 )
      {
        v11 = (ULONG_PTR)v9[3];
        if ( v11 <= v10 )
        {
          result = v10 + 512;
          if ( (unsigned __int64)v9[4] + v11 >= v10 + 512 )
          {
            result = *((int *)v9 + 4);
            if ( (_DWORD)result != 9 )
              KeBugCheckEx(0x1Au, 0x3030208uLL, BugCheckParameter2, v10, *((int *)v9 + 4));
            break;
          }
        }
        v9 = (__int64 **)*v9;
      }
      if ( v9 == (__int64 **)v6 )
        KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v10, 0LL);
      v4 += 8LL;
    }
    while ( v4 <= v5 );
  }
  return result;
}
