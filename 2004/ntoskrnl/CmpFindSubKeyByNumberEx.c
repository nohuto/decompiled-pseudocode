/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x140671DE0
 * Callers:
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14086D010 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405E6C54 (CmpDelayDerefKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x1405EDC40 (CmRmIsKCBVisible.c)
 *     CmpIsKeyDeleted @ 0x14063FC08 (CmpIsKeyDeleted.c)
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmpReferenceKeyControlBlock @ 0x140652A3C (CmpReferenceKeyControlBlock.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
 *     CmpDoFindSubKeyByNumber @ 0x140671A60 (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumber @ 0x140671D20 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  ULONG_PTR v10; // r13
  unsigned int SubKeyByNumber; // r14d
  _DWORD *v14; // rdi
  __int64 result; // rax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // r14d
  bool v21; // cf
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *); // rax
  __int16 *v23; // rax
  int v24; // eax
  _DWORD *v25; // rdx
  __int64 v26; // r8
  struct _LOOKASIDE_LIST_EX *v27; // r9
  int v28; // r9d
  int SubkeyInHashByChildCell; // eax
  char *NextElement; // rax
  int v31; // eax
  __int16 *v32; // rax
  __int64 v33; // r8
  struct _LOOKASIDE_LIST_EX *v34; // r9
  unsigned int i; // [rsp+30h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-38h]
  unsigned int v38; // [rsp+44h] [rbp-34h]
  _DWORD v39[2]; // [rsp+48h] [rbp-30h] BYREF
  char *v40; // [rsp+50h] [rbp-28h]
  _QWORD *v41; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v42[2]; // [rsp+60h] [rbp-18h] BYREF
  _DWORD v43[2]; // [rsp+68h] [rbp-10h] BYREF
  int v44; // [rsp+B0h] [rbp+38h]

  v39[0] = -1;
  v39[1] = 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  SubKeyByNumber = 0;
  v14 = (_DWORD *)v9(a1, a2, v39);
  if ( !v14 )
    return 3221225626LL;
  *a4 = -1;
  if ( a9 )
    *a9 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a1, v14, a3, a4);
  }
  else
  {
    v16 = v14[5];
    v44 = 0;
    v42[0] = -1;
    v42[1] = 0;
    v43[0] = -1;
    v43[1] = 0;
    LODWORD(v41) = v16;
    if ( v16 )
      v38 = v14[7];
    else
      v38 = -1;
    v17 = v14[6];
    if ( v17 )
      LODWORD(v40) = v14[8];
    else
      LODWORD(v40) = -1;
    v37 = v16 + v17;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v39);
    v18 = v37;
    v19 = 0;
    v14 = 0LL;
    for ( i = 0; v19 < v37; i = v19 )
    {
      v20 = (int)v41;
      v21 = v19 < (unsigned int)v41;
      v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
      BugCheckParameter2 = 0LL;
      if ( v21 )
      {
        v23 = (__int16 *)v22(a1, v38, v42);
        if ( !v23 )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(a1, v23, i);
        v25 = v42;
      }
      else
      {
        v32 = (__int16 *)v22(a1, (unsigned int)v40, v43);
        if ( !v32 )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(a1, v32, i - v20);
        v25 = v43;
      }
      *a4 = v24;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&BugCheckParameter2);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v10 = BugCheckParameter2;
      if ( !BugCheckParameter2 || CmRmIsKCBVisible(BugCheckParameter2, a7) && !CmpIsKeyDeleted(v10, a7, v26, v27) )
        ++v44;
      if ( v44 == a3 + 1 )
      {
        v19 = i;
        v18 = v37;
        break;
      }
      if ( v10 )
        CmpDelayDerefKeyControlBlock(v10, a8);
      v18 = v37;
      v19 = i + 1;
    }
    if ( v19 == v18 )
    {
      v41 = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement((_QWORD **)(a5 + 208), &v41, 32);
        v40 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
        {
          v31 = *((_DWORD *)v40 + 17);
          if ( v31 == 1 )
          {
            v10 = *((_QWORD *)v40 + 11);
          }
          else
          {
            if ( v31 != 10 )
              goto LABEL_46;
            v10 = *((_QWORD *)v40 + 12);
          }
          BugCheckParameter2 = v10;
          if ( CmRmIsKCBVisible(v10, a7) && !CmpIsKeyDeleted(v10, a7, v33, v34) )
          {
            if ( v44 == a3 )
            {
              *a4 = *(_DWORD *)(v10 + 40);
              CmpReferenceKeyControlBlock(v10);
              break;
            }
            ++v44;
          }
        }
LABEL_46:
        v10 = 0LL;
        BugCheckParameter2 = 0LL;
      }
    }
  }
  if ( !a9 || (v28 = *a4, *a4 == -1) )
  {
    if ( v10 )
      CmpDelayDerefKeyControlBlock(v10, a8);
  }
  else
  {
    if ( !v10 )
    {
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v39);
        v28 = *a4;
        v14 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, v28, (__int64)&BugCheckParameter2);
      v10 = BugCheckParameter2;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a9 = v10;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v39);
  return SubKeyByNumber;
}
