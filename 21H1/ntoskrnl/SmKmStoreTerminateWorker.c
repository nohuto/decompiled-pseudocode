/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140598620
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     SmEtwEnabled @ 0x1402C620C (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1403F5870 (ZwSetSystemInformation.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x140598088 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x140598208 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x14059A5AC (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  ULONGLONG *v9; // r14
  __int64 v10; // rbx
  struct _EX_RUNDOWN_REF *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rbx
  const wchar_t *v14; // rax
  ULONG ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20[2]; // [rsp+70h] [rbp-98h] BYREF
  int v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+84h] [rbp-84h]
  int v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  const wchar_t *v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A8h] [rbp-60h]
  _DWORD v29[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v30[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31[6]; // [rsp+578h] [rbp+470h] BYREF

  ReturnLength = 0;
  memset(v30, 0, 0x468uLL);
  v19 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset(v29, 0, 0x44uLL);
  v18 = 68LL;
  v17 = (__int64 *)v29;
  SystemInformation = 0x800000001LL;
  v29[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v17 = (__int64 *)v30,
        LODWORD(v18) = 1128,
        memset(&v30[1], 0, 0x464uLL),
        v2 = 0,
        v30[0] = 259,
        (v29[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v30[1] = v29[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v4 = 0;
        if ( v30[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v29[0]) )
        goto LABEL_10;
    }
    v5 = v30[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v30[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v30[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v31;
    v20[1] = (__int64)v30;
    v20[0] = (__int64)v31;
    v22 = 6;
    v24 = 1036;
    v9 = SmEtwEnabled(2);
    if ( v9 )
    {
      if ( P != (PVOID)-56LL )
        LOBYTE(v30[0]) = *((_BYTE *)P + 56);
      v31[0].Ptr = (ULONGLONG)v30;
      *(_QWORD *)&v31[0].Size = 1LL;
      if ( P != (PVOID)-60LL )
        *(_DWORD *)((char *)v30 + 1) = *((_DWORD *)P + 15);
      v31[1].Ptr = (ULONGLONG)v30 + 1;
      *(_QWORD *)&v31[1].Size = 4LL;
      v10 = *((_QWORD *)P + 5);
      v21 = 2;
      v23 = 5;
      SmKmEtwAppendProductName(v20, v10);
      SmKmEtwAppendObjectName((__int64)v20, *(_QWORD *)(v10 + 8));
      UserDataCount = v21;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v20[0];
    }
    v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v11 + 1);
    SystemInformation = 0xA00000001LL;
    v17 = &v19;
    v12 = v29[v3 + 1];
    LODWORD(v18) = 8;
    LODWORD(v19) = 1;
    HIDWORD(v19) = v12;
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18u) >= 0 )
    {
      if ( v9 )
      {
        EtwWriteEx(*v9, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength = UserData[3].Size;
          v13 = ReturnLength;
          memmove(v30, (const void *)UserData[3].Ptr, ReturnLength);
          v25 = 2;
          v14 = (const wchar_t *)v30;
          v27 = 1;
          *((_WORD *)v30 + (v13 >> 1)) = 0;
          if ( !LOWORD(v30[0]) )
            v14 = L"(null)";
          v26 = v14;
          v28 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v9);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
