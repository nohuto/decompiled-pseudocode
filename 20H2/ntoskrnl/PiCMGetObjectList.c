/*
 * XREFs of PiCMGetObjectList @ 0x1406EC3CC
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnBufferResultData @ 0x14063F9B4 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1406EC59C (PiCMReleaseObjectInputData.c)
 *     _PnpGetObjectList @ 0x1406EC5D0 (_PnpGetObjectList.c)
 *     PiCMCaptureObjectInputData @ 0x1406EC7D8 (PiCMCaptureObjectInputData.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectList(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID PoolWithTag; // rsi
  signed int ObjectList; // ebx
  int v11; // r8d
  int v12; // ecx
  int v13; // r9d
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  signed int v17; // eax
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  v21 = 0LL;
  PoolWithTag = 0LL;
  *v6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  ObjectList = PiCMCaptureObjectInputData(a1, a2, a5, &v19);
  if ( ObjectList < 0 )
    goto LABEL_23;
  if ( (_QWORD)v20 || __PAIR64__(DWORD2(v20), 0) != DWORD1(v19) || HIDWORD(v20) )
  {
    ObjectList = -1073741811;
    goto LABEL_19;
  }
  if ( !a3 || a4 < 0x14 )
  {
LABEL_46:
    ObjectList = -1073741811;
    goto LABEL_25;
  }
  v12 = DWORD2(v19);
  v13 = 1;
  v14 = 0;
  if ( SDWORD2(v19) <= 6 )
  {
    if ( DWORD2(v19) == 6 )
    {
      v14 = 6;
      goto LABEL_12;
    }
    v12 = DWORD2(v19) - 1;
    if ( DWORD2(v19) == 1 )
    {
      v14 = 1;
      ObjectList = -1073741637;
      goto LABEL_12;
    }
    v12 = DWORD2(v19) - 2;
    if ( DWORD2(v19) == 2 )
    {
      v14 = 2;
      goto LABEL_12;
    }
    v12 = DWORD2(v19) - 3;
    if ( DWORD2(v19) == 3 )
    {
      v14 = 4;
      goto LABEL_12;
    }
    v12 = DWORD2(v19) - 4;
    if ( DWORD2(v19) == 4 )
    {
      v14 = 3;
      goto LABEL_12;
    }
    if ( DWORD2(v19) == 5 )
    {
      v14 = 5;
      goto LABEL_12;
    }
  }
  else
  {
    switch ( DWORD2(v19) )
    {
      case 0x10001:
        v12 = 7;
LABEL_10:
        v14 = PiDrvDbCtx != 0 ? v12 : 0;
        goto LABEL_11;
      case 0x10002:
        v12 = 8;
        goto LABEL_10;
      case 0x10003:
        v12 = 9;
        goto LABEL_10;
    }
    v12 = DWORD2(v19) - 65540;
    if ( DWORD2(v19) == 65540 )
    {
      v12 = 10;
      goto LABEL_10;
    }
    if ( DWORD2(v19) == 65541 )
    {
      v12 = 11;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( !v14 )
    goto LABEL_46;
LABEL_12:
  if ( ObjectList < 0 )
    goto LABEL_25;
  v15 = 0;
  if ( a4 - 20 >= 2 )
    v15 = a4 - 20;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectList = -1073741670;
      goto LABEL_25;
    }
    v16 = v15 >> 1;
  }
  else
  {
    v16 = 0;
  }
  LODWORD(a6) = v16;
  ObjectList = PnpGetObjectList(v12, v14, v11, v13, (__int64)PoolWithTag, v16, (__int64)&a6, 0);
LABEL_19:
  if ( ObjectList >= 0 )
  {
    v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, PoolWithTag, 2 * (int)a6, v21, a3, a4, v6);
    goto LABEL_21;
  }
LABEL_25:
  v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, 0LL, 0, v21, a3, a4, v6);
LABEL_21:
  ObjectList = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  PiCMReleaseObjectInputData(&v19);
  return (unsigned int)ObjectList;
}
