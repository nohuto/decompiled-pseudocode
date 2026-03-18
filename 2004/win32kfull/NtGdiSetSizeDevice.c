/*
 * XREFs of NtGdiSetSizeDevice @ 0x1C010F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetSizeDevice(HDC a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v7, a1);
      if ( v7[0] )
      {
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 424LL) = a2;
        *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 428LL) = a3;
        if ( v7[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v7);
      }
    }
  }
  return v3;
}
