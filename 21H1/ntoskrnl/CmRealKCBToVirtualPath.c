/*
 * XREFs of CmRealKCBToVirtualPath @ 0x14068F388
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x140691804 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReparseToVirtualPath @ 0x1406D0328 (CmpReparseToVirtualPath.c)
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086CF34 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpGetVirtualizationID @ 0x14068F59C (CmpGetVirtualizationID.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // r13
  _QWORD *v8; // rdi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int16 v21; // dx
  bool v22; // zf
  int v23; // r8d
  __int64 v24; // rax
  __int16 v25; // ax
  unsigned __int16 v26; // r15
  _QWORD *PoolWithTag; // rax
  __int16 v28; // r15
  char *v29; // rcx
  unsigned __int16 v30; // r8
  __int64 v31; // rdx
  unsigned __int16 v32; // r9
  __int64 v33; // rax
  unsigned __int16 v34; // r8
  __int64 v35; // r11
  __int64 v36; // r15
  __int16 v37; // ax
  __int64 v38; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v39; // [rsp+28h] [rbp-38h] BYREF
  UNICODE_STRING v40; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0;
  Source = 0LL;
  v40 = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v38 = 0LL;
  CmpConstructNameWithStatus(a1, &v38);
  v8 = (_QWORD *)v38;
  if ( !v38 )
  {
    v17 = *(_QWORD *)(a1 + 72);
    v38 = 0LL;
    CmpConstructNameWithStatus(v17, &v38);
    v18 = (_QWORD *)v38;
    if ( !v38 )
      return 3221225626LL;
    v19 = *(_QWORD *)(a1 + 80);
    v20 = v19 + 26;
    v21 = *(_WORD *)(v19 + 24);
    v22 = (*(_DWORD *)v19 & 1) == 0;
    v23 = *(_DWORD *)v19 & 1;
    v24 = 0LL;
    if ( v22 )
      v24 = v20;
    *(_QWORD *)&v39.Length = v24;
    v38 = v20 & -(__int64)(v23 != 0);
    v25 = 2 * v21;
    if ( !v23 )
      v25 = v21;
    v26 = *(_WORD *)v18 + v25 + 18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x624E4D43u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v28 = v26 - 16;
      v29 = (char *)(PoolWithTag + 2);
      *(_WORD *)PoolWithTag = v28;
      *((_WORD *)PoolWithTag + 1) = v28;
      PoolWithTag[1] = PoolWithTag + 2;
      v30 = 0;
      if ( (*(_WORD *)v18 & 0xFFFE) != 0 )
      {
        do
        {
          v31 = v30++;
          *(_WORD *)(PoolWithTag[1] + 2 * v31) = *(_WORD *)(v18[1] + 2 * v31);
        }
        while ( v30 < (unsigned __int16)(*(_WORD *)v18 >> 1) );
        v29 = (char *)PoolWithTag[1];
      }
      v32 = 0;
      *(_WORD *)&v29[2 * v30] = 92;
      v33 = *(_QWORD *)(a1 + 80);
      v34 = v30 + 1;
      if ( *(_WORD *)(v33 + 24) )
      {
        v35 = v38;
        v36 = *(_QWORD *)&v39.Length;
        do
        {
          if ( (*(_DWORD *)v33 & 1) != 0 )
          {
            *(_WORD *)(v8[1] + 2LL * v34) = *(unsigned __int8 *)(v35 + v32);
            v37 = 1;
          }
          else
          {
            *(_WORD *)(v8[1] + 2LL * v34) = *(_WORD *)(v36 + 2 * ((unsigned __int64)v32 >> 1));
            v37 = 2;
          }
          v32 += v37;
          ++v34;
          v33 = *(_QWORD *)(a1 + 80);
        }
        while ( v32 < *(_WORD *)(v33 + 24) );
      }
    }
    CmpFreeTransientPoolWithTag(v18, 0x624E4D43u);
    if ( !v8 )
      return 3221225626LL;
  }
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v40.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v40.Buffer = v12;
      if ( v12 )
      {
        Length = v40.Length;
        if ( v40.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              v40.Buffer = v12 + 1;
              Length = v40.Length - 2;
              v40.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    v14 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x624E4D43u);
    a4->Buffer = v14;
    if ( v14 )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_22;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_22;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v39.Length = *v8,
            v39.Buffer = v15,
            v39.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v39),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v40), VirtualizationID < 0)) )
      {
LABEL_22:
        RtlFreeAnsiString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}
