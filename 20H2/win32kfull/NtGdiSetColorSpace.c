/*
 * XREFs of NtGdiSetColorSpace @ 0x1C0150E90
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetColorSpace(HDC a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) )
    {
      v3 = 1;
    }
    else
    {
      LOBYTE(v4) = 9;
      v6 = HmgShareLockCheck(a2, v4);
      if ( v6 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)(v7[0] + 96LL));
        *(_QWORD *)(*(_QWORD *)(v7[0] + 976LL) + 16LL) = a2;
        *(_QWORD *)(v7[0] + 96LL) = v6;
        INC_SHARE_REF_CNT(v6);
        v3 = 1;
        DEC_SHARE_REF_CNT(v6);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v3;
}
