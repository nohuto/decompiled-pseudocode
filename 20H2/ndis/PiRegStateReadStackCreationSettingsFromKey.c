/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C01287F4
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01289E8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00359C0 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C010C164 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C0128EB8 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C012911C (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(HANDLE KeyHandle, __int64 a2)
{
  _DWORD *v2; // r13
  _DWORD *v3; // r15
  _DWORD *v4; // r12
  unsigned int *v7; // rsi
  NTSTATUS inited; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS FullBuffer; // eax
  NTSTATUS v12; // eax
  PVOID v13; // rax
  int Dword; // eax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  void *v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  BOOLEAN v23; // [rsp+98h] [rbp+48h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (_DWORD *)(a2 + 4);
  v3 = (_DWORD *)(a2 + 16);
  *(_DWORD *)a2 = 0;
  v4 = (_DWORD *)(a2 + 20);
  *(_QWORD *)(a2 + 8) = 0LL;
  P = 0LL;
  v24 = 0;
  v23 = 0;
  v21 = 0LL;
  *(_DWORD *)(a2 + 4) = 0;
  v7 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  DestinationString = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( inited >= 0 )
  {
    FullBuffer = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, (__int64)&v21);
    v7 = (unsigned int *)v21;
    inited = FullBuffer;
    v10 = 0LL;
  }
  if ( inited < 0 )
  {
    if ( inited == -1073741772 )
      inited = v10;
  }
  else
  {
    LOBYTE(v10) = 1;
    inited = SeCaptureSecurityDescriptor((char *)v7 + v7[2], 0LL, 1LL, v10, &P);
    v10 = 0LL;
  }
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    v10 = 0LL;
  }
  if ( inited < 0 )
    goto LABEL_25;
  if ( P )
  {
    v12 = SeUtilSecurityInfoFromSecurityDescriptor(P, &v23, &v24);
    v10 = 0LL;
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_25;
    if ( v23 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v13 = P;
      *(_DWORD *)a2 |= 2u;
      *(_QWORD *)(a2 + 8) = v13;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v9, v2);
  v10 = 0LL;
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto LABEL_25;
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
  }
  v16 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v15, v3);
  v10 = 0LL;
  inited = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073741772 )
      goto LABEL_25;
  }
  else
  {
    *(_DWORD *)a2 |= 4u;
  }
  v18 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v17, v4);
  v10 = 0LL;
  inited = v18;
  if ( v18 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)inited;
  }
  if ( v18 == -1073741772 )
    return 0;
LABEL_25:
  v19 = *(void **)(a2 + 8);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    v10 = 0LL;
  }
  *(_DWORD *)a2 = v10;
  *(_QWORD *)(a2 + 8) = v10;
  *v2 = v10;
  *v3 = v10;
  *v4 = v10;
  return (unsigned int)inited;
}
