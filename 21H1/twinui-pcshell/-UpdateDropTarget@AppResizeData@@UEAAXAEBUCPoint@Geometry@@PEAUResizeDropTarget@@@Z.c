/*
 * XREFs of ?UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z @ 0x1803F7C80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18037FC18 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

void __fastcall AppResizeData::UpdateDropTarget(
        AppResizeData *this,
        const struct tagPOINT *a2,
        struct ResizeDropTarget *a3)
{
  struct tagPOINT v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)a3 = -1;
  *(_OWORD *)((char *)a3 + 4) = 0LL;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v10);
  if ( *((_QWORD *)this + 3) != *a2 )
  {
    v6 = *a2;
    *((_DWORD *)this + 16) = -1;
    *((struct tagPOINT *)this + 3) = v6;
    *(_OWORD *)((char *)this + 68) = 0LL;
    v7 = *((_QWORD *)this + 4);
    v8 = v7 + 20LL * *((_QWORD *)this + 5);
    while ( v7 != v8 )
    {
      if ( Geometry::CRect::Contains((Geometry::CRect *)(v7 + 4), a2) )
      {
        *((_OWORD *)this + 4) = *(_OWORD *)v9;
        *((_DWORD *)this + 20) = *(_DWORD *)(v9 + 16);
        break;
      }
      v7 = v9 + 20;
    }
  }
  *(_OWORD *)a3 = *((_OWORD *)this + 4);
  *((_DWORD *)a3 + 4) = *((_DWORD *)this + 20);
}
