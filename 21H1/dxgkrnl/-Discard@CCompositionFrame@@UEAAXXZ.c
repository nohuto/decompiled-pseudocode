/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0006F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C000701C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  void *v2; // rdx
  char *v3; // rsi
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  __int64 v8; // rcx
  char *v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  char *v14; // rbx

  if ( *((_QWORD *)this + 12) )
  {
    do
    {
      v10 = (***((__int64 (__fastcall ****)(_QWORD))this + 12))(*((_QWORD *)this + 12));
      v11 = (__int64 *)*((_QWORD *)this + 12);
      v12 = v10;
      v13 = *v11;
      LOBYTE(v13) = 1;
      (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 8))(v11, v13);
      *((_QWORD *)this + 12) = v12;
    }
    while ( v12 );
  }
  v2 = (void *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 22) = 3;
  if ( v2 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 22), v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
  v3 = (char *)this + 144;
  while ( 1 )
  {
    v4 = *(char **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_14:
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    v9 = v4 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v4 - 1) + 56LL))(v4 - 8);
    (**(void (__fastcall ***)(char *, __int64))v9)(v9, 1LL);
  }
  v6 = (char *)this + 160;
  while ( 1 )
  {
    v7 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_14;
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_14;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    v14 = v7 - 48;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v7 - 1) + 56LL))(v7 - 8);
    ObfDereferenceObject(v14);
  }
}
