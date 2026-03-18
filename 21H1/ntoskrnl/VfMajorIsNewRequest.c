/*
 * XREFs of VfMajorIsNewRequest @ 0x1409D49F0
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4520 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x1409CCC2C (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  unsigned int (__fastcall *v5)(__int64); // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  v5 = (unsigned int (__fastcall *)(__int64))*((_QWORD *)&unk_140D490F8 + 12 * v4);
  if ( v5 && v5(a1) )
    return 1LL;
  result = (__int64)qword_140D49B78;
  if ( qword_140D49B78 )
    return qword_140D49B78(a1, a2);
  return result;
}
