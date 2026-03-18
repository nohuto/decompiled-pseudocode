/*
 * XREFs of CmpCheckRegistry2 @ 0x1405F84F0
 * Callers:
 *     CmCheckRegistry @ 0x140689A00 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpCheckKey @ 0x1405F8D60 (CmpCheckKey.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405F9980 (CmpDoFindSubKeyByNumber.c)
 *     CmpCheckLexicographicalOrder @ 0x1405F9A90 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406DD084 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087681C (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        PRTL_BITMAP a6,
        __int64 a7,
        int *a8)
{
  int v10; // r13d
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // r15
  int v15; // r12d
  __int64 v16; // r14
  unsigned int *v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v28; // rax
  unsigned int SubKeyByNumber; // esi
  __int64 v30; // r14
  int v32; // eax
  int v33; // ebp
  int v34; // r9d
  int v35; // eax
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v38[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v39; // [rsp+90h] [rbp+8h]
  char v41; // [rsp+A8h] [rbp+20h]

  v41 = 0;
  v10 = 0;
  v37 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24);
  LODWORD(v37) = -1;
  v12 = v11(10240LL, 0LL, 1935887683LL);
  v13 = a7;
  v39 = v12;
  if ( !v12 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return v20;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v12;
  v14 = (unsigned int *)(v12 - 20);
  *(_DWORD *)v12 = a3;
  v15 = 0;
  *(_QWORD *)(v12 + 4) = -1LL;
  v16 = 0LL;
  *(_DWORD *)(v12 + 12) = 0;
  v17 = (unsigned int *)v12;
  *a8 = 0;
  *(_BYTE *)(v12 + 16) = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v17 + 16) )
      goto LABEL_14;
    v18 = *a8;
    *((_BYTE *)v17 + 16) = 1;
    if ( v18 != -1 )
      *a8 = v18 + 1;
    v19 = CmpCheckKey(BugCheckParameter2, a5, a6, v13);
    v20 = v19;
    if ( v19 != -2147483606 )
      break;
    v41 = 1;
LABEL_10:
    if ( v16 > 0 )
    {
      v21 = v14[2];
      if ( (_DWORD)v21 != -1 )
      {
        v22 = CmpCheckLexicographicalOrder(BugCheckParameter2, v21, *v17);
        v20 = v22;
        if ( v22 < 0 )
        {
          if ( v22 == -1073741492 )
          {
            v32 = 48;
            v33 = a2 & 0x20000;
            goto LABEL_41;
          }
          v36 = 37;
          v34 = v22;
LABEL_57:
          SetFailureLocation(a7, 0, 13, v34, v36);
LABEL_58:
          v30 = v39;
          goto LABEL_27;
        }
      }
      v14[2] = *v17;
    }
LABEL_14:
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *v17,
            &v37);
    if ( !v23 )
    {
      v36 = 64;
      goto LABEL_56;
    }
    v24 = v17[3];
    if ( v24 < *(_DWORD *)(v23 + 20) )
    {
      v26 = *(unsigned int *)(v23 + 28);
      v27 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
      v38[1] = 0;
      v38[0] = -1;
      v28 = v27(BugCheckParameter2, v26, v38);
      if ( !v28 )
      {
        v35 = 80;
        goto LABEL_52;
      }
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter2, v28, v24);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v38);
      if ( SubKeyByNumber == -1 )
      {
        v35 = 88;
LABEL_52:
        v20 = -1073741670;
        goto LABEL_53;
      }
      ++v17[3];
      v14 += 5;
      v17 += 5;
      if ( v16 == 511 )
      {
        v20 = -1073741492;
        v35 = 96;
LABEL_53:
        SetFailureLocation(a7, 0, 13, v20, v35);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
        goto LABEL_58;
      }
      v17[1] = *v14;
      v25 = 1LL;
      *v17 = SubKeyByNumber;
      v17[2] = -1;
      v17[3] = 0;
      *((_BYTE *)v17 + 16) = 0;
    }
    else
    {
      v14 -= 5;
      v25 = -1LL;
      v17 -= 5;
    }
    v15 += v25;
    v16 += v25;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
    if ( v16 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || (unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        v30 = v39;
        if ( v41 )
          v20 = -2147483606;
        else
          v20 = 0;
        goto LABEL_27;
      }
      v36 = 112;
LABEL_56:
      v20 = -1073741492;
      v34 = -1073741492;
      goto LABEL_57;
    }
    v13 = a7;
  }
  if ( v19 >= 0 )
    goto LABEL_10;
  if ( v19 != -1073741492 )
    goto LABEL_58;
  v33 = a2 & 0x20000;
  if ( (a2 & 0x20000) == 0 )
  {
    if ( BYTE3(NlsMbCodePageTag) )
      v10 = v33 + 1;
    else
      LOBYTE(v10) = (CmpBootType & 6) != 0;
  }
  v32 = 16;
LABEL_41:
  SetFailureLocation(a7, v10, 13, v20, v32);
  if ( v33 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 24);
    goto LABEL_58;
  }
  v30 = v39;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *(unsigned int *)(v39 + 20LL * v15 + 4)) )
  {
    v20 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 32);
  }
LABEL_27:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v30, 10240LL);
  return v20;
}
