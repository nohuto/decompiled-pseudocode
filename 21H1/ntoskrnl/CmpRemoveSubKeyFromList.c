/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x140692D44
 * Callers:
 *     CmpRemoveSubKey @ 0x140692CAC (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087B250 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpFindSubKeyInRoot @ 0x14061B12C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x14061BA70 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCopyCompressedName @ 0x1406937C4 (CmpCopyCompressedName.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  int v3; // r12d
  _WORD *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // bl
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // r15
  wchar_t *Buffer; // r14
  unsigned int v13; // edx
  bool v14; // zf
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rax
  size_t v19; // r8
  _WORD *v20; // rdx
  _WORD *v21; // rcx
  _WORD *v23; // r10
  __int16 v24; // ax
  __int64 (__fastcall *v25)(ULONG_PTR, _QWORD, _DWORD *); // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  char v28; // [rsp+30h] [rbp-A9h]
  _DWORD v29[3]; // [rsp+34h] [rbp-A5h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-99h] BYREF
  int v31; // [rsp+44h] [rbp-95h] BYREF
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-91h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-8Dh]
  int v34; // [rsp+50h] [rbp-89h] BYREF
  int v35; // [rsp+54h] [rbp-85h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v37[2]; // [rsp+68h] [rbp-71h] BYREF
  _WORD *v38; // [rsp+70h] [rbp-69h]
  unsigned int *v39; // [rsp+78h] [rbp-61h]
  _BYTE P[112]; // [rsp+80h] [rbp-59h] BYREF

  v39 = a2;
  v37[1] = 0;
  v3 = -1;
  v37[0] = -1;
  *(_QWORD *)&v29[1] = 0xFFFFFFFFLL;
  v34 = -1;
  v35 = 0;
  v30 = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  v28 = 0;
  v38 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v37);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = 1;
  v10 = *(_WORD *)(v7 + 72);
  v11 = v10;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v11 = 2 * v10;
    DestinationString.Length = 2 * v10;
    DestinationString.MaximumLength = 2 * v10;
    if ( (unsigned __int16)(2 * v10) > 0x64u )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x30344D43u);
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        v9 = 0;
LABEL_15:
        if ( v8 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
        goto LABEL_17;
      }
    }
    else
    {
      Buffer = (wchar_t *)P;
      DestinationString.Buffer = (wchar_t *)P;
    }
    v28 = 1;
    CmpCopyCompressedName(Buffer, v11, v8 + 76);
  }
  else
  {
    v28 = 0;
    Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Buffer = (wchar_t *)(v7 + 76);
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
  v8 = 0LL;
  v29[0] = *v39;
  BugCheckParameter3 = *v39;
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v29[1]);
  if ( v5 )
  {
    BugCheckParameter3_4 = 0x80000000;
    if ( *v5 == 26994 )
    {
      BugCheckParameter3_4 = CmpFindSubKeyInRoot(BugCheckParameter2, (__int64)v5, (int)&DestinationString, &v30);
      if ( BugCheckParameter3_4 < 0 )
        goto LABEL_33;
      v34 = v29[1];
      v24 = v29[2];
      *(_QWORD *)&v29[1] = 0LL;
      LOWORD(v35) = v24;
      v25 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
      BugCheckParameter3 = v30;
      v38 = v5;
      v29[1] = -1;
      v5 = (_WORD *)v25(BugCheckParameter2, v30, &v29[1]);
      if ( !v5 )
      {
        v9 = 0;
LABEL_19:
        if ( v38 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
        goto LABEL_21;
      }
    }
    v31 = 0;
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v5, &DestinationString.Length, &v30, &v31);
    v13 = v31;
    if ( v31 >= 0 )
    {
      v14 = v5[1]-- == 1;
      v15 = (unsigned __int16)v5[1];
      if ( v14 )
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29[1]);
        v5 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3);
        v23 = v38;
        if ( !v38 )
          goto LABEL_14;
        v14 = v38[1]-- == 1;
        v26 = (unsigned __int16)v23[1];
        if ( v14 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
          v38 = 0LL;
          HvFreeCell(BugCheckParameter2, v29[0]);
          goto LABEL_14;
        }
        v3 = v29[0];
        if ( BugCheckParameter3_4 >= v26 )
          goto LABEL_14;
        v19 = 4LL * (v26 - BugCheckParameter3_4);
        v20 = &v23[2 * (BugCheckParameter3_4 + 1) + 2];
        v21 = &v23[2 * BugCheckParameter3_4 + 2];
      }
      else
      {
        v3 = v29[0];
        if ( v13 >= v15 )
        {
LABEL_14:
          *v39 = v3;
          goto LABEL_15;
        }
        v16 = v13 + 1;
        v17 = v15 - v13;
        v18 = v13;
        if ( *v5 == 26988 )
        {
          v19 = 4LL * v17;
          v27 = v13 + 1LL;
          v20 = &v5[2 * v16 + 2];
          v21 = &v5[2 * v27];
        }
        else
        {
          v19 = 8LL * v17;
          v20 = &v5[4 * v16 + 2];
          v21 = &v5[4 * v18 + 2];
        }
      }
      memmove(v21, v20, v19);
      goto LABEL_14;
    }
LABEL_33:
    v9 = 0;
LABEL_17:
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29[1]);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_21:
  if ( v28 && Buffer && v11 > 0x64u )
    ExFreePoolWithTag(Buffer, 0);
  return v9;
}
