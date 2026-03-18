/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800CCD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // bp
  unsigned int v9; // r14d
  int v10; // ebx
  __int64 i; // rdi
  __int64 v12; // rcx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 14);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    v8 = 0;
    if ( a2 )
    {
      if ( (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24) )
      {
        v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6);
        if ( v7 )
        {
          if ( *(_QWORD *)(v7 + 8) )
            v8 = 1;
        }
      }
    }
    v9 = *((_DWORD *)this + 36);
    v10 = 0;
    if ( !v9 )
      return 1;
    for ( i = 0LL; ; i += 8LL )
    {
      v12 = *(_QWORD *)(i + *((_QWORD *)this + 15));
      if ( v12
         ? (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v12 + 288LL))(
             v12,
             a2,
             &v15) == 0
         : !v8 )
      {
        break;
      }
      if ( ++v10 >= v9 )
        return 1;
    }
  }
  return 0;
}
