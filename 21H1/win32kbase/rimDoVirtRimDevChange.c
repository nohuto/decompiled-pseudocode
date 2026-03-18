/*
 * XREFs of rimDoVirtRimDevChange @ 0x1C0175A60
 * Callers:
 *     ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB550 (-ivHandlePnpOtherPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 */

_UNKNOWN **__fastcall rimDoVirtRimDevChange(_QWORD *Object, PCUNICODE_STRING String1, int a3)
{
  int v3; // r15d
  __int64 i; // rbx
  PCUNICODE_STRING v6; // r14
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  _UNKNOWN **result; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  i = 0LL;
  v6 = String1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(String1) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)String1, 1, 74, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        4u,
        1u,
        0x4Bu,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        v6->Buffer);
  }
  if ( !*((_BYTE *)Object + 81) )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v17, 1, 1u);
    RIMLockExclusive((__int64)(Object + 13));
    if ( !*((_BYTE *)Object + 80) && !*((_BYTE *)Object + 81) )
    {
      for ( i = Object[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( RtlEqualUnicodeString(v6, (PCUNICODE_STRING)(i + 208), 0) )
        {
          v3 = 1;
          v8 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
          if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              (__int64)gRimLog,
              4u,
              1u,
              0x4Cu,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              Object,
              v8);
          v9 = ObReferenceObjectByPointer(*(PVOID *)(i + 32), 3u, ExRawInputManagerObjectType, 1);
          if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v9;
            WPP_RECORDER_SF_qd(
              (__int64)gRimLog,
              4u,
              1u,
              0x4Du,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              Object,
              v16);
          }
          break;
        }
      }
    }
    Object[14] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 13, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
  }
  if ( v3 )
  {
    RIMLockExclusive((__int64)(Object + 13));
    v11 = *(_DWORD *)(i + 184);
    if ( (v11 & 0x2000) != 0 )
    {
      if ( a3 == 3 )
        RIMIDERemoveInjectionDevice(*(_QWORD *)(i + 32));
      goto LABEL_33;
    }
    if ( a3 == 2 )
    {
      v15 = 0;
      v12 = v11 | 0x20000;
      v13 = 1;
      v14 = 0;
    }
    else
    {
      if ( a3 == 3 )
      {
        v15 = 0;
        v12 = v11 | 0x40000;
        v14 = 1;
      }
      else
      {
        if ( a3 != 4 )
        {
LABEL_33:
          Object[14] = 0LL;
          ExReleasePushLockExclusiveEx(Object + 13, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(*(PVOID *)(i + 32));
          return (_UNKNOWN **)ObfDereferenceObject(Object);
        }
        v15 = 1;
        v12 = v11 | 0x40000;
        v14 = 0;
      }
      v13 = 0;
    }
    *(_DWORD *)(i + 184) = v12;
    RIMSignalOnPnpNotificationAndWait((__int64)Object, i, v13, v14, 0, v15);
    goto LABEL_33;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_S(
                          (__int64)gRimLog,
                          4u,
                          1u,
                          0x4Eu,
                          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                          v6->Buffer);
  return result;
}
