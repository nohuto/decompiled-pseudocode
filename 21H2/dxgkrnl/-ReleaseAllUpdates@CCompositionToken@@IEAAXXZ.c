/*
 * XREFs of ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C0003090
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0003050 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionToken::ReleaseAllUpdates(CCompositionToken *this)
{
  char *v2; // rcx
  unsigned int v3; // edi
  char *v4; // rax
  __int64 v5; // rsi
  void (__fastcall ***v6)(_QWORD); // rdx

  v2 = (char *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = 0;
    if ( !*((_DWORD *)this + 16) )
      goto LABEL_9;
    do
    {
      v4 = v2;
      v5 = 32LL * v3;
      v6 = *(void (__fastcall ****)(_QWORD))&v2[v5 + 24];
      if ( v6 )
      {
        (**v6)(*(_QWORD *)&v2[v5 + 24]);
        v2 = (char *)*((_QWORD *)this + 7);
        v4 = v2;
      }
      if ( *(_QWORD *)&v4[v5 + 8] )
      {
        ObfDereferenceObject(*(PVOID *)&v4[v5 + 8]);
        v2 = (char *)*((_QWORD *)this + 7);
        v4 = v2;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 16) );
    v2 = v4;
    if ( v4 )
LABEL_9:
      ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
}
