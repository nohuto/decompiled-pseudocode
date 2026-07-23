/*
 * XREFs of CmpCheckRegistry2 @ 0x1406DF7A0
 * Callers:
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406104F4 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x1406E0950 (CmpCheckKey.c)
 *     CmpDoFindSubKeyByNumber @ 0x1406E2460 (CmpDoFindSubKeyByNumber.c)
 *     CmpCheckLexicographicalOrder @ 0x1406E2570 (CmpCheckLexicographicalOrder.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14087B180 (CmpRemoveSubKeyCellNoCellRef.c)
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
  int v11; // ebp
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  __int64 v13; // rax
  int *v15; // rcx
  unsigned int *v16; // r14
  __int64 v17; // r12
  unsigned int *v18; // rbx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rdx
  signed int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v28; // rax
  unsigned int SubKeyByNumber; // edi
  __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // r15d
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v38[4]; // [rsp+50h] [rbp-48h] BYREF
  int v39; // [rsp+A0h] [rbp+8h]
  char v40; // [rsp+B8h] [rbp+20h]

  v40 = 0;
  v11 = 0;
  v37 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24);
  LODWORD(v37) = -1;
  v13 = v12(10240LL, 0LL, 1935887683LL);
  v36 = v13;
  if ( !v13 )
  {
    SetFailureLocation(a7, 0, 13, 0xC000009A, 0);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v13;
  v15 = a8;
  v16 = (unsigned int *)(v13 - 20);
  *(_DWORD *)v13 = a3;
  v17 = 0LL;
  *(_QWORD *)(v13 + 4) = -1LL;
  v18 = (unsigned int *)v13;
  *(_DWORD *)(v13 + 12) = 0;
  *a8 = 0;
  *(_BYTE *)(v13 + 16) = 0;
  v39 = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v18 + 16) )
      goto LABEL_17;
    v19 = *v15;
    *((_BYTE *)v18 + 16) = 1;
    if ( v19 != -1 )
      *v15 = v19 + 1;
    v20 = CmpCheckKey(BugCheckParameter2, a5, a6, a7);
    v21 = v20;
    if ( v20 != -2147483606 )
      break;
    v40 = 1;
LABEL_12:
    if ( (a2 & 0x100000) != 0 && v17 > 0 )
    {
      v22 = v16[2];
      if ( (_DWORD)v22 != -1 )
      {
        v23 = CmpCheckLexicographicalOrder(BugCheckParameter2, v22, *v18);
        v21 = v23;
        if ( v23 < 0 )
        {
          if ( v23 == -1073741492 )
          {
            v31 = 48;
            v32 = a2 & 0x20000;
            goto LABEL_35;
          }
          SetFailureLocation(a7, 0, 13, v23, 0x25u);
LABEL_54:
          v33 = v36;
          goto LABEL_55;
        }
      }
      v16[2] = *v18;
    }
LABEL_17:
    v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *v18,
            &v37);
    if ( !v24 )
    {
      v35 = 64;
      goto LABEL_53;
    }
    v25 = v18[3];
    if ( v25 >= *(_DWORD *)(v24 + 20) )
    {
      v16 -= 5;
      v30 = -1LL;
      v18 -= 5;
    }
    else
    {
      v26 = *(unsigned int *)(v24 + 28);
      v27 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
      v38[1] = 0;
      v38[0] = -1;
      v28 = v27(BugCheckParameter2, v26, v38);
      if ( !v28 )
      {
        v34 = 80;
        goto LABEL_46;
      }
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter2, v28, v25);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v38);
      if ( SubKeyByNumber == -1 )
      {
        v34 = 88;
LABEL_46:
        v21 = -1073741670;
        goto LABEL_47;
      }
      ++v18[3];
      v16 += 5;
      v18 += 5;
      if ( v17 == 511 )
      {
        v21 = -1073741492;
        v34 = 96;
LABEL_47:
        SetFailureLocation(a7, 0, 13, v21, v34);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
        goto LABEL_54;
      }
      v18[1] = *v16;
      v30 = 1LL;
      *v18 = SubKeyByNumber;
      v18[2] = -1;
      v18[3] = 0;
      *((_BYTE *)v18 + 16) = 0;
    }
    v39 += v30;
    v17 += v30;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
    if ( v17 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        v21 = v40 != 0 ? 0x8000002A : 0;
        goto LABEL_54;
      }
      v35 = 112;
LABEL_53:
      v21 = -1073741492;
      SetFailureLocation(a7, 0, 13, 0xC000014C, v35);
      goto LABEL_54;
    }
    v15 = a8;
  }
  if ( v20 >= 0 )
    goto LABEL_12;
  if ( v20 != -1073741492 )
    goto LABEL_54;
  v32 = a2 & 0x20000;
  if ( !v32 )
  {
    if ( BYTE3(NlsMbCodePageTag) )
      v11 = 1;
    else
      LOBYTE(v11) = (CmpBootType & 6) != 0;
  }
  v31 = 16;
LABEL_35:
  SetFailureLocation(a7, v11, 13, v21, v31);
  if ( v32 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 || !v39 )
  {
    v35 = 24;
    goto LABEL_53;
  }
  v33 = v36;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *(unsigned int *)(v36 + 20LL * v39 + 4)) )
  {
    v21 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v21 = -1073741492;
    SetFailureLocation(a7, 0, 13, 0xC000014C, 0x20u);
  }
LABEL_55:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v33, 10240LL);
  return v21;
}
