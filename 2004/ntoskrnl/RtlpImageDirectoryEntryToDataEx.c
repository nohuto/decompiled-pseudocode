/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14027C348
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140224AC0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14027C420 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14027C4A0 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  char v8; // di
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int16 v11; // ax
  int v12; // edx
  int v13; // edx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  v14 = 0LL;
  v8 = a2;
  v9 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = 0;
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1 & 1) == 0 )
      v8 = a2;
  }
  result = RtlImageNtHeaderEx(1, v9, 0LL, &v14);
  if ( v14 )
  {
    v11 = *(_WORD *)(v14 + 24);
    v12 = 267;
    if ( v11 == 267 )
    {
      LOBYTE(v12) = v8;
      return RtlpImageDirectoryEntryToData32(v9, v12, a3, a4, v14, v5);
    }
    else
    {
      v13 = 523;
      if ( v11 == 523 )
      {
        LOBYTE(v13) = v8;
        return RtlpImageDirectoryEntryToData64(v9, v13, a3, a4, v14, v5);
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  return result;
}
