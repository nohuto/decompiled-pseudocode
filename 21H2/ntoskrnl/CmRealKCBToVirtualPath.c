/*
 * XREFs of CmRealKCBToVirtualPath @ 0x14077CB98
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B656C (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReparseToVirtualPath @ 0x140917400 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpGetVirtualizationID @ 0x140669CBC (CmpGetVirtualizationID.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     CmpConstructName @ 0x1407C05CC (CmpConstructName.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // r15
  _QWORD *v9; // rsi
  int VirtualizationID; // ebx
  unsigned int v11; // ebx
  __m128i v12; // xmm0
  wchar_t *v13; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // rax
  UNICODE_STRING v17; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v19; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0;
  Source = 0LL;
  v17 = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v9 = (_QWORD *)CmpConstructName(a1);
  if ( !v9 )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source, a3);
  if ( VirtualizationID >= 0 )
  {
    v11 = *(unsigned __int16 *)v9 + Source.Length + 38;
    if ( a2 )
    {
      v12 = *a2;
      *(_QWORD *)&v17.Length = a2->m128i_i64[0];
      v13 = (wchar_t *)_mm_srli_si128(v12, 8).m128i_u64[0];
      v17.Buffer = v13;
      if ( v13 )
      {
        Length = v17.Length;
        if ( v17.Length )
        {
          if ( *v13 )
          {
            if ( *v13 == 92 )
            {
              Length = v17.Length - 2;
              v17.Buffer = v13 + 1;
              v17.Length -= 2;
            }
            if ( Length )
            {
              v11 += Length + 2;
              v7 = 1;
            }
          }
        }
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x624E4D43u);
    a4->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a4->MaximumLength = v11;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v16 = (wchar_t *)(v9[1] + 18LL),
            *(_QWORD *)&v19.Length = *v9,
            v19.Buffer = v16,
            v19.Length = *(_WORD *)v9 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v19),
            VirtualizationID < 0)
        || v7
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v17), VirtualizationID < 0)) )
      {
LABEL_23:
        RtlFreeUnicodeString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)VirtualizationID;
}
