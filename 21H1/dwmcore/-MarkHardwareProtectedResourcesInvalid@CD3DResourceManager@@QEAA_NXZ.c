/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18024D8B0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800C8FBC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DResourceManager::MarkHardwareProtectedResourcesInvalid(CD3DResourceManager *this)
{
  char *v1; // rsi
  char *v3; // rbx
  char v4; // bp
  struct CD3DResource *v5; // rdi

  v1 = (char *)this + 32;
  v3 = (char *)*((_QWORD *)this + 4);
  v4 = 0;
  while ( v3 != v1 )
  {
    v5 = (struct CD3DResource *)(v3 - 40);
    v3 = *(char **)v3;
    if ( *((_DWORD *)v5 + 2)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v5 + 3) + 24LL))((_QWORD *)v5 + 3)
       || *((_BYTE *)v5 + 85)) )
    {
      CD3DResourceManager::DestroyResource(this, v5);
      v4 = 1;
    }
  }
  return v4;
}
