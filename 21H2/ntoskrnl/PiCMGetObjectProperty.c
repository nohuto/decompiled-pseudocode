/*
 * XREFs of PiCMGetObjectProperty @ 0x14062994C
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiCMCapturePropertyInputData @ 0x140629BE4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140629EA4 (PiCMReleasePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  PVOID PoolWithTag; // rsi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // r12d
  int v16; // edi
  int v17; // ecx
  int ObjectProperty; // eax
  int v19; // eax
  unsigned int v21; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v23; // [rsp+68h] [rbp-61h]
  _QWORD v24[10]; // [rsp+70h] [rbp-59h] BYREF

  v6 = a6;
  v23 = a6;
  memset(v24, 0, 0x48uLL);
  *a6 = 0;
  PoolWithTag = 0LL;
  v21 = 0;
  v22 = 0;
  v12 = PiCMCapturePropertyInputData(a1, a2, a5, v24);
  v13 = 0LL;
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_29;
  v15 = v24[2];
  if ( v24[2] && !HIDWORD(v24[0]) && !v24[7] && !LODWORD(v24[8]) && !LODWORD(v24[6]) )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v14 = -1073741811;
      goto LABEL_34;
    }
    v16 = 0;
    if ( SLODWORD(v24[1]) <= 6 )
    {
      switch ( LODWORD(v24[1]) )
      {
        case 6:
          v16 = 6;
LABEL_19:
          if ( v14 < 0 )
            goto LABEL_34;
          if ( a4 != 20 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 - 20, 0x34706E50u);
            if ( !PoolWithTag )
              v14 = -1073741670;
          }
          if ( v14 < 0 )
            goto LABEL_34;
          ObjectProperty = PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             v15,
                             v16,
                             0,
                             0LL,
                             (__int64)&v24[3] + 4,
                             (__int64)&v21,
                             (__int64)PoolWithTag,
                             a4 - 20,
                             (__int64)&v22,
                             0);
          v6 = v23;
          v14 = ObjectProperty;
          goto LABEL_25;
        case 1:
          v16 = 1;
          goto LABEL_19;
        case 2:
          v16 = 2;
          goto LABEL_19;
        case 3:
          v16 = 4;
          goto LABEL_19;
        case 4:
          v16 = 3;
          goto LABEL_19;
        case 5:
          v16 = 5;
          goto LABEL_19;
      }
LABEL_17:
      if ( !v16 )
        v14 = -1073741811;
      goto LABEL_19;
    }
    switch ( LODWORD(v24[1]) )
    {
      case 0x10001:
        v17 = 7;
        break;
      case 0x10002:
        v17 = 8;
        break;
      case 0x10003:
        v17 = 9;
        break;
      case 0x10004:
        v17 = 10;
        break;
      case 0x10005:
        v17 = 11;
        break;
      default:
        goto LABEL_17;
    }
    v16 = PiDrvDbCtx != 0 ? v17 : 0;
    goto LABEL_17;
  }
  v14 = -1073741811;
LABEL_25:
  if ( v14 >= 0 )
  {
    v19 = PiCMReturnBufferResultData((unsigned int)v14, v22, v21, PoolWithTag, v22, HIDWORD(v24[8]), a3, a4, v6);
    goto LABEL_27;
  }
LABEL_34:
  v19 = PiCMReturnBufferResultData((unsigned int)v14, v22, v21, 0LL, 0, HIDWORD(v24[8]), a3, a4, v23);
LABEL_27:
  v14 = v19;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_29:
  PiCMReleasePropertyInputData(v24, v13);
  return (unsigned int)v14;
}
