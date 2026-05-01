/*
 * XREFs of ?BeginPlaceModeDrag@TabletModeViewManager@@UEAAJIUtagPOINT@@@Z @ 0x180401E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::BeginPlaceModeDrag(TabletModeViewManager *this, int a2, struct tagPOINT a3)
{
  __int64 v4; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LONG x; // [rsp+30h] [rbp+8h] BYREF
  LONG y; // [rsp+34h] [rbp+Ch]

  x = a3.x;
  v4 = *((_QWORD *)this + 5);
  y = a3.y;
  v6 = (*(__int64 (__fastcall **)(__int64, LONG *))(*(_QWORD *)v4 + 40LL))(v4, &x);
  if ( v6 < 0 )
  {
    v7 = 383LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8));
  if ( v6 < 0 )
  {
    v7 = 384LL;
    goto LABEL_3;
  }
  if ( !a2 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8));
  return 0LL;
}
