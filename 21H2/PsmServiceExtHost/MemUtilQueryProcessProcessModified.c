/*
 * XREFs of MemUtilQueryProcessProcessModified @ 0x1800869A4
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x180032F88 (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     MemUtilGetNextRegionInfo @ 0x1800865B4 (MemUtilGetNextRegionInfo.c)
 *     MemUtilQueryProcessVaCommon @ 0x180086B0C (MemUtilQueryProcessVaCommon.c)
 *     MemUtilVAQueryCtxIssue @ 0x180086D64 (MemUtilVAQueryCtxIssue.c)
 *     MemUtilVAQueryCtxStart @ 0x180086DF0 (MemUtilVAQueryCtxStart.c)
 */

__int64 __fastcall MemUtilQueryProcessProcessModified(DWORD a1, _QWORD *a2)
{
  unsigned int ProcessVaCommon; // ebx
  __int64 v4; // r8
  unsigned int v5; // esi
  unsigned __int64 i; // rdx
  unsigned int NextRegionInfo; // eax
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-39h]
  _OWORD v14[2]; // [rsp+28h] [rbp-31h] BYREF
  LPVOID lpAddress[2]; // [rsp+48h] [rbp-11h]
  unsigned __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  int v17; // [rsp+64h] [rbp+Bh]
  __int64 v18; // [rsp+68h] [rbp+Fh]
  __int64 v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = 0LL;
  memset(v14, 0, sizeof(v14));
  *(_OWORD *)lpAddress = 0LL;
  ProcessVaCommon = MemUtilQueryProcessVaCommon(a1);
  if ( ProcessVaCommon )
    goto LABEL_20;
  ProcessVaCommon = MemUtilVAQueryCtxStart(v14, 0LL, v4, &v20);
  if ( ProcessVaCommon )
    goto LABEL_20;
  v5 = (unsigned int)lpAddress[1];
  for ( i = 0LL; ; i = v9 + v8 )
  {
    NextRegionInfo = MemUtilGetNextRegionInfo(0LL, i, v13, &v16);
    ProcessVaCommon = NextRegionInfo;
    if ( NextRegionInfo )
      break;
    if ( v17 == 0x20000 && v19 )
    {
      v8 = v16;
      v9 = v18;
      v10 = v16 + v18;
      if ( v16 >= v16 + v18 )
        continue;
      do
      {
        v11 = v5++;
        LODWORD(lpAddress[1]) = v5;
        *((_QWORD *)lpAddress[0] + 2 * v11) = v8;
        if ( v5 == 4096 )
        {
          ProcessVaCommon = MemUtilVAQueryCtxIssue(v14);
          if ( ProcessVaCommon )
            goto LABEL_20;
          v5 = (unsigned int)lpAddress[1];
        }
        v8 += 4096LL;
      }
      while ( v8 < v10 );
    }
    v9 = v18;
    v8 = v16;
  }
  if ( NextRegionInfo == 259 )
  {
    if ( !v5 || (ProcessVaCommon = MemUtilVAQueryCtxIssue(v14)) == 0 )
      ProcessVaCommon = 0;
    if ( !ProcessVaCommon )
      *a2 = v20;
  }
LABEL_20:
  if ( lpAddress[0] )
    VirtualFree(lpAddress[0], 0LL, 0x8000u);
  return ProcessVaCommon;
}
