/*
 * XREFs of InbvSetFunction @ 0x1403C43CC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140A67958 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C50A90;
  if ( (unsigned int)(dword_140C50A90 - 3) <= 1 )
  {
    if ( qword_140C50A98 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140C50A98 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140C02EE0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C50A90 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C02FA0;
    qword_140C50A98 = (__int64)v4;
  }
  return result;
}
