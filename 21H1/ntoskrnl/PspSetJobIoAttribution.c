/*
 * XREFs of PspSetJobIoAttribution @ 0x140675754
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405CD768 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402DAC50 (IoStartDiskIoAttributionForContext.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x1406756F4 (PspIsSetJobIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x140675F3C (IoDiskIoAttributionAllocate.c)
 *     PspRemoveIoAttribution @ 0x140675FF0 (PspRemoveIoAttribution.c)
 */

__int64 __fastcall PspSetJobIoAttribution(_QWORD *Object, __int64 a2, char a3, unsigned int a4)
{
  char v4; // r15
  char v7; // r12
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  const EVENT_DESCRIPTOR *v14; // rbx
  REGHANDLE v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v24 = 0LL;
  v7 = a2;
  *(_OWORD *)v23 = 0LL;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v17 = *((_DWORD *)Object + 336);
    if ( v17 < a4 )
    {
      v12 = 0LL;
      v13 = -1073741811;
      goto LABEL_14;
    }
    v18 = v17 - a4;
    *((_DWORD *)Object + 336) = v18;
    if ( v18 )
    {
      v12 = Object[169];
    }
    else
    {
LABEL_22:
      v19 = *((_DWORD *)Object + 337);
      v12 = Object[169];
      if ( v19 > a4 )
      {
        *((_DWORD *)Object + 337) = v19 - a4;
      }
      else
      {
        PspRemoveIoAttribution(Object);
        *((_DWORD *)Object + 337) = 0;
      }
    }
    goto LABEL_11;
  }
  if ( PspIsSetJobIoAttribution(Object, a2, 0) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v9 = *((_DWORD *)Object + 336);
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( v9 )
    {
      *((_DWORD *)Object + 336) = v9 + a4;
LABEL_26:
      v12 = Object[169];
      goto LABEL_11;
    }
    *((_DWORD *)Object + 336) = a4;
    v4 = 1;
  }
  v10 = *((_DWORD *)Object + 337);
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v13 = -1073741670;
    goto LABEL_12;
  }
  if ( v10 )
  {
    *((_DWORD *)Object + 337) = v10 + a4;
    goto LABEL_26;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(Object, 0LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v23[0] = v12;
    LOBYTE(v24) = 1;
    v23[1] = (__int64)Object;
    PspEnumJobsAndProcessesInJobHierarchy(
      Object,
      (int)PspSetJobIoAttributionJobPreCallback,
      0,
      (int)PspSetJobIoAttributionProcessCallback,
      (__int64)v23,
      5);
    *((_DWORD *)Object + 337) = a4;
    Object[169] = v12;
LABEL_11:
    v4 = 0;
    v13 = 0;
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = -1073741801;
LABEL_12:
  if ( v4 )
    *((_DWORD *)Object + 336) -= a4;
LABEL_14:
  v20 = *((_DWORD *)Object + 309);
  v14 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  v22 = v12;
  v15 = EtwpPsProvRegHandle;
  if ( !v7 )
    v14 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
  {
    UserData.Reserved = 0;
    v28 = 0;
    v31 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v26 = &v22;
    v30 = 4;
    v29 = &v21;
    v27 = 8;
    EtwWrite(v15, v14, 0LL, 3u, &UserData);
  }
  return v13;
}
