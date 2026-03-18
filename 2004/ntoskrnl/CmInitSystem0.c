/*
 * XREFs of CmInitSystem0 @ 0x140A4B25C
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     CmpGetSystemControlValues @ 0x140A49A40 (CmpGetSystemControlValues.c)
 *     CmFcInitSystem1 @ 0x140A582BC (CmFcInitSystem1.c)
 */

__int64 __fastcall CmInitSystem0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 ***v4; // rax
  __int64 **v5; // rbx

  CmpGetSystemControlValues(*(_DWORD **)(a1 + 168), a2, 0);
  v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v5 = *v4;
  while ( v5 != (__int64 **)v4 )
  {
    if ( ((_DWORD)v5[3] & 0x40) != 0 )
      CmpGetSystemControlValues(v5[4], v3, 1);
    v5 = (__int64 **)*v5;
    v4 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  return CmFcInitSystem1();
}
