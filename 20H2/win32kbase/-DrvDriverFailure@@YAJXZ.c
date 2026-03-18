/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1C0139A94
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C0139874 (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 *     CollectDriverFailureData @ 0x1C01479C4 (CollectDriverFailureData.c)
 */

__int64 DrvDriverFailure(void)
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  wchar_t *i; // rax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[34]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v14, 0, sizeof(v14));
  LOBYTE(v14[0]) = gbFullScreen;
  v14[1] = gpDispInfo;
  v14[2] = __PAIR64__(gbGDIOn, gbMDEVDisabled);
  LODWORD(v14[3]) = gnDCECount;
  v14[4] = gpvwplHungRedraw;
  v14[5] = ghrgnInvalidSum;
  v14[6] = ghrgnVisNew;
  v14[7] = ghrgnSWP1;
  v14[8] = ghrgnValid;
  v14[9] = ghrgnValidSum;
  v14[10] = ghrgnInvalid;
  v14[11] = ghrgnInv0;
  v14[12] = ghrgnInv1;
  v14[13] = ghrgnInv2;
  v14[14] = ghdcMem;
  v14[15] = ghdcMem2;
  v14[16] = ghrgnGDC;
  v14[17] = ghrgnSCR;
  v14[18] = ghrgnSPB1;
  v14[19] = ghrgnSPB2;
  v14[20] = ghrgnSW;
  v14[21] = ghrgnScrl1;
  v14[22] = ghrgnScrl2;
  v14[23] = ghrgnScrlVis;
  v14[24] = ghrgnScrlSrc;
  v14[25] = ghrgnScrlDst;
  v14[26] = ghrgnScrlValid;
  v14[27] = gpWin32kDriverObject;
  LODWORD(v14[28]) = gnRetryReadInput;
  if ( gbExitInProgress )
  {
    v0 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v0 = 1;
      v4 = WdLogNewEntry5_WdError(v2, v1, v3);
      *(_QWORD *)(v4 + 24) = -1073741431LL;
      WdLogEvent5_WdError(v4, v5);
    }
    else if ( gpLastFailedPhysDisp )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( (wchar_t *)gpLastFailedPhysDisp == i )
        {
          v0 = 2;
          break;
        }
      }
    }
  }
  if ( gulDriverFailureReason )
    v0 = gulDriverFailureReason;
  if ( v0 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( gpDispInfo )
      tagKERNELDISPLAYINFO::operator=(&v14[29]);
    CollectDriverFailureData(&BugCheckParameter1, v14);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
