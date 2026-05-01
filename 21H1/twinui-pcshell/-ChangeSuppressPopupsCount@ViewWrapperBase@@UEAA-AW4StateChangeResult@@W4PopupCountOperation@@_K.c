/*
 * XREFs of ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1802ACBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___ @ 0x1802AA900 (Windows--Internal--ComTaskPool--QueueTask__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___.c)
 *     ?ChangeRefcountedBooleanValue@@YA?AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z @ 0x1802ACB74 (-ChangeRefcountedBooleanValue@@YA-AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z.c)
 */

__int64 __fastcall ViewWrapperBase::ChangeSuppressPopupsCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = ChangeRefcountedBooleanValue((unsigned __int64 *)(a1 + 304), a2, a3);
  if ( v4 == 1 )
  {
    v5 = a1 - 8;
    v12 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v12 = 0LL;
    *(_QWORD *)v9 = v5;
    v10 = v5;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___(v6, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return v4;
}
