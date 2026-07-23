/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x1408B0A4C
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnBufferResultData @ 0x14062C594 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectPropertyKeys @ 0x140976B08 (_PnpGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  PVOID PoolWithTag; // rsi
  signed int ObjectPropertyKeys; // ebx
  int v11; // edi
  int v12; // ecx
  SIZE_T v13; // rdx
  unsigned __int64 v14; // rbx
  signed int v15; // eax
  unsigned __int64 v17; // rdx
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+C8h] [rbp+48h]

  v21 = 0;
  v20 = 0LL;
  PoolWithTag = 0LL;
  *a6 = 0;
  v18 = 0LL;
  v19 = 0LL;
  ObjectPropertyKeys = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v18);
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_42;
  if ( !(_QWORD)v19 || DWORD1(v18) || HIDWORD(v19) )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_48;
  }
  if ( !a3 || a4 < 0x14 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_39;
  }
  v11 = 0;
  if ( SDWORD2(v18) > 6 )
  {
    switch ( DWORD2(v18) )
    {
      case 0x10001:
        v12 = 7;
        break;
      case 0x10002:
        v12 = 8;
        break;
      case 0x10003:
        v12 = 9;
        break;
      case 0x10004:
        v12 = 10;
        break;
      case 0x10005:
        v12 = 11;
        break;
      default:
        goto LABEL_31;
    }
    v11 = PiDrvDbCtx != 0 ? v12 : 0;
LABEL_31:
    if ( !v11 )
      ObjectPropertyKeys = -1073741811;
    goto LABEL_33;
  }
  switch ( DWORD2(v18) )
  {
    case 6:
      v11 = 6;
      goto LABEL_33;
    case 1:
      v11 = 1;
      goto LABEL_33;
    case 2:
      v11 = 2;
      goto LABEL_33;
    case 3:
      v11 = 4;
      goto LABEL_33;
    case 4:
      v11 = 3;
      goto LABEL_33;
  }
  if ( DWORD2(v18) != 5 )
    goto LABEL_31;
  v11 = 5;
LABEL_33:
  if ( ObjectPropertyKeys < 0 )
  {
LABEL_39:
    v15 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v21, 0, 0LL, 0, v20, a3, a4, a6);
    goto LABEL_40;
  }
  v13 = 0LL;
  if ( a4 - 20 >= 0x14 )
    v13 = a4 - 20;
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)v13;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectPropertyKeys = -1073741670;
      goto LABEL_39;
    }
    v17 = v14 / 0x14;
  }
  else
  {
    LODWORD(v17) = 0;
  }
  v21 = v17;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v19, v11, 0);
LABEL_48:
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_39;
  v15 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v21, 0, PoolWithTag, 20 * v21, v20, a3, a4, a6);
LABEL_40:
  ObjectPropertyKeys = v15;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_42:
  PiCMReleaseObjectInputData((__int64)&v18);
  return (unsigned int)ObjectPropertyKeys;
}
