/*
 * XREFs of ?Retire@CFlipContentToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C006FE10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C006A660 (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 */

void __fastcall CFlipContentToken::Retire(CFlipContentToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rax
  struct FlipManagerObject *v3; // rcx
  int v4; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v5[3]; // [rsp+28h] [rbp-11h] BYREF
  GUID v6; // [rsp+40h] [rbp+7h] BYREF
  int v7; // [rsp+50h] [rbp+17h]
  int *v8; // [rsp+58h] [rbp+1Fh]
  GUID v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+37h]
  _QWORD *v11; // [rsp+78h] [rbp+3Fh]

  v5[0] = *((_QWORD *)this + 13);
  v2 = *((_QWORD *)this + 14);
  *((_DWORD *)this + 6) = 5;
  v3 = (struct FlipManagerObject *)*((_QWORD *)this + 11);
  v5[1] = v2;
  v5[2] = *((_QWORD *)a2 + 2);
  v6 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v8 = &v4;
  v11 = v5;
  v4 = 3;
  v7 = 4;
  v9 = GUID_0b09f893_2cd6_4e6b_9e4e_99d293ba136d;
  v10 = 24;
  FlipManagerDwmPostConsumerMessage(v3, (__int64)a2, (struct FlipPropertyItem *)&v6);
}
