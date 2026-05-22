/*
 * XREFs of ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x18017E990
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017EBA0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIShellGesturesClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellGesturesClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F2164 (--$As@UIShellGesturesClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 */

__int64 *__fastcall InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 400);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 408);
  v8 = 0LL;
  if ( v2 != v4 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IShellGesturesClientProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 8),
                  &v8) >= 0 )
        break;
      v2 += 16LL;
    }
    while ( v2 != v4 );
    v3 = v8;
  }
  v6 = (v3 - 8) & -(__int64)(v3 != 0);
  *a2 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return a2;
}
