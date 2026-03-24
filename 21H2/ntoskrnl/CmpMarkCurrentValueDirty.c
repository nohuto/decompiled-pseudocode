/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x14079EC80
 * Callers:
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x14066963C (CmpFindValueByName.c)
 *     HvpMarkCellDirty @ 0x140708420 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407AC8F8 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rax
  unsigned int ValueByName; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+44h] [rbp+1Ch]

  v7 = -1;
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v7);
  if ( v3 )
  {
    v6 = 0;
    CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v3, &CmpSelectString, &v6);
    LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
    if ( v6 != -1 )
    {
      v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v7);
      if ( v3 )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter2, v3, (__int64)&CmpCurrentString);
        LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
        if ( ValueByName != -1 )
          LOBYTE(v3) = HvpMarkCellDirty(BugCheckParameter2, ValueByName, 0);
      }
    }
  }
  return v3;
}
