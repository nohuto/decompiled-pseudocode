/*
 * XREFs of BapdpRegisterWbclData @ 0x140A42620
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A4217C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     BapdRegisterSiData @ 0x14099BD08 (BapdRegisterSiData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x140A42734 (BapdpQueryData.c)
 */

void __fastcall BapdpRegisterWbclData(__int64 a1)
{
  ULONG *PoolWithTag; // rbx
  int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+44h] [rbp-Ch]

  PoolWithTag = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v6 = -1200452434;
    v2 = 2;
    v7 = 1170082397;
    v8 = 24237205;
    v9 = 623825306;
  }
  else
  {
    v6 = -1237722659;
    v2 = 0;
    v7 = 1193042546;
    v8 = 878293681;
    v9 = 803227664;
  }
  LODWORD(NumberOfBytes) = 0;
  v3 = BapdpQueryData(a1, &v6, 0LL, 0LL, &NumberOfBytes);
  if ( v3 == -1073741789 )
  {
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
    v3 = 0;
  }
  if ( v3 >= 0 && (int)BapdpQueryData(v4, &v6, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
    BapdRegisterSiData(PoolWithTag, NumberOfBytes, v2);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
