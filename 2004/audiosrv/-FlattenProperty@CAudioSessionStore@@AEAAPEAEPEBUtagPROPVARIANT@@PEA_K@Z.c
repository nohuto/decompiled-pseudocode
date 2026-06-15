/*
 * XREFs of ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x180052C5C
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003F10 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     _lambda_af777b2df126523fb74d62acd9a62439_::operator() @ 0x18006E8B0 (_lambda_af777b2df126523fb74d62acd9a62439_--operator().c)
 */

unsigned __int8 *__fastcall CAudioSessionStore::FlattenProperty(
        CAudioSessionStore *this,
        const struct tagPROPVARIANT *a2,
        unsigned __int64 *a3)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  const struct tagPROPVARIANT *v6; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 *v7; // [rsp+60h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  *a3 = 0LL;
  v5 = 0LL;
  v4[1] = &v6;
  v4[2] = &v7;
  v4[0] = this;
  v4[3] = &v5;
  lambda_af777b2df126523fb74d62acd9a62439_::operator()(v4);
  return (unsigned __int8 *)v5;
}
