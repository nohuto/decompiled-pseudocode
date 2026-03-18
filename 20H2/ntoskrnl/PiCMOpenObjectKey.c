/*
 * XREFs of PiCMOpenObjectKey @ 0x140641670
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     _PnpOpenObjectRegKey @ 0x14063FA94 (_PnpOpenObjectRegKey.c)
 *     PiCMReleaseRegistryInputData @ 0x1406418A0 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406418D0 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x140641968 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406455BC (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x1406CB08C (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x14072E06C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+70h] [rbp-10h]

  v17 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  *a6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, &v18);
  if ( Object < 0 )
    goto LABEL_21;
  if ( !(_QWORD)v19 || DWORD1(v18) || DWORD1(v20) || !a3 || a4 < 0x10 )
    goto LABEL_48;
  v10 = 0;
  if ( SDWORD2(v18) <= 6 )
  {
    switch ( DWORD2(v18) )
    {
      case 6:
        v10 = 6;
        goto LABEL_45;
      case 1:
        v10 = 1;
LABEL_46:
        Object = -1073741637;
        goto LABEL_14;
      case 2:
        v10 = 2;
        goto LABEL_14;
      case 3:
        v10 = 4;
        goto LABEL_14;
      case 4:
        v10 = 3;
        goto LABEL_45;
      case 5:
        v10 = 5;
        goto LABEL_45;
    }
  }
  else
  {
    switch ( DWORD2(v18) )
    {
      case 0x10001:
        v11 = 7;
        goto LABEL_11;
      case 0x10002:
        v11 = 8;
LABEL_11:
        v10 = PiDrvDbCtx != 0 ? v11 : 0;
        break;
      case 0x10003:
        v11 = 9;
        goto LABEL_11;
      case 0x10004:
        v11 = 10;
        goto LABEL_11;
      case 0x10005:
        v11 = 11;
        goto LABEL_11;
    }
  }
  if ( !v10 )
  {
LABEL_48:
    Object = -1073741811;
    goto LABEL_18;
  }
  if ( v10 > 6 || v10 <= 4 )
    goto LABEL_14;
LABEL_45:
  if ( (_DWORD)v20 == 1 )
    goto LABEL_46;
LABEL_14:
  if ( Object >= 0 )
  {
    Object = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v19, v10, SHIDWORD(v19), 0, (__int64)&Handle);
    if ( Object != -1073741772 )
      goto LABEL_16;
    if ( (_DWORD)v20 == 1 )
    {
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
      {
        Object = PnpCreateObject(v15, v19, v10, HIDWORD(v19), (__int64)&Handle);
LABEL_16:
        if ( Object >= 0 )
        {
          LOBYTE(v13) = PreviousMode;
          Object = PiCMDuplicateRegistryHandle(Handle, v12, HIDWORD(v19), v13, &v17);
        }
        goto LABEL_18;
      }
      Object = -1073741790;
    }
  }
LABEL_18:
  Object = PiCMReturnHandleResultData((unsigned int)Object, v17, DWORD2(v20), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v17 )
    ObCloseHandle(v17, PreviousMode);
LABEL_21:
  PiCMReleaseRegistryInputData(&v18);
  return (unsigned int)Object;
}
