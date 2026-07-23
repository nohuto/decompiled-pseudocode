/*
 * XREFs of CmRealKCBToVirtualPath @ 0x140667CCC
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 *     CmpVEExecuteCreateLogic @ 0x1405FFF90 (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v6; // r15
  _QWORD *v8; // rsi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v15; // rax
  UNICODE_STRING v16; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  Source = 0LL;
  v16 = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v8 = (_QWORD *)CmpConstructName(a1);
  if ( !v8 )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v16.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v16.Buffer = v12;
      if ( v12 )
      {
        Length = v16.Length;
        if ( v16.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              Length = v16.Length - 2;
              v16.Buffer = v12 + 1;
              v16.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v6 = 1;
            }
          }
        }
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x624E4D43u);
    a4->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v18.Length = *v8,
            v18.Buffer = v15,
            v18.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v18),
            VirtualizationID < 0)
        || v6
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v16), VirtualizationID < 0)) )
      {
LABEL_23:
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
