/*
 * XREFs of CmpCaptureKeyValueArray @ 0x14066BFC0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1406A4AE0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     RtlULongLongAdd @ 0x1402E0E30 (RtlULongLongAdd.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x14066E6DC (CmpDoesBufferRequireCapturing.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        _QWORD *a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  unsigned __int64 v9; // rcx
  SIZE_T v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdx
  __int64 v14; // rbx
  __int16 v15; // ax
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  char *v18; // r14
  __int64 v19; // r13
  unsigned int i; // r12d
  unsigned __int16 *v21; // r15
  int v23; // [rsp+20h] [rbp-98h]
  unsigned __int16 v24; // [rsp+24h] [rbp-94h]
  unsigned __int16 *Src; // [rsp+30h] [rbp-88h]
  void *Srca; // [rsp+30h] [rbp-88h]
  ULONGLONG ullAugend[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v28; // [rsp+50h] [rbp-68h]
  unsigned __int64 v29; // [rsp+60h] [rbp-58h]
  unsigned __int64 v30; // [rsp+68h] [rbp-50h]
  __int64 v31; // [rsp+70h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  TransientPoolWithQuotaTag = 0LL;
  if ( !a2 )
    goto LABEL_34;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(a1, 32LL * a2, 0x33384D43u);
  ullAugend[2] = (ULONGLONG)TransientPoolWithQuotaTag;
  if ( !TransientPoolWithQuotaTag )
    goto LABEL_38;
  v10 = 0LL;
  ullAugend[0] = 0LL;
  v11 = 0LL;
  v23 = 0;
  while ( (unsigned int)v11 < v6 )
  {
    Src = (unsigned __int16 *)((char *)TransientPoolWithQuotaTag + 32 * v11);
    v9 = a1 + 24LL * (unsigned int)v11;
    v29 = v9;
    v12 = *(_QWORD *)v9;
    v30 = *(_QWORD *)v9;
    if ( (_BYTE)v5 )
    {
      v28 = 0LL;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      LODWORD(v28) = *(_DWORD *)v12;
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v12 + 8);
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v28;
      v14 = *Src;
      v15 = v14;
      if ( (_WORD)v14 )
      {
        v9 = *((_QWORD *)Src + 1);
        if ( (v9 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + v14 > 0x7FFFFFFF0000LL || v9 + v14 < v9 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          LOWORD(v14) = *Src;
          v15 = *Src;
        }
      }
      if ( (v15 & 1) != 0 )
      {
        v16 = -1073741811;
        goto LABEL_35;
      }
    }
    else
    {
      v17 = *(_OWORD *)v12;
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v17;
      LOWORD(v14) = *Src;
      v15 = *Src;
    }
    if ( v15 )
    {
      if ( (unsigned __int8)CmpDoesBufferRequireCapturing(v5, *((_QWORD *)v13 + 1))
        && RtlULongLongAdd(ullAugend[0], (unsigned __int16)v14, ullAugend) < 0 )
      {
        v16 = -1073741670;
        goto LABEL_35;
      }
    }
    else
    {
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 0;
    }
    v11 = (unsigned int)++v23;
    v10 = ullAugend[0];
    v6 = a2;
  }
  if ( !v10 )
  {
    *a4 = TransientPoolWithQuotaTag;
    TransientPoolWithQuotaTag = 0LL;
LABEL_34:
    v16 = 0;
    goto LABEL_35;
  }
  v18 = (char *)CmpAllocateTransientPoolWithQuotaTag(v9, v10, 0x33384D43u);
  ullAugend[1] = (ULONGLONG)v18;
  if ( v18 )
  {
    v19 = 0LL;
    for ( i = 0; i < v6; ++i )
    {
      v21 = (unsigned __int16 *)((char *)TransientPoolWithQuotaTag + 32 * i);
      v24 = *v21;
      if ( *v21 )
      {
        Srca = (void *)*((_QWORD *)v21 + 1);
        if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, Srca) )
        {
          memmove(&v18[v19], Srca, v24);
          *((_QWORD *)v21 + 1) = &v18[v19];
          v21[1] = *v21;
          v19 += *v21;
          v31 = v19;
          v6 = a2;
        }
      }
    }
    *a4 = TransientPoolWithQuotaTag;
    TransientPoolWithQuotaTag = 0LL;
    *a5 = v18;
    goto LABEL_34;
  }
LABEL_38:
  v16 = -1073741670;
LABEL_35:
  if ( TransientPoolWithQuotaTag )
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  return v16;
}
