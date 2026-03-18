/*
 * XREFs of CmpCreateEmptyHiveClone @ 0x14091972C
 * Callers:
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 * Callees:
 *     CmpAllocateForNonPagedHive @ 0x14053F520 (CmpAllocateForNonPagedHive.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpHiveInitialize @ 0x14068AF4C (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x14068B0E0 (CmpAllocate.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     HvHiveStartEmptyClone @ 0x14091A170 (HvHiveStartEmptyClone.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpCreateEmptyHiveClone(__int64 *a1, __int64 a2)
{
  _QWORD *Pool2; // rsi
  int started; // esi
  PVOID v6; // rax
  __int64 v7; // rbx
  void **v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 892947779LL);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 160) & 0x2000000) != 0 )
      v6 = CmpAllocateForNonPagedHive(0x12D8uLL, 0, 0x30314D43u);
    else
      v6 = CmpAllocate(0x12D8uLL, 0, 0x30314D43u);
    v7 = (__int64)v6;
    if ( v6 )
    {
      CmpHiveInitialize((__int64)v6, Pool2);
      v8 = (void **)(a2 + 1544);
      v9 = 0;
      *(_DWORD *)(v7 + 4112) = *(_DWORD *)(a2 + 4112);
      v10 = 2LL;
      while ( 1 )
      {
        if ( *v8 )
        {
          started = ObDuplicateObject(
                      (ULONG_PTR)PsInitialSystemProcess,
                      *v8,
                      0LL,
                      (unsigned __int64 *)(v7 + 8 * (v9 + 193LL)),
                      0,
                      512,
                      2,
                      0);
          if ( started < 0 )
            break;
        }
        ++v9;
        ++v8;
        if ( v9 >= 6 )
        {
          v11 = (_QWORD *)(v7 + 1808);
          *(_DWORD *)(v7 + 1792) = *(_DWORD *)(a2 + 1792);
          *(_QWORD *)(v7 + 1800) = *(_QWORD *)(a2 + 1800);
          do
          {
            *v11 = *(_QWORD *)((char *)v11 + a2 - v7);
            ++v11;
            --v10;
          }
          while ( v10 );
          *(_QWORD *)(v7 + 4136) = *(_QWORD *)(a2 + 4136);
          *(_QWORD *)(v7 + 4144) = *(_QWORD *)(a2 + 4144);
          *(_QWORD *)(v7 + 4184) = *(_QWORD *)(a2 + 4184);
          v12 = *(_QWORD *)(a2 + 4792);
          if ( v12 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v7 + 4792) = *(_QWORD *)(a2 + 4792);
          }
          started = HvHiveStartEmptyClone(v7, a2);
          if ( started >= 0 )
          {
            *a1 = v7;
            return 0;
          }
          break;
        }
      }
      CmpDestroyHive(v7);
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)started;
}
