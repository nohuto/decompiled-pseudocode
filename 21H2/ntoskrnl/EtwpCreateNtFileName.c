/*
 * XREFs of EtwpCreateNtFileName @ 0x1406B75F0
 * Callers:
 *     EtwpDelayCreate @ 0x1406B73D0 (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, int *a3)
{
  __int64 v3; // rax
  _WORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  SIZE_T v9; // rbp
  wchar_t *PoolWithTag; // rdi
  const wchar_t *v11; // r9
  _WORD *v12; // rax
  NTSTATUS result; // eax

  v3 = -1LL;
  v5 = a1;
  do
    ++v3;
  while ( a1[v3] );
  v6 = 2 * v3;
  if ( !v6 )
    return -1073741773;
  v7 = v6 + 2;
  if ( v7 > 0xA && *a1 == 92 && a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
  {
    v7 -= 8;
    v5 = a1 + 4;
  }
  if ( *v5 != 92 || (v8 = 14, v5[1] != 92) )
    v8 = 24;
  *a3 = v8;
  v9 = v8 + v7;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  if ( PoolWithTag )
  {
    if ( *v5 == 92 && (v12 = v5 + 1, v5[1] == 92) )
    {
      v11 = L"\\??\\UNC";
    }
    else
    {
      v11 = L"\\DosDevices\\";
      v12 = v5;
    }
    result = RtlStringCbPrintfW(PoolWithTag, v9, L"%ws%ws", v11, v12);
    if ( !result )
    {
      *a2 = PoolWithTag;
      return result;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    result = -1073741811;
  }
  else
  {
    result = -1073741801;
  }
  *a2 = 0LL;
  return result;
}
