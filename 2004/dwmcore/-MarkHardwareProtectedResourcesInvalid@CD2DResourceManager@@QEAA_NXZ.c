/*
 * XREFs of ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18024AEBC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18003EFC4 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x1800B0068 (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(CD2DResourceManager *this)
{
  CD2DContext *v1; // rdi
  char v2; // bp
  char *v3; // rbx
  struct CD2DResource *v5; // r13
  CD2DContext *v6; // r14
  bool v7; // zf
  char *v8; // r12
  CD2DContext *v9; // rcx
  CD2DContext **v10; // rax

  v1 = *(CD2DContext **)this;
  v2 = 0;
  v3 = 0LL;
  if ( *(CD2DResourceManager **)this != this )
  {
    do
    {
      v5 = (CD2DContext *)((char *)v1 - 40);
      v6 = v1;
      v7 = *((_BYTE *)v1 - 6) == 0;
      v8 = v3;
      v1 = *(CD2DContext **)v1;
      if ( !v7 )
      {
        v3 = 0LL;
        if ( v1 != this && v1 != (CD2DContext *)40 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v1 - 5) + 8LL))((__int64)v1 - 40);
          v3 = (char *)v1 - 40;
        }
        v9 = *(CD2DContext **)v6;
        if ( *(CD2DContext **)(*(_QWORD *)v6 + 8LL) != v6 || (v10 = (CD2DContext **)*((_QWORD *)v6 + 1), *v10 != v6) )
          __fastfail(3u);
        *v10 = v9;
        *((_QWORD *)v9 + 1) = v10;
        CD2DResourceManager::UnmanageResource((CD2DContext **)this, v5);
        CD2DResource::MarkInvalid(v5);
        if ( v8 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
        v2 = 1;
      }
    }
    while ( v1 != this );
    if ( v3 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
