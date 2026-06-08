/*
 * XREFs of AcpiParseProcessorContainer @ 0x1C0026C7C
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1C0025D98 (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtByAcpiId @ 0x1C0002C60 (GetDevExtByAcpiId.c)
 *     RtlUnicodeStringCopyString @ 0x1C00071C8 (RtlUnicodeStringCopyString.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     AcpiParseLpiObject @ 0x1C002647C (AcpiParseLpiObject.c)
 */

signed int __fastcall AcpiParseProcessorContainer(_DWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // ecx
  const wchar_t *v8; // r14
  _WORD *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 i; // rdi
  signed int result; // eax
  __int64 v13; // rdi
  size_t v14; // rdi
  PVOID PoolWithTag; // rax
  int v16; // eax
  PVOID v17; // rax
  unsigned int v18; // r9d
  char *v19; // r10
  __int64 *DevExtByAcpiId; // rax
  int v21; // r9d
  __int64 v22; // r11
  __int64 v23; // rax

  v5 = 0LL;
  v6 = 3LL * a2;
  *(_DWORD *)(a3 + 24) = a1[6 * a2 + 3];
  v7 = a1[6 * a2 + 4];
  v8 = (const wchar_t *)((char *)a1 + v7);
  if ( v8 )
  {
    v9 = (_WORD *)((char *)a1 + v7);
    v10 = (unsigned __int64)(*a1 - v7) >> 1;
    for ( i = v10; v10; --v10 )
    {
      if ( !*v9 )
        break;
      ++v9;
    }
    result = v10 == 0 ? 0xC000000D : 0;
    if ( v10 )
      v5 = i - v10;
    else
      v5 = 0LL;
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
    v13 = 0LL;
  else
    v13 = 2 * v5;
  if ( result >= 0 )
  {
    v14 = v13 + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v14, 0x72637250u);
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, v14);
    *(_WORD *)(a3 + 2) = v14;
    result = RtlUnicodeStringCopyString((PUNICODE_STRING)a3, v8);
    if ( result >= 0 )
    {
      v16 = a1[2 * v6 + 6];
      *(_DWORD *)(a3 + 28) = v16;
      if ( v16 )
      {
        v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)a1[2 * v6 + 6], 0x72637250u);
        *(_QWORD *)(a3 + 32) = v17;
        if ( !v17 )
          return -1073741670;
        v18 = 0;
        v19 = (char *)a1 + (unsigned int)a1[2 * v6 + 7];
        while ( v18 < a1[2 * v6 + 6] )
        {
          DevExtByAcpiId = GetDevExtByAcpiId(*(_DWORD *)&v19[4 * v18]);
          if ( !DevExtByAcpiId )
            return -1073741275;
          v18 = v21 + 1;
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v22) = *((_DWORD *)DevExtByAcpiId + 14);
        }
      }
      v23 = (unsigned int)a1[2 * v6 + 5];
      if ( !(_DWORD)v23 )
        return 0;
      result = AcpiParseLpiObject((__int64)a1 + v23, *(const wchar_t **)(a3 + 8), 1, (_QWORD *)(a3 + 16));
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
