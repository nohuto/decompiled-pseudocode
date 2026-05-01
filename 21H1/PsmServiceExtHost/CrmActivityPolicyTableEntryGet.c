/*
 * XREFs of CrmActivityPolicyTableEntryGet @ 0x18002F788
 * Callers:
 *     CrmSrvActivityAllocate @ 0x18002F840 (CrmSrvActivityAllocate.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityPolicyTableEntryGet(int a1, int a2, __int64 a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // edx
  _DWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD Key[4]; // [rsp+40h] [rbp-38h] BYREF

  Key[0] = a1;
  Key[1] = a2;
  v6 = bsearch(Key, &CrmActivityToPolicyTable, 0x31uLL, 0xCuLL, CrmActivityPolicyTableCompare);
  v7 = 0;
  if ( !v6 )
  {
    if ( (unsigned int)(a1 - 9) > 0x72 || (unsigned int)(a2 - 301) > 0x72 )
      return (unsigned int)-1073741275;
    v9[0] = a1;
    v6 = v9;
    v9[1] = a2;
    v9[2] = 17;
  }
  *(_QWORD *)a3 = *(_QWORD *)v6;
  *(_DWORD *)(a3 + 8) = v6[2];
  return v7;
}
