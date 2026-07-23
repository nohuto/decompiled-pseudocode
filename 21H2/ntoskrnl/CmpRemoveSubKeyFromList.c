/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x140660490
 * Callers:
 *     CmpRemoveSubKey @ 0x14066077C (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F770 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpFindSubKeyInRoot @ 0x1406DCD6C (CmpFindSubKeyInRoot.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpFindSubKeyInLeaf @ 0x14087A700 (CmpFindSubKeyInLeaf.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  int v3; // esi
  _WORD *v6; // r14
  _WORD *v8; // rax
  char v9; // si
  __int16 v10; // r12
  unsigned int v11; // r15d
  __int64 (__fastcall *v12)(ULONG_PTR, _QWORD, __int64 *); // rax
  _WORD *v13; // rbx
  int SubKeyInRoot; // r13d
  UNICODE_STRING *p_DestinationString; // r8
  __int16 v16; // ax
  __int64 (__fastcall *v17)(ULONG_PTR, _QWORD, __int64 *); // rax
  UNICODE_STRING *v18; // r8
  int SubKeyInLeaf; // eax
  __int64 v20; // rdx
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // eax
  size_t v24; // r8
  _WORD *v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  int v33; // [rsp+38h] [rbp-28h] BYREF
  int v34; // [rsp+3Ch] [rbp-24h]
  _DWORD v35[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+40h] BYREF
  int *v38; // [rsp+A8h] [rbp+48h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+58h]

  v38 = a2;
  v3 = -1;
  v35[0] = -1;
  v35[1] = 0;
  v32 = 0xFFFFFFFFLL;
  v33 = -1;
  v34 = 0;
  v37 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  a3,
                  v35);
  if ( !v8 )
    return 0;
  v10 = v8[1] & 0x20;
  DestinationString.Length = v8[36];
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = v8 + 38;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v35);
  v11 = *a2;
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8);
  LODWORD(BugCheckParameter3) = v11;
  v13 = (_WORD *)v12(BugCheckParameter2, v11, &v32);
  if ( !v13 )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *v13 != 26994 )
    goto LABEL_11;
  p_DestinationString = &DestinationString;
  if ( v10 )
    LODWORD(p_DestinationString) = 0;
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter2,
                   (_DWORD)v13,
                   (_DWORD)p_DestinationString,
                   (unsigned __int64)&DestinationString & -(__int64)(v10 != 0),
                   (__int64)&v37);
  if ( SubKeyInRoot < 0 )
    goto LABEL_8;
  v33 = v32;
  v6 = v13;
  v16 = WORD2(v32);
  v32 = 0LL;
  LOWORD(v34) = v16;
  v17 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8);
  LODWORD(BugCheckParameter3) = v37;
  LODWORD(v32) = -1;
  v13 = (_WORD *)v17(BugCheckParameter2, v37, &v32);
  if ( v13 )
  {
LABEL_11:
    v18 = &DestinationString;
    if ( v10 )
      LODWORD(v18) = 0;
    SubKeyInLeaf = CmpFindSubKeyInLeaf(
                     BugCheckParameter2,
                     (_DWORD)v13,
                     (_DWORD)v18,
                     (unsigned __int64)&DestinationString & -(__int64)(v10 != 0),
                     (__int64)&v37);
    v20 = (unsigned int)SubKeyInLeaf;
    if ( SubKeyInLeaf < 0 )
    {
LABEL_8:
      v9 = 0;
      goto LABEL_26;
    }
    v21 = v13[1]-- == 1;
    v22 = (unsigned __int16)v13[1];
    if ( v21 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
      v13 = 0LL;
      HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
      if ( !v6 )
      {
LABEL_25:
        *v38 = v3;
        v9 = 1;
LABEL_26:
        if ( v13 )
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
        goto LABEL_28;
      }
      v21 = v6[1]-- == 1;
      v23 = (unsigned __int16)v6[1];
      if ( v21 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter2, v11);
        goto LABEL_25;
      }
      v3 = v11;
      if ( SubKeyInRoot >= v23 )
        goto LABEL_25;
      v24 = 4LL * (v23 - SubKeyInRoot);
      v25 = &v6[2 * (SubKeyInRoot + 1) + 2];
      v26 = &v6[2 * SubKeyInRoot + 2];
    }
    else
    {
      v3 = v11;
      if ( (unsigned int)v20 >= v22 )
        goto LABEL_25;
      v27 = (unsigned int)(v20 + 1);
      v28 = v22 - (unsigned int)v20;
      v29 = v20;
      if ( *v13 == 26988 )
      {
        v24 = 4 * v28;
        v30 = v20 + 1;
        v25 = &v13[2 * v27 + 2];
        v26 = &v13[2 * v30];
      }
      else
      {
        v24 = 8 * v28;
        v25 = &v13[4 * v27 + 2];
        v26 = &v13[4 * v29 + 2];
      }
    }
    memmove(v26, v25, v24);
    goto LABEL_25;
  }
  v9 = 0;
LABEL_28:
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
  return v9;
}
