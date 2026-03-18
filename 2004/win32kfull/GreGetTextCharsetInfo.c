/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C00A1AD4
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C00A1A40 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025F8F8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetCharSet @ 0x1C00A1BE0 (GreGetCharSet.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v4;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v10 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, (struct XDCOBJ *)v9, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v10 + 504));
    if ( v10 )
    {
      v6 = *(_QWORD *)(v10 + 120);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        if ( *(_DWORD *)(v7 + 4) > 4u && (v8 = *(int *)(v7 + 196), (_DWORD)v8) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v8 + v7);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v8 + v7 + 16);
        }
        else
        {
          *(_OWORD *)a2 = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_11;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v4 = 1;
LABEL_12:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v4;
}
