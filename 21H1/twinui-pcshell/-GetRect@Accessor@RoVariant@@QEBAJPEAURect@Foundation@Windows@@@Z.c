/*
 * XREFs of ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x18023D898
 * Callers:
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18023D988 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RoVariant::Accessor::GetRect(RoVariant::Accessor *this, struct Windows::Foundation::Rect *a2)
{
  __int64 result; // rax
  int v4; // ecx

  if ( !a2 )
    return 2147500035LL;
  *(_OWORD *)a2 = 0LL;
  v4 = *((_DWORD *)this + 2);
  if ( v4 == 7 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 200LL))(*(_QWORD *)this);
  result = 2147650720LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
