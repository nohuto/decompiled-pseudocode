/*
 * XREFs of CmpCaptureKeyValueArray @ 0x14065BF20
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlULongLongAdd @ 0x1402F1E70 (RtlULongLongAdd.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x14065940C (CmpDoesBufferRequireCapturing.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        struct _PRIVILEGE_SET **a5,
        _QWORD *a6)
{
  int v6; // r12d
  __int64 v7; // r13
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  struct _PRIVILEGE_SET *v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rcx
  SIZE_T v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  ULONGLONG v16; // rbx
  char *v17; // r15
  ULONGLONG v18; // rbx
  unsigned int i; // r12d
  unsigned __int16 *v20; // r13
  char *v21; // rbx
  int v23; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v24; // [rsp+24h] [rbp-A4h]
  ULONGLONG ullAugend; // [rsp+30h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET *v26; // [rsp+38h] [rbp-90h]
  char *v27; // [rsp+40h] [rbp-88h]
  void *Src; // [rsp+48h] [rbp-80h]
  struct _PRIVILEGE_SET *v29; // [rsp+50h] [rbp-78h]
  ULONG *v30; // [rsp+58h] [rbp-70h]
  __int128 v31; // [rsp+60h] [rbp-68h]
  unsigned __int64 *v32; // [rsp+70h] [rbp-58h]
  unsigned __int64 v33; // [rsp+78h] [rbp-50h]
  ULONGLONG v34; // [rsp+80h] [rbp-48h]

  v6 = a3;
  v7 = a2;
  TransientPoolWithQuotaTag = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(a1, 24LL * a2, 0x33384D43u);
  v29 = TransientPoolWithQuotaTag;
  if ( TransientPoolWithQuotaTag )
  {
    if ( !(_BYTE)v6
      || (v9 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v11, 16 * v7, 0x33384D43u),
          (v26 = v9) != 0LL) )
    {
      v12 = 0LL;
      ullAugend = 0LL;
      v13 = 0;
      v23 = 0;
      while ( v13 < (unsigned int)v7 )
      {
        v11 = 3LL * v13;
        Src = (char *)TransientPoolWithQuotaTag + 24 * v13;
        v32 = (unsigned __int64 *)(a1 + 24LL * v13);
        v14 = *v32;
        v33 = *v32;
        if ( (_BYTE)v6 )
        {
          v30 = &v9->PrivilegeCount + 4 * v13;
          v31 = 0LL;
          if ( v14 >= 0x7FFFFFFF0000LL )
            v14 = 0x7FFFFFFF0000LL;
          LODWORD(v31) = *(_DWORD *)v14;
          *((_QWORD *)&v31 + 1) = *(_QWORD *)(v14 + 8);
          v14 = (unsigned __int64)v30;
          *(_OWORD *)v30 = v31;
          v11 = *(unsigned __int16 *)v14;
          if ( (_WORD)v11 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( (v15 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v15 + v11 > 0x7FFFFFFF0000LL || v15 + v11 < v15 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v11 = *(unsigned __int16 *)v14;
            }
          }
          if ( (v11 & 1) != 0 )
          {
            v10 = -1073741811;
            goto LABEL_36;
          }
        }
        *(_QWORD *)Src = v14;
        v16 = *(unsigned __int16 *)v14;
        if ( (_WORD)v16 )
        {
          if ( CmpDoesBufferRequireCapturing(v6, *(_QWORD *)(v14 + 8))
            && RtlULongLongAdd(ullAugend, v16, &ullAugend) < 0 )
          {
            v10 = -1073741670;
            goto LABEL_36;
          }
        }
        else
        {
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_WORD *)(v14 + 2) = 0;
        }
        v13 = ++v23;
        v12 = ullAugend;
      }
      if ( !v12 )
      {
        *a4 = TransientPoolWithQuotaTag;
        TransientPoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
LABEL_2:
        v10 = 0;
        goto LABEL_36;
      }
      v17 = (char *)CmpAllocateTransientPoolWithQuotaTag(v11, v12, 0x33384D43u);
      v27 = v17;
      if ( v17 )
      {
        v18 = 0LL;
        ullAugend = 0LL;
        for ( i = 0; i < (unsigned int)v7; ++i )
        {
          v20 = (unsigned __int16 *)*((_QWORD *)&TransientPoolWithQuotaTag->PrivilegeCount + 3 * i);
          v24 = *v20;
          if ( *v20 )
          {
            Src = (void *)*((_QWORD *)v20 + 1);
            if ( CmpDoesBufferRequireCapturing(a3, (unsigned __int64)Src) )
            {
              v21 = &v17[v18];
              memmove(v21, Src, v24);
              *((_QWORD *)v20 + 1) = v21;
              v20[1] = *v20;
              v18 = *v20 + ullAugend;
              ullAugend = v18;
              v34 = v18;
            }
          }
          LODWORD(v7) = a2;
        }
        *a4 = TransientPoolWithQuotaTag;
        TransientPoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
        *a6 = v17;
        goto LABEL_2;
      }
    }
  }
  v10 = -1073741670;
LABEL_36:
  if ( TransientPoolWithQuotaTag )
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  if ( v9 )
    CmSiFreeMemory(v9);
  return v10;
}
