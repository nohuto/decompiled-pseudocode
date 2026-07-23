/*
 * XREFs of FsRtlNotifyUpdateBuffer @ 0x1405F12D4
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlOemToUnicodeN @ 0x140761000 (RtlOemToUnicodeN.c)
 */

char __fastcall FsRtlNotifyUpdateBuffer(__int64 a1, int a2, PCCH *a3, PCCH *a4, PCCH *a5, char a6, int a7)
{
  unsigned int v10; // edi
  ULONG v11; // edx
  ULONG BytesInOemString; // ecx
  bool v13; // zf
  __int64 v14; // rcx
  const void **v15; // rdx
  void *v16; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rdi
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = a2;
  v11 = a7 - 12;
  if ( a7 == 12 )
    return 0;
  *(_DWORD *)(a1 + 8) = v11;
  BytesInOemString = *(unsigned __int16 *)a3;
  if ( !a6 )
  {
    BytesInUnicodeString[0] = 0;
    if ( (_WORD)BytesInOemString )
    {
      RtlOemToUnicodeN((PWCH)(a1 + 12), v11, BytesInUnicodeString, a3[1], BytesInOemString);
      BytesInOemString = BytesInUnicodeString[0];
      *(_WORD *)(BytesInUnicodeString[0] + a1 + 12) = 92;
      v10 = BytesInOemString + 2;
      LOWORD(BytesInOemString) = *(_WORD *)a3;
    }
    v13 = (_WORD)BytesInOemString == 0;
    v14 = a1 + 12;
    if ( !v13 )
    {
      RtlOemToUnicodeN((PWCH)(v10 + v14), *(_DWORD *)(a1 + 8), BytesInUnicodeString, a4[1], *(unsigned __int16 *)a4);
      if ( a5 )
      {
        v20 = BytesInUnicodeString[0] + v10;
        *(_WORD *)(v20 + a1 + 12) = 58;
        RtlOemToUnicodeN(
          (PWCH)(a1 + (unsigned int)v20 + 14LL),
          *(_DWORD *)(a1 + 8),
          BytesInUnicodeString,
          a5[1],
          *(unsigned __int16 *)a5);
      }
      return 1;
    }
    v15 = (const void **)a5;
    v16 = (void *)(v10 + v14);
    goto LABEL_7;
  }
  if ( (_WORD)BytesInOemString )
  {
    memmove((void *)(a1 + 12), a3[1], *(unsigned __int16 *)a3);
    v18 = *(unsigned __int16 *)a3;
    if ( *(unsigned int *)(a1 + 8) < (unsigned __int64)(v18 + 2) )
      return 0;
    *(_WORD *)(v18 + a1 + 12) = 92;
    v10 = *(unsigned __int16 *)a3 + 2;
  }
  memmove((void *)(v10 + a1 + 12), a4[1], *(unsigned __int16 *)a4);
  v15 = (const void **)a5;
  if ( a5 )
  {
    v19 = *(unsigned __int16 *)a4 + v10;
    *(_WORD *)(v19 + a1 + 12) = 58;
    v16 = (void *)((unsigned int)v19 + a1 + 14);
LABEL_7:
    memmove(v16, v15[1], *(unsigned __int16 *)v15);
  }
  return 1;
}
