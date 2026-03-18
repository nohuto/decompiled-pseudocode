/*
 * XREFs of EtwpEventWriteTemplateSessAndProv @ 0x14093C5D0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     EtwpCloseRegistrationObject @ 0x14070F8D0 (EtwpCloseRegistrationObject.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateSessAndProv(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 *a5,
        ULONGLONG a6)
{
  ULONG v6; // r8d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]

  v6 = 2;
  if ( a4 == 2 )
  {
    UserData.Ptr = a6;
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    v10 = *a5;
    v12 = 2LL;
    v6 = 3;
    v11 = &EtwpNull;
LABEL_7:
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v6, &UserData);
  }
  if ( a5 )
  {
    UserData.Ptr = *((_QWORD *)a5 + 1);
    UserData.Size = *a5;
    v9 = &EtwpNull;
    UserData.Reserved = 0;
    v10 = 2LL;
  }
  else
  {
    v6 = 0;
    if ( a6 )
    {
      UserData.Ptr = a6;
      v6 = 1;
      goto LABEL_7;
    }
  }
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, v6, &UserData);
}
