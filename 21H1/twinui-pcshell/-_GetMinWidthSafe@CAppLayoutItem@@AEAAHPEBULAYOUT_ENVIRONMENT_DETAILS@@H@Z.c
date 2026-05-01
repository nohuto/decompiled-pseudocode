/*
 * XREFs of ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180461340
 * Callers:
 *     ?GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x180460AA0 (-GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802192B8 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall CAppLayoutItem::_GetMinWidthSafe(
        CAppLayoutItem *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        signed int a3)
{
  int v5; // ecx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a2 + 4);
  v7 = 5 * v5 + 2 * (v5 / 100);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    if ( (*((_BYTE *)this + 24) & 2) != 0 )
    {
      v7 = a3 / 2;
      if ( a3 / 2 >= MulDiv(360, v5, 100) )
        return (unsigned int)MulDiv(360, *((_DWORD *)a2 + 4), 100);
    }
    else
    {
      v9 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6,
                  &v9) >= 0 )
        v7 = (*(__int64 (__fastcall **)(char *, const struct LAYOUT_ENVIRONMENT_DETAILS *, _QWORD))(*((_QWORD *)this + 1)
                                                                                                  + 72LL))(
               (char *)this + 8,
               a2,
               (unsigned int)a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  return v7;
}
