/*
 * XREFs of EtwpExpandFileName @ 0x1406B5CC4
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14067B6D0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14025B494 (RtlStringCbPrintfW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x1406B5F00 (RtlCompareUnicodeStrings.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r15
  char v7; // r14
  int Length; // edi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int16 *CurrentServerSiloGlobals; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  SIZE_T v16; // rax
  SIZE_T v17; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // rdi
  const wchar_t *v20; // rsi
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // esi
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // rbx
  _QWORD *v28; // rax
  const wchar_t *v29; // rsi
  UNICODE_STRING v30; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+10h]

  v6 = 0;
  v7 = 0;
  v30 = 0LL;
  RtlInitUnicodeString(&v30, L"%SystemRoot%");
  Length = v30.Length;
  v11 = a2->Length;
  v12 = v30.Length;
  v31 = (unsigned __int64)v30.Length >> 1;
  if ( (unsigned int)v11 <= v30.Length )
    v12 = a2->Length;
  if ( RtlCompareUnicodeStrings(a2->Buffer, v12 >> 1, v30.Buffer, (unsigned __int64)v30.Length >> 1, 1u) )
  {
    if ( !a3 && !a1 )
      return 0LL;
    v15 = v11 + 2;
  }
  else
  {
    v6 = 1;
    CurrentServerSiloGlobals = (unsigned __int16 *)PsGetCurrentServerSiloGlobals();
    if ( (_WORD)v11 == (_WORD)Length )
    {
      v15 = *a4 + 56LL + CurrentServerSiloGlobals[528];
    }
    else
    {
      v14 = a2->Length;
      v15 = (unsigned int)CurrentServerSiloGlobals[528] - Length + (_DWORD)v14 + 2;
      if ( a2->Buffer[(v14 >> 1) - 1] == 92 )
      {
        v7 = 1;
        v15 += *a4;
      }
    }
  }
  v16 = v15 + 8;
  if ( !a3 )
    v16 = v15;
  v17 = v16;
  if ( a1 && !v6 )
  {
    v7 = 1;
    v17 = v16 + *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x50777445u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v6 )
    {
      if ( a2->Length == v30.Length )
      {
        v28 = PsGetCurrentServerSiloGlobals();
        v22 = RtlStringCbPrintfW(
                v19,
                v17,
                L"%ws%ws%ws%ws",
                v28[133],
                L"\\system32\\Logfiles\\WMI\\",
                *((_QWORD *)a4 + 1),
                L".etl");
      }
      else
      {
        if ( v7 )
          v20 = (const wchar_t *)*((_QWORD *)a4 + 1);
        else
          v20 = &word_1407C1980;
        v21 = PsGetCurrentServerSiloGlobals();
        v22 = RtlStringCbPrintfW(v19, v17, L"%ws%ws%ws", v21[133], &a2->Buffer[v31], v20);
      }
    }
    else if ( a1 )
    {
      if ( v7 )
        v29 = (const wchar_t *)*((_QWORD *)a4 + 1);
      else
        v29 = &word_1407C1980;
      v22 = RtlStringCbPrintfW(PoolWithTag, v17, L"%ws%ws", a2->Buffer, v29);
    }
    else
    {
      v22 = RtlStringCbPrintfW(PoolWithTag, v17, L"%ws", a2->Buffer);
    }
    v23 = v22;
    if ( a3 )
    {
      v25 = -1LL;
      v26 = -1LL;
      do
        ++v26;
      while ( v19[v26] );
      v27 = v17 - 2 * v26;
      do
        ++v25;
      while ( v19[v25] );
      v23 = RtlStringCbPrintfW(&v19[v25], v27, L".%03d", a3);
    }
    RtlFreeAnsiString(a2);
    RtlInitUnicodeString(a2, v19);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v23;
}
