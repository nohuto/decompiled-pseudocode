/*
 * XREFs of SbpTraceContextUpdate @ 0x1801138E8
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE04 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18007F2A4 (SbObtainTraceHandle.c)
 * Callees:
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

ULONG __fastcall SbpTraceContextUpdate(
        REGHANDLE RegHandle,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned int v6; // esi
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-51h] BYREF
  __int16 *v13; // [rsp+48h] [rbp-41h]
  __int64 v14; // [rsp+50h] [rbp-39h]
  __int16 *v15; // [rsp+58h] [rbp-31h]
  __int64 v16; // [rsp+60h] [rbp-29h]
  _QWORD v17[10]; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int16 v18; // [rsp+100h] [rbp+77h] BYREF

  v18 = a4;
  v6 = a4;
  memset(v17, 0, sizeof(v17));
  v11 = a3;
  UserData.Ptr = a2;
  v13 = &v11;
  v15 = (__int16 *)&v18;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = 3;
  v14 = 2LL;
  v16 = 2LL;
  if ( (_WORD)v6 )
  {
    v9 = 4;
    v17[0] = a5;
    v17[1] = v6;
  }
  return EtwEventWrite(RegHandle, &AeSbContextUpdateEvent, v9, &UserData);
}
