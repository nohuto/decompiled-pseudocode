/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0019D00
 * Callers:
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2[1] = 0LL;
    v2[0] = v1;
    *(_QWORD *)this = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v3 = 0;
      v4 = 0x400000;
      bDeleteDCOBJ((struct XDCOBJ *)v2, &v4, &v3);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v2);
  }
}
