/*
 * XREFs of ?v_OnDragOver@CVirtualDesktopContainerElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A07D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18037FC18 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::v_OnDragOver(__int64 a1, _QWORD *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  int *v7; // rax
  struct tagPOINT v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int *v13; // rax
  int v14; // edx
  struct tagPOINT v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+28h] [rbp-28h] BYREF
  int v18; // [rsp+2Ch] [rbp-24h]
  int v19; // [rsp+30h] [rbp-20h]
  int v20; // [rsp+34h] [rbp-1Ch]
  _BYTE v21[16]; // [rsp+38h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 800) > 1uLL )
  {
    (*(void (__fastcall **)(_QWORD, int *))(***(_QWORD ***)(a1 + 792) + 88LL))(**(_QWORD **)(a1 + 792), &v17);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 8LL * *(_QWORD *)(a1 + 800) - 8);
    v7 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 88LL))(v6, v21);
    v8 = *a3;
    v9 = v7[2];
    v10 = v7[1];
    v11 = v7[3];
    v12 = *v7;
    if ( v20 > v11 )
      v11 = v20;
    v20 = v11;
    if ( v19 > v9 )
      v9 = v19;
    v19 = v9;
    if ( v18 < v10 )
      v10 = v18;
    v18 = v10;
    if ( v17 < v12 )
      v12 = v17;
    v17 = v12;
    v13 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v21);
    v16 = v8;
    v14 = *v13;
    v16.y = v13[1] + v8.y;
    v16.x = v8.x + v14;
    if ( Geometry::CRect::Contains((Geometry::CRect *)&v17, &v16) )
      *a2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 216) + 32LL))(a1 + 216, v21);
  }
  return 0xFFFFFFFFLL;
}
