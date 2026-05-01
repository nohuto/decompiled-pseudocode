/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180075CE0
 * Callers:
 *     _lambda_401d01c73f60d7ebe16a53195295e8a5_::operator() @ 0x180075B08 (_lambda_401d01c73f60d7ebe16a53195295e8a5_--operator().c)
 *     _lambda_e77970cd92140e07acf370381d6037d8_::operator() @ 0x180075BF8 (_lambda_e77970cd92140e07acf370381d6037d8_--operator().c)
 *     _lambda_e510b34b5f630f9aeb424769ab376110_::operator() @ 0x1802DE120 (_lambda_e510b34b5f630f9aeb424769ab376110_--operator().c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004E1B4 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  float v9; // xmm1_4
  char v10; // r14
  float v11; // xmm1_4
  _OWORD *v12; // r8
  __int128 v13; // xmm1
  char v14; // si
  _OWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  *(_BYTE *)(a1 + 512) = 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = *(float *)a2;
    if ( *(float *)(a1 + 496) == *(float *)a2 && *(float *)(a1 + 500) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 500) = *(_DWORD *)(a2 + 4);
      *(float *)(a1 + 496) = v9;
    }
  }
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 504) == v11 && *(float *)(a1 + 508) == *(float *)(a2 + 12) )
    {
      if ( !IsPPIEdition() )
        a3 &= ~2u;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(a1 + 508) = *(_DWORD *)(a2 + 12);
      *(float *)(a1 + 504) = v11;
    }
  }
  v12 = (_OWORD *)(a1 + 520);
  v17 = *(_DWORD *)(a1 + 560);
  v13 = *(_OWORD *)(a1 + 536);
  v15[0] = *(_OWORD *)(a1 + 520);
  v16 = *(_QWORD *)(a1 + 552);
  v15[1] = v13;
  if ( a4 )
  {
    *v12 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 536) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 552) = *(_QWORD *)(a4 + 32);
    *(_DWORD *)(a1 + 560) = *(_DWORD *)(a4 + 40);
  }
  v14 = 0;
  if ( a4 )
    v14 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 144LL))(a1, v15);
  if ( (a3 & 3) != 0 || v14 )
  {
    LOBYTE(v12) = v14;
    LOBYTE(v8) = v10;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 152LL))(a1, v8, v12);
    WindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v14) && !*(_BYTE *)(a1 + 580) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  }
}
