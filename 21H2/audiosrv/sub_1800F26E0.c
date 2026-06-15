/*
 * XREFs of sub_1800F26E0 @ 0x1800F26E0
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_1800F24F0 @ 0x1800F24F0 (sub_1800F24F0.c)
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 *     sub_1800F479C @ 0x1800F479C (sub_1800F479C.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800F3500 @ 0x1800F3500 (sub_1800F3500.c)
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 *     sub_1800F580C @ 0x1800F580C (sub_1800F580C.c)
 */

__int64 __fastcall sub_1800F26E0(__int64 a1, int a2, unsigned int a3, unsigned int a4, int a5, _QWORD *a6)
{
  unsigned int v7; // r14d
  LPVOID v10; // rax
  int v11; // ecx
  __int64 v12; // r8
  void *v13; // rdi
  int v14; // ebx
  DWORD CurrentProcessId; // eax
  DWORD v16; // eax
  int v17; // r15d
  int v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h] BYREF
  HANDLE Handles; // [rsp+60h] [rbp-19h] BYREF
  __int128 v22; // [rsp+68h] [rbp-11h] BYREF

  v20 = 0LL;
  v19 = 0;
  v7 = 100;
  if ( a4 <= 0x64 )
    v7 = a4;
  v10 = sub_180055F40(saturated_mul(a3, 0x18uLL));
  v13 = v10;
  if ( v10 )
  {
    v14 = sub_1800F3500(v11, a2, a3, v7, (__int64)v10);
    if ( v14 >= 0 )
    {
      if ( !a5 )
        goto LABEL_11;
      CurrentProcessId = GetCurrentProcessId();
      v14 = RmAvailabilityCheck(a3, v13, v7, CurrentProcessId);
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( a5 )
  {
    if ( v13 )
      sub_180033A70(v13);
    return (unsigned int)v14;
  }
LABEL_11:
  if ( v14 < 0
    || (v16 = GetCurrentProcessId(),
        v14 = RmAcquireResources(a3, v13, v7, v16, a1, *(_QWORD *)(a1 + 104), 0, 0, &v19, &v20),
        v14 < 0) )
  {
    v14 = -2005139335;
  }
  else if ( v19 )
  {
    v17 = 0;
    while ( 1 )
    {
      Handles = *(HANDLE *)(a1 + 104);
      if ( WaitForMultipleObjects(1u, &Handles, 0, 0x3E8u) )
      {
        v14 = -2005139335;
      }
      else
      {
        sub_1800F3EAC(a1);
        v22 = 0LL;
        while ( (int)RmGetNotification(v20, &v22) >= 0 )
        {
          if ( (_DWORD)v22 )
          {
            if ( (_DWORD)v22 == 1 )
              v14 = -2005139335;
          }
          else
          {
            v17 = 1;
          }
        }
      }
      if ( v14 < 0 )
        break;
      if ( v17 )
        goto LABEL_29;
    }
    RmReleaseResources(v20);
  }
  else
  {
LABEL_29:
    *a6 = v20;
  }
  if ( v13 )
    sub_180033A70(v13);
  if ( v14 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0xFu, (__int64)&unk_180171BD8, v14);
    }
  }
  else if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
         && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
         && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800F580C(*((_QWORD *)off_18019C348 + 2), 14LL, v12, v7, *a6);
  }
  return (unsigned int)v14;
}
