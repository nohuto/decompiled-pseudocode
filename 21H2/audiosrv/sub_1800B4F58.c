/*
 * XREFs of sub_1800B4F58 @ 0x1800B4F58
 * Callers:
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 */

__int64 __fastcall sub_1800B4F58(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  int v7; // edx
  DWORD v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 149LL;
    return sub_1800B5768(retaddr, v5, "wil");
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v11 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v11) )
      {
        v5 = 173LL;
        return sub_1800B5768(retaddr, v5, "wil");
      }
      if ( v11 )
      {
        v7 = 174;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 177;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 180LL;
        return sub_1800B5768(retaddr, v5, "wil");
      }
      if ( v8 )
      {
        v7 = 181;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 158LL;
        return sub_1800B5768(retaddr, v5, "wil");
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 163;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 150;
LABEL_25:
  sub_18004BD84((int)retaddr, v7, (int)"wil", -2147418113);
  return 2147549183LL;
}
