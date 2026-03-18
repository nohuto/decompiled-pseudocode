/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0090B00
 * Callers:
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v1; // rax
  struct HOBJ__ **v2[3]; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = *this;
  if ( *this )
  {
    v2[1] = 0LL;
    v2[0] = v1;
    *this = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v3 = 0;
      v4 = 0x400000;
      bDeleteDCOBJ(v2, &v4, &v3);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v2);
  }
}
