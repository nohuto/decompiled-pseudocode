/*
 * XREFs of ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C0070F20
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0070C20 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0086CD0 (-CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0086F6C (-CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  struct _RTL_BALANCED_NODE *i; // rbx
  struct _RTL_BALANCED_NODE *k; // rdi
  int v6; // eax
  unsigned __int64 v7; // r9
  struct _RTL_BALANCED_NODE *v8; // rax
  struct _RTL_BALANCED_NODE *v9; // rcx
  struct _RTL_BALANCED_NODE *v10; // rdx
  struct _RTL_BALANCED_NODE *v11; // r8
  struct _RTL_BALANCED_NODE *v12; // rax
  unsigned __int64 v13; // rdx
  struct _RTL_BALANCED_NODE *v14; // rax
  struct _RTL_BALANCED_NODE *v15; // rcx
  struct _RTL_BALANCED_NODE *v16; // rcx
  struct _RTL_BALANCED_NODE *result; // rax
  int v18; // eax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  struct _RTL_BALANCED_NODE *v21; // rcx
  unsigned __int64 v22; // rax
  struct _RTL_BALANCED_NODE *j; // rax
  struct _RTL_BALANCED_NODE *v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rcx

  i = 0LL;
  if ( !*a2 && !a2[2] && a2[3] == *((_QWORD *)this + 2) )
  {
    i = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    while ( i )
    {
      v18 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, i);
      if ( v18 < 0 )
      {
        i = i->Children[0];
      }
      else
      {
        if ( v18 <= 0 )
          break;
        i = i->Children[1];
      }
    }
    if ( i )
    {
      v19 = a2[5];
      v20 = a2[6];
      do
      {
        v21 = i[1].Children[1];
        v22 = v20 & ((unsigned __int64)i[1].Children[0] + v19);
        if ( v22 < (unsigned __int64)v21 && (unsigned __int64)v21 - v22 >= a2[4] )
          break;
        v24 = i->Children[1];
        v25 = i;
        if ( v24 )
        {
          v26 = v24->Children[0];
          for ( i = i->Children[1]; v26; v26 = v26->Children[0] )
            i = v26;
        }
        else
        {
          while ( 1 )
          {
            i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || i->Children[0] == v25 )
              break;
            v25 = i;
          }
        }
      }
      while ( i );
      if ( i )
      {
        if ( (*((_DWORD *)this + 36) & 2) != 0 )
          a2[7] = v20 & ((unsigned __int64)i[1].Children[1] - a2[4]);
        else
          a2[7] = v20 & ((unsigned __int64)i[1].Children[0] + v19);
      }
    }
    goto LABEL_33;
  }
  k = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  while ( k )
  {
    v6 = CompareVadSizeLessOrEqualAvl(a2 + 4, k);
    if ( v6 < 0 )
    {
      k = k->Children[0];
    }
    else
    {
      if ( v6 <= 0 )
        break;
      k = k->Children[1];
    }
  }
  if ( !k )
  {
    for ( j = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5); j; j = j->Children[0] )
      k = j;
    if ( !k )
      goto LABEL_33;
  }
  v7 = *a2;
  while ( 1 )
  {
    v8 = k[1].Children[0];
    if ( v7 )
      break;
    v9 = (struct _RTL_BALANCED_NODE *)a2[3];
    if ( v8 < v9 )
    {
      v10 = k[1].Children[1];
      v11 = (struct _RTL_BALANCED_NODE *)a2[2];
      if ( v10 > v11 )
      {
        if ( v8 > v11 )
          v11 = k[1].Children[0];
        if ( v10 < v9 )
          v9 = k[1].Children[1];
        v12 = (*((_DWORD *)this + 36) & 2) != 0
            ? (struct _RTL_BALANCED_NODE *)((char *)v9 - a2[4])
            : (struct _RTL_BALANCED_NODE *)((char *)v11 + a2[5]);
        v13 = (unsigned __int64)v12 & a2[6];
        if ( v13 >= (unsigned __int64)v11 && v13 < (unsigned __int64)v9 && (unsigned __int64)v9 - v13 >= a2[4] )
        {
          a2[7] = v13;
          goto LABEL_32;
        }
      }
    }
LABEL_23:
    v14 = k->Children[1];
    v15 = k;
    if ( v14 )
    {
      v16 = v14->Children[0];
      for ( k = k->Children[1]; v16; v16 = v16->Children[0] )
        k = v16;
    }
    else
    {
      while ( 1 )
      {
        k = (struct _RTL_BALANCED_NODE *)(k->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || k->Children[0] == v15 )
          break;
        v15 = k;
      }
    }
    if ( !k )
      goto LABEL_33;
  }
  if ( v7 < (unsigned __int64)v8 || (struct _RTL_BALANCED_NODE *)a2[1] > k[1].Children[1] )
    goto LABEL_23;
  a2[7] = v7;
LABEL_32:
  i = k;
LABEL_33:
  result = i;
  *((_DWORD *)this + 36) ^= 2 * (*((_DWORD *)this + 36) & 1);
  return result;
}
