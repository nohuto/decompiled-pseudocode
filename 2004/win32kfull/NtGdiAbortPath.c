/*
 * XREFs of NtGdiAbortPath @ 0x1C02ADDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rax
  unsigned int v2; // ebx
  int v3; // ecx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 200LL) )
    {
      v3 = *(_DWORD *)(v5[0] + 248LL);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v5[0] + 248LL) = v3 & 0xFFFFFFFD;
        v1 = (DC *)v5[0];
      }
      *((_DWORD *)v1 + 62) &= ~1u;
      DC::hpath(v1, 0LL);
      v1 = (DC *)v5[0];
    }
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v1 = (DC *)v5[0];
    v2 = 0;
  }
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v2;
}
