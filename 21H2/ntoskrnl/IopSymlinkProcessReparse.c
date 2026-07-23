/*
 * XREFs of IopSymlinkProcessReparse @ 0x1405FDA18
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140239680 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1402396A0 (IopSymlinkGetECP.c)
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x140894988 (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdx
  struct _ECP_LIST *v8; // rcx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  UNICODE_STRING *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, v4 - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(v4) = IopGraftName(a1, a2);
  }
  else if ( v4 > 2 )
  {
    v8 = *(struct _ECP_LIST **)(a1 + 112);
    v12 = 0LL;
    LODWORD(v4) = IopSymlinkGetECP(v8, (PVOID *)&v12);
    if ( (v4 & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v12),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, MostRecentlyUsedName + 16),
          LODWORD(v4) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, a1, v12),
          (v4 & 0x80000000) != 0LL) )
    {
      *(_DWORD *)(a1 + 48) = v4;
    }
  }
  return v4;
}
