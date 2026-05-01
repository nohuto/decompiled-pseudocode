/*
 * XREFs of _lambda_195f040505ee80ab9bd0c27fbd97ae40_::operator() @ 0x18005BCF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_195f040505ee80ab9bd0c27fbd97ae40___::Run @ 0x18005BCD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_195f040505ee80ab9bd0c27fbd97ae40___--.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800447C8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18005BF64 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_195f040505ee80ab9bd0c27fbd97ae40_::operator()(__int64 a1)
{
  float v2; // xmm8_4
  float v3; // xmm9_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rdx
  char v10; // r15
  _OWORD *v11; // r8
  char v12; // si
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-98h] BYREF
  _OWORD v16[2]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h]
  int v18; // [rsp+50h] [rbp-68h]

  v2 = (float)(*(_DWORD *)(**(_QWORD **)a1 + 8LL) - ***(_DWORD ***)a1);
  v3 = (float)(*(_DWORD *)(**(_QWORD **)a1 + 12LL) - *(_DWORD *)(**(_QWORD **)a1 + 4LL));
  v4 = (float)***(int ***)a1;
  v5 = (float)*(int *)(**(_QWORD **)a1 + 4LL);
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 288LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL),
    &SRWLock);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = **(_QWORD **)(a1 + 16);
  v8 = 3;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 288) + 216LL))(*(_QWORD *)(v6 + 288));
  *(_BYTE *)(v6 + 512) = 1;
  if ( *(float *)(v6 + 496) == v4 && *(float *)(v6 + 500) == v5 )
  {
    v8 = 2;
  }
  else
  {
    *(float *)(v6 + 496) = v4;
    *(float *)(v6 + 500) = v5;
  }
  v10 = 0;
  if ( *(float *)(v6 + 504) == v2 && *(float *)(v6 + 508) == v3 )
  {
    if ( !IsPPIEdition() )
      v8 &= ~2u;
  }
  else
  {
    *(float *)(v6 + 504) = v2;
    *(float *)(v6 + 508) = v3;
    v10 = 1;
  }
  v11 = (_OWORD *)(v6 + 520);
  v16[0] = *(_OWORD *)(v6 + 520);
  v16[1] = *(_OWORD *)(v6 + 536);
  v17 = *(_QWORD *)(v6 + 552);
  v18 = *(_DWORD *)(v6 + 560);
  if ( v7 )
  {
    *v11 = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 536) = *(_OWORD *)(v7 + 16);
    *(_QWORD *)(v6 + 552) = *(_QWORD *)(v7 + 32);
    *(_DWORD *)(v6 + 560) = *(_DWORD *)(v7 + 40);
  }
  v12 = 0;
  if ( v7 )
    v12 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v6 + 144LL))(v6, v16);
  if ( v8 || v12 )
  {
    LOBYTE(v11) = v12;
    LOBYTE(v9) = v10;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v6 + 152LL))(v6, v9, v11);
    WindowWrapperBase::PushBoundsToWindow(v6, v8);
    if ( ((v8 & 2) != 0 || v12) && !*(_BYTE *)(v6 + 580) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 200LL))(v6);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
