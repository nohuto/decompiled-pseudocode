/*
 * XREFs of CmpInitializePreloadedHives @ 0x140A52D0C
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     CmpInitializeSystemHive @ 0x140A52DF8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A52F90 (CmpInitializePreloadedHive.c)
 */

__int64 __fastcall CmpInitializePreloadedHives(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  ACL *v7; // rax
  ACL *v8; // rdi
  int v9; // eax
  _QWORD **v10; // rax
  _QWORD *v11; // r14

  v2 = 0;
  if ( a2 )
  {
    v7 = CmpHiveRootSecurityDescriptor();
    v8 = v7;
    if ( v7 )
    {
      v9 = CmpInitializeSystemHive(a1, v7);
      v2 = v9;
      if ( v9 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0xCuLL, v9, 0LL);
      v10 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
      v11 = *v10;
      while ( v11 != v10 )
      {
        CmpInitializePreloadedHive(v11, v8);
        v11 = (_QWORD *)*v11;
        v10 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
      }
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    qword_140C48498 = (__int64)&CmpPreloadedHivesList;
    CmpPreloadedHivesList = (__int64)&CmpPreloadedHivesList;
    v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    v5 = *v4;
    while ( v5 != v4 )
    {
      ++CmpPreloadedHivesCount;
      v5 = (_QWORD *)*v5;
      v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    }
  }
  return v2;
}
