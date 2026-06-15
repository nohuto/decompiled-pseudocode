/*
 * XREFs of sub_180003E1C @ 0x180003E1C
 * Callers:
 *     sub_180003FA4 @ 0x180003FA4 (sub_180003FA4.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 */

__int64 __fastcall sub_180003E1C(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // r9
  int v6; // edx
  int v8; // edx
  DWORD v9; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v6 = 149;
    return sub_180003AE8(retaddr, v6, (__int64)"wil", v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v12 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v12) )
      {
        v6 = 173;
        return sub_180003AE8(retaddr, v6, (__int64)"wil", v5);
      }
      if ( v12 )
      {
        v8 = 174;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 177;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 == -1 )
      {
        v6 = 180;
        return sub_180003AE8(retaddr, v6, (__int64)"wil", v5);
      }
      if ( v9 )
      {
        v8 = 181;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v6 = 158;
        return sub_180003AE8(retaddr, v6, (__int64)"wil", v5);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 163;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v8 = 150;
LABEL_25:
  sub_180003AB0(retaddr, v8, (__int64)"wil", -2147418113);
  return 2147549183LL;
}
