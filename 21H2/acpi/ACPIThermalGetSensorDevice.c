/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C0001EF0
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000575C (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // rcx
  int v8; // eax
  void **v9; // r15
  int v10; // eax
  PVOID Object; // [rsp+60h] [rbp-A0h]
  ULONG BufferLength; // [rsp+68h] [rbp-98h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  void *FileHandle; // [rsp+78h] [rbp-88h]
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h]
  _OWORD v19[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v20[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v21; // [rsp+120h] [rbp+20h]
  __int128 v22; // [rsp+128h] [rbp+28h] BYREF
  __int128 v23; // [rsp+138h] [rbp+38h]
  __int128 v24; // [rsp+148h] [rbp+48h]

  v1 = a1[25];
  P[0] = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  v13 = 0LL;
  BufferLength = 0;
  P[1] = a1;
  v3 = a1[95];
  DestinationString = 0LL;
  *(_QWORD *)&v24 = 0LL;
  v22 = 0LL;
  DWORD2(v24) = 0;
  v23 = 0LL;
  v19[1] = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v4 = AMLIGetNamedChild(v3, 1314083935LL);
  v16 = v4;
  if ( v4 )
  {
    v8 = AMLIEvalNameSpaceObject(v4, v20, 0LL, 0LL);
    v9 = (void **)v20;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      v5 = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_4;
    }
    v22 = 0LL;
    v7 = a1[95];
    v23 = 0LL;
    v24 = 0LL;
    v19[0] = THRM_EXTENSIONS_DSM_UUID;
    v8 = ACPIAmliEvaluateDsm(v7, (unsigned int)v19, 0, 2, (__int64)&v22, (__int64)P);
    v9 = (void **)P[0];
  }
  v5 = v8;
  if ( v8 >= 0 )
  {
    if ( *((_WORD *)v9 + 1) == 2 )
    {
      v10 = AMLIGetNameSpaceObject(v9[4]);
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      v5 = v10;
      FreeDataBuffs(v9, 1LL);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      v5 = -1072431095;
      FreeDataBuffs(v9, 1LL);
    }
  }
  if ( v16 )
    AMLIDereferenceHandleEx();
  if ( v13 )
    AMLIDereferenceHandleEx();
LABEL_4:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x52706341u);
  return (unsigned int)v5;
}
