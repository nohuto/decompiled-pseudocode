/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z @ 0x1801DC144
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801DED74 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Particles::BulkAnimator::Update(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 *result; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+58h]

  v10 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v12 = *a3;
  v13 = 0;
  v14 = *a4;
  v15 = v11;
  result = a5;
  v29 = v15;
  v17 = *a5;
  if ( a6 )
  {
    while ( 1 )
    {
      v18 = *((unsigned int *)result + 2);
      v23[0] = v10;
      v19 = v17 + 4 * v18;
      v23[1] = v19;
      if ( !v19 && v10 )
        goto LABEL_12;
      v20 = *(unsigned int *)(a2 + 8);
      v21 = v13 * *(_DWORD *)(a2 + 12);
      v26[0] = v15;
      v19 = *(_QWORD *)a2 + 4 * (v20 + v21);
      v26[1] = v19;
      if ( !v19 )
      {
        if ( v15 )
          goto LABEL_12;
      }
      if ( (v25[0] = v10, v19 = v12 + 4LL * *((unsigned int *)a3 + 2), (v25[1] = v19) == 0LL) && v10
        || (v22 = *((unsigned int *)a4 + 3), v24[0] = v22, (v24[1] = v14) == 0LL) && v22 )
      {
LABEL_12:
        ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v19, v15);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 8LL))(
        a1,
        v26,
        v25,
        v24,
        v23);
      ++v13;
      v17 += 4LL * *((unsigned int *)a5 + 3);
      v12 += 4LL * *((unsigned int *)a3 + 3);
      result = (__int64 *)*((unsigned int *)a4 + 3);
      v14 += 4LL * (_QWORD)result;
      if ( v13 >= a6 )
        break;
      v15 = v29;
      result = a5;
    }
  }
  return result;
}
