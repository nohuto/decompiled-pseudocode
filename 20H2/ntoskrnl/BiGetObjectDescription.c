/*
 * XREFs of BiGetObjectDescription @ 0x14077E1F8
 * Callers:
 *     BcdQueryObject @ 0x14077F524 (BcdQueryObject.c)
 *     BcdEnumerateObjects @ 0x1409715F4 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x140973210 (BiBuildIdentifierList.c)
 *     BiIsLinkedToEfiVariable @ 0x140974FC8 (BiIsLinkedToEfiVariable.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectDescription(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  __int64 v5; // rcx
  int RegistryValue; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = BiOpenKey(a1, L"Description", 131097LL, v8);
  if ( v4 >= 0 )
  {
    v5 = v8[0];
    v9 = 0;
    *a2 = 1;
    RegistryValue = BiGetRegistryValue(v5, L"Type", 0LL, 4LL, &v10, &v9);
    v3 = v10;
    v4 = RegistryValue;
    if ( RegistryValue >= 0 )
    {
      if ( v9 == 4 )
        a2[1] = *v10;
      else
        v4 = -1073741788;
    }
  }
  if ( v8[0] )
    BiCloseKey(v8[0]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v4;
}
