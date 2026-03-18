/*
 * XREFs of IoMmuDestroyPageManager @ 0x1C00560AC
 * Callers:
 *     DpiDestroyIoMmuContext @ 0x1C02D09EC (DpiDestroyIoMmuContext.c)
 * Callees:
 *     IoMmuDeleteTreeNode @ 0x1C005608C (IoMmuDeleteTreeNode.c)
 */

void __fastcall IoMmuDestroyPageManager(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  PVOID *v7; // rcx
  struct _MDL *v8; // rcx

  v2 = (_QWORD *)*a1;
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v2 )
        {
          v3 = v2;
          v2 = (_QWORD *)*v2;
          *v3 = 0LL;
        }
        if ( !v2[1] )
          break;
        v4 = v2;
        v2 = (_QWORD *)v2[1];
        v4[1] = 0LL;
      }
      v5 = v2[2];
      IoMmuDeleteTreeNode(v2, (__int64)a1);
      v6 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 )
        break;
      v2 = (_QWORD *)v6;
    }
  }
  *a1 = 0LL;
  v7 = (PVOID *)a1[3];
  if ( v7 )
  {
    if ( *v7 )
    {
      ExFreePoolWithTag(*v7, 0);
      v7 = (PVOID *)a1[3];
    }
    ExFreePoolWithTag(v7, 0);
    a1[3] = 0LL;
  }
  v8 = (struct _MDL *)a1[4];
  if ( v8 != (struct _MDL *)(a1 + 5) )
    IoFreeMdl(v8);
}
