/*
 * XREFs of CmpDestroySecurityCache @ 0x1405E07A8
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140662298 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpDestroySecurityCache(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx

  result = *(unsigned int *)(a1 + 1864);
  v2 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 16LL * v2 + 8);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v5 + 8) != v4 + 8 || (v6 = *(_QWORD **)(v4 + 16), *v6 != v4 + 8) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v4, (unsigned int)(*(_DWORD *)(v4 + 24) + 32));
      result = *(unsigned int *)(a1 + 1864);
      ++v2;
    }
    while ( v2 < (unsigned int)result );
    if ( (_DWORD)result )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(
                 *(_QWORD *)(a1 + 1880),
                 (unsigned int)(16 * *(_DWORD *)(a1 + 1868)));
  }
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  *(_DWORD *)(a1 + 1868) = 0;
  return result;
}
