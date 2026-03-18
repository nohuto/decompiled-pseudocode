/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ @ 0x180260E10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800466E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureD2DBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // ebx
  char *v3; // rcx
  _DWORD *v4; // rax
  char *v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  if ( v2 >= 0 )
  {
    v3 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
    v4 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v3)(v3, v7);
    if ( *v4 != 28 && *v4 != 87 )
      v2 = -2003292288;
    if ( v2 >= 0 )
    {
      v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 24LL))(v5) )
        return (unsigned int)-2003292288;
    }
  }
  return (unsigned int)v2;
}
