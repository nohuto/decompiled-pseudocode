/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180215540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  float result; // xmm0_4
  const void *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v5 )
    v5 = (_QWORD *)v5[2];
  v7 = (*(__int64 (__fastcall **)(_QWORD *, struct CExpressionValueStack *, __int64, char *))(*v5 + 248LL))(
         v5,
         a3,
         a4,
         &v14);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT(v7, retaddr);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    v8 = *(_QWORD *)(v8 + 16);
  v9 = *(_DWORD *)(v8 + 144);
  if ( v9 == 18 )
  {
    v10 = *((_DWORD *)a3 + 4);
    result = *(float *)(*((_QWORD *)a3 + 3) + 80LL * (unsigned int)(v10 - 1));
  }
  else
  {
    if ( v9 != 35 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v10 = *((_DWORD *)a3 + 4);
    v11 = *((_QWORD *)a3 + 3);
    result = *(float *)(v11 + 80LL * (unsigned int)(v10 - 1));
    if ( *((_DWORD *)this + 6) )
      result = *(float *)(v11 + 80LL * (unsigned int)(v10 - 1) + 4);
  }
  *((_DWORD *)a3 + 4) = v10 - 1;
  return result;
}
