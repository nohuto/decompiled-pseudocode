/*
 * XREFs of sub_18003B07C @ 0x18003B07C
 * Callers:
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 * Callees:
 *     sub_180065FD4 @ 0x180065FD4 (sub_180065FD4.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 */

__int64 __fastcall sub_18003B07C(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v8 = 149LL;
    return sub_180065FD4(retaddr, v8);
  }
  if ( v4 && v4 != 258 )
  {
    v7 = 150LL;
    goto LABEL_25;
  }
  PreviousCount = 0;
  if ( v4 )
  {
    v12 = 0;
    if ( ReleaseSemaphore(hHandle, 1, &v12) )
    {
      if ( v12 )
      {
        v7 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 177LL;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 != -1 )
      {
        if ( v9 )
        {
          v7 = 181LL;
          goto LABEL_25;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      v8 = 180LL;
    }
    else
    {
      v8 = 173LL;
    }
    return sub_180065FD4(retaddr, v8);
  }
  if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
  {
    v8 = 158LL;
    return sub_180065FD4(retaddr, v8);
  }
  ++PreviousCount;
  if ( !ReleaseSemaphore(hHandle, 1, 0LL) && GetLastError() == 298 )
    goto LABEL_7;
  v7 = 163LL;
LABEL_25:
  sub_180065FF4(retaddr, v7, v5, 2147549183LL);
  return 2147549183LL;
}
