/*
 * XREFs of ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C02C3DCC
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0268200 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall REMOTEMONITORMAPPING::Clear(struct _KTHREAD **this, struct _LUID *a2)
{
  struct _KTHREAD *v4; // rbx
  struct _KTHREAD *v5; // rcx
  struct _KTHREAD **v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = *this;
  v9 = 2;
  while ( v4 != (struct _KTHREAD *)this )
  {
    v5 = v4;
    v4 = *(struct _KTHREAD **)v4;
    if ( !a2 || *((_DWORD *)v5 + 7) == a2->LowPart && *((_DWORD *)v5 + 8) == a2->HighPart )
    {
      if ( *((struct _KTHREAD **)v4 + 1) != v5 || (v6 = (struct _KTHREAD **)*((_QWORD *)v5 + 1), *v6 != v5) )
        __fastfail(3u);
      *v6 = v4;
      *((_QWORD *)v4 + 1) = v6;
      operator delete(v5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
