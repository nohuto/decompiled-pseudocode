/*
 * XREFs of sub_180036BEC @ 0x180036BEC
 * Callers:
 *     sub_18001ACFC @ 0x18001ACFC (sub_18001ACFC.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_1800368E4 @ 0x1800368E4 (sub_1800368E4.c)
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 */

__int64 __fastcall sub_180036BEC(HANDLE ProcessHandle, _QWORD *a2)
{
  signed int LastError; // ebx
  int v5; // edi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // rbx
  int v11; // eax
  void *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = sub_180036A50(TokenHandle, P, (const UNICODE_STRING **)&P[1]);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  v5 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v5 = LastError;
  if ( v5 != -2147023728 && v5 != -2147024891 )
  {
    if ( v5 >= 0 )
    {
      if ( (unsigned int)sub_1800368E4((__int64)P, 0, &v17, 0LL) == 122 )
      {
        pv = 0LL;
        CoTaskMemFree(0LL);
        v9 = sub_180018844(v8, v7, 0LL, v17, v14, &pv);
        v10 = pv;
        v5 = v9;
        if ( v9 >= 0 )
        {
          v11 = sub_1800368E4((__int64)P, v17, &v17, (char *)pv);
          if ( v11 )
          {
            v5 = sub_18000A4C0(retaddr, 172, (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp", v11);
          }
          else
          {
            v12 = v10;
            v10 = 0LL;
            v5 = 0;
            *a2 = v12;
          }
        }
        else
        {
          sub_180003AB0(retaddr, 171, (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp", v9);
        }
        CoTaskMemFree(v10);
        goto LABEL_24;
      }
      v5 = -2147418113;
      v6 = 168;
    }
    else
    {
      v6 = 165;
    }
    sub_180003AB0(retaddr, v6, (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp", v5);
  }
LABEL_24:
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  return (unsigned int)v5;
}
