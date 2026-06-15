/*
 * XREFs of sub_180007AC0 @ 0x180007AC0
 * Callers:
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 */

__int64 __fastcall sub_180007AC0(__int64 a1)
{
  DWORD v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rax
  struct _ACL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  DWORD nAceListLength; // edi
  void *v17; // rax
  unsigned int v19; // edi
  unsigned int v20; // edi

  if ( !*(_QWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 16) )
  {
    v2 = 8;
    v3 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v4 )
    {
      do
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v3);
        if ( v5 )
          v2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        ++v3;
      }
      while ( v3 < v4 );
    }
    v6 = (struct _ACL *)o_malloc(v2);
    *(_QWORD *)(a1 + 8) = v6;
    if ( !v6 )
      sub_1800B8610(2147942414LL);
    if ( !InitializeAcl(v6, v2, *(_DWORD *)(a1 + 20)) )
    {
      v19 = sub_1800D5648(v8, v7, v9);
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_1800B8610(v19);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    for ( i = 0; i < v4; ++i )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, i);
      v15 = v11;
      if ( v11 )
      {
        nAceListLength = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v17 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        if ( AddAce(*(PACL *)(a1 + 8), *(_DWORD *)(a1 + 20), 0xFFFFFFFF, v17, nAceListLength) )
          continue;
      }
      v20 = sub_1800D5648(v13, v12, v14);
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_1800B8610(v20);
    }
  }
  return *(_QWORD *)(a1 + 8);
}
