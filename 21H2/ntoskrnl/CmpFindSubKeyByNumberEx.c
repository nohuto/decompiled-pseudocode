/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1406E2D00
 * Callers:
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1406DE0FC (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1406E2460 (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmRmIsKCBVisible @ 0x1407139B0 (CmRmIsKCBVisible.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766730 (CmpFindSubkeyInHashByChildCell.c)
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
  int v26; // r9d
  int SubkeyInHashByChildCell; // eax
  char *NextElement; // rax
  int v29; // eax
  __int16 *v30; // rax
  unsigned int i; // [rsp+30h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-38h]
  unsigned int v34; // [rsp+44h] [rbp-34h]
  _DWORD v35[2]; // [rsp+48h] [rbp-30h] BYREF
  char *v36; // [rsp+50h] [rbp-28h]
  _QWORD *v37; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v38[2]; // [rsp+60h] [rbp-18h] BYREF
  _DWORD v39[2]; // [rsp+68h] [rbp-10h] BYREF
  int v40; // [rsp+B0h] [rbp+38h]

  v35[0] = -1;
  v35[1] = 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  SubKeyByNumber = 0;
  v14 = (_DWORD *)v9(a1, a2, v35);
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
    v40 = 0;
    v38[0] = -1;
    v38[1] = 0;
    v39[0] = -1;
    v39[1] = 0;
    LODWORD(v37) = v16;
    if ( v16 )
      v34 = v14[7];
    else
      v34 = -1;
    v17 = v14[6];
    if ( v17 )
      LODWORD(v36) = v14[8];
    else
      LODWORD(v36) = -1;
    v33 = v16 + v17;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
    v18 = v33;
    v19 = 0;
    v14 = 0LL;
    for ( i = 0; v19 < v33; i = v19 )
    {
      v20 = (int)v37;
      v21 = v19 < (unsigned int)v37;
      v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8);
      BugCheckParameter2 = 0LL;
      if ( v21 )
      {
        v23 = (__int16 *)v22(a1, v34, v38);
        if ( !v23 )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(a1, v23, i);
        v25 = v38;
      }
      else
      {
        v30 = (__int16 *)v22(a1, (unsigned int)v36, v39);
        if ( !v30 )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(a1, v30, i - v20);
        v25 = v39;
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
      if ( !BugCheckParameter2 || (unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, a7) && !CmpIsKeyDeleted(v10, a7) )
        ++v40;
      if ( v40 == a3 + 1 )
      {
        v19 = i;
        v18 = v33;
        break;
      }
      if ( v10 )
        CmpDelayDerefKeyControlBlock(v10, a8);
      v18 = v33;
      v19 = i + 1;
    }
    if ( v19 == v18 )
    {
      v37 = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement((_QWORD **)(a5 + 208), &v37, 32);
        v36 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
        {
          v29 = *((_DWORD *)v36 + 17);
          if ( v29 == 1 )
          {
            v10 = *((_QWORD *)v36 + 11);
          }
          else
          {
            if ( v29 != 10 )
              goto LABEL_46;
            v10 = *((_QWORD *)v36 + 12);
          }
          BugCheckParameter2 = v10;
          if ( (unsigned __int8)CmRmIsKCBVisible(v10, a7) && !CmpIsKeyDeleted(v10, a7) )
          {
            if ( v40 == a3 )
            {
              *a4 = *(_DWORD *)(v10 + 40);
              CmpReferenceKeyControlBlock(v10);
              break;
            }
            ++v40;
          }
        }
LABEL_46:
        v10 = 0LL;
        BugCheckParameter2 = 0LL;
      }
    }
  }
  if ( !a9 || (v26 = *a4, *a4 == -1) )
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
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
        v26 = *a4;
        v14 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, v26, (__int64)&BugCheckParameter2);
      v10 = BugCheckParameter2;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a9 = v10;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
  return SubKeyByNumber;
}
