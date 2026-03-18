/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x1801DD664
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E0114 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Particles::BulkAnimator::Update(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, unsigned int a5)
{
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // r14
  unsigned int v12; // edi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h]
  unsigned int v25; // [rsp+90h] [rbp+8h]

  v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v11 = *a4;
  v12 = 0;
  v13 = *a3;
  v14 = (unsigned int)result;
  v25 = result;
  if ( a5 )
  {
    while ( 1 )
    {
      v15 = *((unsigned int *)a4 + 2);
      v19 = v9;
      v20 = v11 + 4 * v15;
      if ( !v20 && v9
        || (v16 = *(unsigned int *)(a2 + 8),
            v17 = v12 * *(_DWORD *)(a2 + 12),
            v23 = v14,
            (v24 = *(_QWORD *)a2 + 4 * (v16 + v17)) == 0)
        && v14
        || (v18 = *((unsigned int *)a3 + 2), v21 = v9, (v22 = v13 + 4 * v18) == 0) && v9 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, &v23, &v21, &v19);
      ++v12;
      v11 += 4LL * *((unsigned int *)a4 + 3);
      result = *((unsigned int *)a3 + 3);
      v13 += 4 * result;
      if ( v12 >= a5 )
        break;
      v14 = v25;
    }
  }
  return result;
}
