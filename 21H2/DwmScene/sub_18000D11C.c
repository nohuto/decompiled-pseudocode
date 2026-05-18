/*
 * XREFs of sub_18000D11C @ 0x18000D11C
 * Callers:
 *     sub_18000EBA8 @ 0x18000EBA8 (sub_18000EBA8.c)
 * Callees:
 *     sub_18000DD4C @ 0x18000DD4C (sub_18000DD4C.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000D11C(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v7; // rdx
  DWORD v8; // eax
  int PreviousCount; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+24h] [rbp-14h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 149LL;
    return sub_18000DD4C(retaddr, v5, &unk_18013FEA4);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v10 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v10) )
      {
        v5 = 173LL;
        return sub_18000DD4C(retaddr, v5, &unk_18013FEA4);
      }
      if ( v10 )
      {
        v7 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 177LL;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 180LL;
        return sub_18000DD4C(retaddr, v5, &unk_18013FEA4);
      }
      if ( v8 )
      {
        v7 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 158LL;
        return sub_18000DD4C(retaddr, v5, &unk_18013FEA4);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 150LL;
LABEL_25:
  sub_18000DD78(retaddr, v7, &unk_18013FEA4, 2147549183LL, PreviousCount, v11);
  return 2147549183LL;
}
