/*
 * XREFs of CmInitSystem0 @ 0x140A60694
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     CmFcInitSystem1 @ 0x140A5AF60 (CmFcInitSystem1.c)
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 */

int __fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ***v5; // rax
  __int64 **v6; // rbx

  CmpGetSystemControlValues(*(_QWORD *)(a1 + 168), a2, 0LL);
  v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v6 = *v5;
  while ( v6 != (__int64 **)v5 )
  {
    if ( ((_DWORD)v6[3] & 0x40) != 0 )
    {
      LOBYTE(v4) = 1;
      CmpGetSystemControlValues(v6[4], v3, v4);
    }
    v6 = (__int64 **)*v6;
    v5 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  return CmFcInitSystem1();
}
