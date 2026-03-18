/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x140721FFC
 * Callers:
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned int a5)
{
  char v8; // r15
  ULONG_PTR v9; // rcx
  __int64 CellFlat; // rax
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // eax
  void *v16; // rdi
  SIZE_T v17; // r8
  __int64 v18; // rcx
  char ValueData; // al
  __int64 v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  LOBYTE(v26) = 0;
  v25 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v8 = 0;
  if ( (int)CmpFindNameInListWithStatus(*(_QWORD *)(a1 + 32), 0LL, (__int64)&BugCheckParameter4) < 0 )
    return 2;
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v9, (unsigned int)BugCheckParameter4, &v23);
  else
    CellFlat = HvpGetCellPaged(v9);
  v11 = 2;
  v12 = CellFlat;
  if ( (*(_BYTE *)(CellFlat + 16) & 2) == 0 && a3 == *(_DWORD *)(CellFlat + 12) )
  {
    v13 = *(_DWORD *)(CellFlat + 4);
    v14 = a5;
    if ( a5 == (v13 & 0x7FFFFFFF) )
    {
      if ( a5 )
      {
        v15 = v13 + 0x80000000;
        if ( v13 < 0x80000000 )
          v15 = v13;
        LODWORD(BugCheckParameter4) = v15;
        if ( v13 < 0x80000000 )
        {
          v8 = 1;
          ValueData = CmpGetValueData(*(_QWORD *)(a1 + 32), (__int64)&v25, (__int64)&v26, (__int64)&v24);
          v16 = (void *)v25;
          if ( !ValueData )
            goto LABEL_13;
        }
        else
        {
          v16 = (void *)(v12 + 8);
        }
        v17 = v14;
        LODWORD(v17) = v14 & 0x7FFFFFFF;
        v11 = v14 != (unsigned int)RtlCompareMemory(v16, a4, v17) ? 2 : 0;
LABEL_13:
        if ( v16 && v8 )
        {
          if ( (_BYTE)v26 == 1 )
          {
            ExFreePoolWithTag(v16, 0);
          }
          else
          {
            v21 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v21, &v24);
            else
              HvpReleaseCellPaged(v21, &v24);
          }
        }
        goto LABEL_15;
      }
      v11 = 0;
    }
  }
LABEL_15:
  v18 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v18, &v23);
  else
    HvpReleaseCellPaged(v18, &v23);
  return v11;
}
