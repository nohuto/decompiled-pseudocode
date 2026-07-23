/*
 * XREFs of HvpFindFreeCellInBin @ 0x140720190
 * Callers:
 *     HvpFindFreeCell @ 0x14071F32C (HvpFindFreeCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  unsigned int v10; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx

  v7 = a4 + 8;
  v8 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v8 )
    return 3221226021LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( (*v7 & 0x80000000) == 0 )
      break;
    v10 = -v10;
LABEL_4:
    v7 = (unsigned int *)((char *)v7 + v10);
    if ( (unsigned __int64)v7 >= v8 )
      return 3221226021LL;
  }
  v12 = a4[1] + (_DWORD)v7 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v10 )
    goto LABEL_4;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v12, 1) )
    return 3221225853LL;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(BugCheckParameter2 + 8))(BugCheckParameter2, v12, a7);
  if ( v13 )
    v14 = v13 - 4;
  else
    v14 = 0LL;
  *a6 = v14;
  *a5 = v12;
  return 0LL;
}
