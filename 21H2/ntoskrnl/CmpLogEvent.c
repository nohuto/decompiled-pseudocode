/*
 * XREFs of CmpLogEvent @ 0x14086B874
 * Callers:
 *     HvpFinishPrimaryWrite @ 0x140613CA0 (HvpFinishPrimaryWrite.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall CmpLogEvent(PCEVENT_DESCRIPTOR EventDescriptor, int a2, unsigned __int16 *a3)
{
  ULONG v4; // eax
  int v5; // r8d
  __int16 v6; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  __int16 *v8; // [rsp+50h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-21h]
  __int64 v10; // [rsp+60h] [rbp-19h]
  int v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+6Ch] [rbp-Dh]
  int v13; // [rsp+E8h] [rbp+6Fh] BYREF

  v13 = a2;
  v6 = 0;
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v13;
    v4 = 1;
    if ( a3 )
    {
      v5 = *a3;
      v9 = 2LL;
      v6 = (unsigned __int16)v5 >> 1;
      v8 = &v6;
      v10 = *((_QWORD *)a3 + 1);
      v4 = 3;
      v11 = v5;
      v12 = 0;
    }
    EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, v4, &UserData);
  }
}
