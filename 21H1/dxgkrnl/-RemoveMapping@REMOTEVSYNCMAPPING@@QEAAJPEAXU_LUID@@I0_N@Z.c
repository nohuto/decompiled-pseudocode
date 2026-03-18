/*
 * XREFs of ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C004D808
 * Callers:
 *     _lambda_7d3cd37763849674b9723316c3f03de5_::operator() @ 0x1C0233828 (_lambda_7d3cd37763849674b9723316c3f03de5_--operator().c)
 * Callees:
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___ @ 0x1C004D168 (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::RemoveMapping(
        REMOTEVSYNCMAPPING *this,
        void *a2,
        struct _LUID a3,
        int a4,
        void *a5)
{
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  void *v7; // [rsp+58h] [rbp+18h] BYREF
  struct _LUID v8; // [rsp+60h] [rbp+20h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = &v7;
  v6[1] = &v8;
  v6[2] = &v9;
  v6[3] = &a5;
  return REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___(this, (__int64)v6);
}
