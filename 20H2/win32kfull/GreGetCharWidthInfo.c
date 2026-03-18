/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0114AF4
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C0114A90 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, int *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  int v5; // eax
  float v7; // xmm1_4
  int v8; // r8d
  int v9; // r8d
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v12 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v10, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 504));
    v4 = v12;
    if ( v12 && *(_QWORD *)(*(_QWORD *)(v12 + 96) + 3080LL) )
    {
      v5 = *(_DWORD *)(v12 + 696);
      if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 340LL) & 0x802) == 0x802 )
      {
        *a2 = v5;
        a2[1] = *(_DWORD *)(v4 + 700);
        a2[2] = *(_DWORD *)(v4 + 704);
      }
      else
      {
        v7 = *(float *)(v12 + 680);
        v11 = 0;
        bFToL((float)(16 * v5) * v7, &v11, 0);
        v8 = v11;
        v11 = 0;
        *a2 = v8;
        bFToL((float)(16 * *(_DWORD *)(v4 + 700)) * v7, &v11, 0);
        v9 = v11;
        v11 = 0;
        a2[1] = v9;
        bFToL((float)(16 * *(_DWORD *)(v4 + 704)) * v7, &v11, 0);
        a2[2] = v11;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    if ( v10[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  return v3;
}
