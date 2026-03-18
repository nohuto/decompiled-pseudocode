/*
 * XREFs of MiGenerateSystemImageNames @ 0x140760554
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  wchar_t *v6; // r11
  unsigned int v8; // ecx
  wchar_t *v12; // r9
  wchar_t *v13; // rax
  wchar_t *i; // rcx
  unsigned __int16 v15; // r9
  unsigned __int16 Length; // ax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  wchar_t *Pool; // rax

  v6 = (wchar_t *)*((_QWORD *)a1 + 1);
  v8 = *a1;
  if ( *v6 == 92 )
  {
    v12 = &v6[(unsigned __int64)v8 >> 1];
    v13 = v12;
    for ( i = v12 - 1; ; --i )
    {
      if ( *i == 92 )
      {
        v15 = 2 * (v12 - v13);
        a4->Length = v15;
        goto LABEL_7;
      }
      v13 = i;
      if ( i == v6 )
        break;
    }
    return 3221225711LL;
  }
  else
  {
    a4->Length = v8;
    v15 = v8;
    v13 = (wchar_t *)*((_QWORD *)a1 + 1);
LABEL_7:
    a4->Buffer = v13;
    a4->MaximumLength = v15;
    *Source = *(UNICODE_STRING *)a1;
    Source->Length -= a4->Length;
    Source->MaximumLength = Source->Length;
    *Destination = *(PUNICODE_STRING)a1;
    if ( a2 )
    {
      Length = Source->Length;
      Destination->MaximumLength = Source->Length;
      v18 = Length + a2->Length;
      if ( v18 < Length )
        return 3221225626LL;
      v19 = Length + a2->Length;
      Destination->MaximumLength = v18;
      v20 = v18 + a4->Length;
      if ( v20 < v19 )
        return 3221225626LL;
      Destination->MaximumLength = v20;
      Pool = (wchar_t *)MiAllocatePool(256, v20, 0x644C6D4Du);
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
