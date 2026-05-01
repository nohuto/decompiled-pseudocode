/*
 * XREFs of _lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator() @ 0x1801A4F78
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___::Run @ 0x1801A76C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator()(_BYTE *a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v5);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v6 = 0LL;
      v4 = *(_QWORD *)a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL))(
             v4,
             i,
             &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07,
             &v6) >= 0 )
        (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v6 + 24LL))(v6, a1[8] != 0);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
  }
  return result;
}
