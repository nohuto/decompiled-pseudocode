/*
 * XREFs of ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1803A64F8
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803A5D24 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAppTransitionManager::s_GetLayoutBufferRect(_DWORD *a1, __int64 a2)
{
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  __int128 v6; // [rsp+28h] [rbp-11h]
  _BYTE v7[24]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+1Fh]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 128LL))(a2, &v5) >= 0
    && (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, 4LL, v7) >= 0 )
  {
    v6 = v8;
    *(_OWORD *)a1 = v8;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return a1;
}
