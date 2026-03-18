/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E2E4
 * Callers:
 *     DrawTextExWorker @ 0x1C025E650 (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GreGetTextCharsetInfo @ 0x1C009D574 (GreGetTextCharsetInfo.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C025E9A8 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int TextMetricsW; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r15d
  int v20; // r14d
  int v21; // r12d
  _DWORD *DPIServerInfo; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // eax
  __int64 v27; // [rsp+28h] [rbp-71h] BYREF
  __int64 v28; // [rsp+30h] [rbp-69h] BYREF
  __int128 v29; // [rsp+38h] [rbp-61h]
  __int128 v30; // [rsp+48h] [rbp-51h]
  __int128 v31; // [rsp+58h] [rbp-41h]
  _OWORD v32[5]; // [rsp+78h] [rbp-21h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  if ( a5 )
  {
    v9 = *((_DWORD *)a5 + 2);
    v10 = *((_DWORD *)a5 + 3);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v28);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v27);
    *((_DWORD *)a4 + 5) = (((int)(v28 ^ v27) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v28) ^ HIDWORD(v27)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v13, v12, v14, v15);
      v21 = DPIServerInfo[9];
      v19 = DPIServerInfo[15];
      v20 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 56LL), 0LL);
    }
    else
    {
      memset(v32, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v32);
      v29 = v32[0];
      v30 = v32[1];
      v19 = DWORD1(v32[1]);
      v31 = v32[2];
      if ( TextMetricsW )
        v20 = v31;
      else
        v20 = 0;
      v21 = v29;
    }
    v23 = v21 * *((_DWORD *)a4 + 6);
    *((_DWORD *)a4 + 14) = v20;
    *((_DWORD *)a4 + 7) = v23;
    *((_DWORD *)a4 + 4) = 8 * v19;
    if ( gptiCurrent == gptiRit )
      v24 = 0;
    else
      v24 = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit, v17, v18) + 760) & 4;
    *((_DWORD *)a4 + 15) = v24;
    if ( !v24 )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *((_DWORD *)a4 + 5) * v9;
      v25 = *((_DWORD *)a4 + 5) * v10;
      *((_DWORD *)a4 + 10) = v25;
      *((_DWORD *)a4 + 2) -= v25;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    v26 = *((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4);
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 8) = v26;
    return 1LL;
  }
  return result;
}
