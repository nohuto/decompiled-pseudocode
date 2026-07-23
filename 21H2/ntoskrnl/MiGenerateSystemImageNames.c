/*
 * XREFs of MiGenerateSystemImageNames @ 0x14075C690
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  wchar_t *v6; // r10
  unsigned __int64 v8; // rax
  wchar_t *v11; // r9
  wchar_t *v12; // rax
  wchar_t *i; // rdx
  unsigned __int16 Length; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  wchar_t *Pool; // rax

  v6 = (wchar_t *)*((_QWORD *)a1 + 1);
  v8 = *a1;
  if ( *v6 == 92 )
  {
    v11 = &v6[v8 >> 1];
    v12 = v11;
    for ( i = v11 - 1; ; --i )
    {
      if ( *i == 92 )
      {
        a4->Length = 2 * (v11 - v12);
        goto LABEL_7;
      }
      v12 = i;
      if ( i == v6 )
        break;
    }
    return 3221225711LL;
  }
  else
  {
    a4->Length = v8;
    v12 = (wchar_t *)*((_QWORD *)a1 + 1);
LABEL_7:
    a4->Buffer = v12;
    a4->MaximumLength = a4->Length;
    *Source = *(UNICODE_STRING *)a1;
    Source->Length -= a4->Length;
    Source->MaximumLength = Source->Length;
    *Destination = *(PUNICODE_STRING)a1;
    if ( a2 )
    {
      Length = Source->Length;
      Destination->MaximumLength = Source->Length;
      v16 = Length + a2->Length;
      if ( v16 < Length )
        return 3221225626LL;
      v17 = Length + a2->Length;
      Destination->MaximumLength = v16;
      v18 = v16 + a4->Length;
      if ( v18 < v17 )
        return 3221225626LL;
      Destination->MaximumLength = v18;
      Pool = (wchar_t *)MiAllocatePool(256, v18, 0x644C6D4Du);
      Destination->Buffer = Pool;
      if ( !Pool )
        return 3221225626LL;
      Destination->Length = 0;
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlAppendUnicodeStringToString(Destination, a2);
      RtlAppendUnicodeStringToString(Destination, a4);
      a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
      a4->Length += a2->Length;
      a4->MaximumLength += a2->Length;
    }
    if ( a3 )
      *a4 = *a3;
    return 0LL;
  }
}
