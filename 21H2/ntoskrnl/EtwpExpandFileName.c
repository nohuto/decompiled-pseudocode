/*
 * XREFs of EtwpExpandFileName @ 0x1405DCA98
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405DC884 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareUnicodeStrings @ 0x1405DCCD0 (RtlCompareUnicodeStrings.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r15
  char v7; // r14
  int Length; // edi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *CurrentServerSiloGlobals; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  SIZE_T v18; // rax
  SIZE_T v19; // rbx
  wchar_t *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  wchar_t *v23; // rdi
  const wchar_t *v24; // rsi
  _QWORD *v25; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // esi
  __int64 v29; // rcx
  __int64 v30; // rax
  size_t v31; // rbx
  _QWORD *v32; // rax
  const wchar_t *v33; // rsi
  UNICODE_STRING v34; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp+10h]

  v6 = 0;
  v7 = 0;
  v34 = 0LL;
  RtlInitUnicodeString(&v34, L"%SystemRoot%");
  Length = v34.Length;
  v11 = a2->Length;
  v12 = v34.Length;
  v35 = (unsigned __int64)v34.Length >> 1;
  if ( (unsigned int)v11 <= v34.Length )
    v12 = a2->Length;
  if ( RtlCompareUnicodeStrings(a2->Buffer, v12 >> 1, v34.Buffer, (unsigned __int64)v34.Length >> 1, 1u) )
  {
    if ( !a3 && !a1 )
      return 0LL;
    v17 = v11 + 2;
  }
  else
  {
    v6 = 1;
    CurrentServerSiloGlobals = (unsigned __int16 *)PsGetCurrentServerSiloGlobals(v14, v13);
    if ( (_WORD)v11 == (_WORD)Length )
    {
      v17 = *a4 + 56LL + CurrentServerSiloGlobals[536];
    }
    else
    {
      v16 = a2->Length;
      v17 = (unsigned int)CurrentServerSiloGlobals[536] - Length + (_DWORD)v16 + 2;
      if ( a2->Buffer[(v16 >> 1) - 1] == 92 )
      {
        v7 = 1;
        v17 += *a4;
      }
    }
  }
  v18 = v17 + 8;
  if ( !a3 )
    v18 = v17;
  v19 = v18;
  if ( a1 && !v6 )
  {
    v7 = 1;
    v19 = v18 + *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19, 0x50777445u);
  v23 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v6 )
    {
      if ( a2->Length == v34.Length )
      {
        v32 = PsGetCurrentServerSiloGlobals(v22, v21);
        v26 = RtlStringCbPrintfW(
                v23,
                v19,
                L"%ws%ws%ws%ws",
                v32[135],
                L"\\system32\\Logfiles\\WMI\\",
                *((_QWORD *)a4 + 1),
                L".etl");
      }
      else
      {
        if ( v7 )
          v24 = (const wchar_t *)*((_QWORD *)a4 + 1);
        else
          v24 = &word_1407D7CE0;
        v25 = PsGetCurrentServerSiloGlobals(v22, v21);
        v26 = RtlStringCbPrintfW(v23, v19, L"%ws%ws%ws", v25[135], &a2->Buffer[v35], v24);
      }
    }
    else if ( a1 )
    {
      if ( v7 )
        v33 = (const wchar_t *)*((_QWORD *)a4 + 1);
      else
        v33 = &word_1407D7CE0;
      v26 = RtlStringCbPrintfW(PoolWithTag, v19, L"%ws%ws", a2->Buffer, v33);
    }
    else
    {
      v26 = RtlStringCbPrintfW(PoolWithTag, v19, L"%ws", a2->Buffer);
    }
    v27 = v26;
    if ( a3 )
    {
      v29 = -1LL;
      v30 = -1LL;
      do
        ++v30;
      while ( v23[v30] );
      v31 = v19 - 2 * v30;
      do
        ++v29;
      while ( v23[v29] );
      v27 = RtlStringCbPrintfW(&v23[v29], v31, L".%03d", a3);
    }
    RtlFreeAnsiString(a2);
    RtlInitUnicodeString(a2, v23);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v27;
}
