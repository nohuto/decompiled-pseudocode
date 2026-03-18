/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B6134
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C02B6D60 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02946B4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 )
  {
    v5 = *(_DWORD *)(v7 + 36);
    if ( (v5 & 0x1000) == 0 || (v5 & 0x4000) != 0 )
    {
      LOBYTE(v4) = 14;
      v10 = HmgShareLockCheck(a2, v4);
      if ( v10 )
      {
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v10, (struct XDCOBJ *)&v7, 0);
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
      }
    }
    else
    {
      EngSetLastError(0x57u);
    }
    if ( v7 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return v3;
}
