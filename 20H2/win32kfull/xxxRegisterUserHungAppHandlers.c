/*
 * XREFs of xxxRegisterUserHungAppHandlers @ 0x1C0242D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterUserHungAppHandlers(__int64 a1, void *a2, __int64 a3)
{
  __int64 CurrentProcessWin32Process; // rsi
  _QWORD *v6; // rbx
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  int ProcessInformation; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  ProcessInformation = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 360) )
    return 0LL;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessWx86Information, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  if ( !ProcessInformation )
    return 0LL;
  v6 = (_QWORD *)Win32AllocPoolWithQuotaZInit(72LL, 1886876501LL);
  if ( !v6 )
    return 0LL;
  v7 = 1;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a2, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v6[4] = Object;
  if ( v8 < 0 )
  {
    v7 = 0;
    Win32FreePool(v6);
  }
  else
  {
    v6[5] = a2;
    v6[3] = a1;
    *(_QWORD *)(CurrentProcessWin32Process + 360) = v6;
    *v6 = gpwpiFirstWow;
    gpwpiFirstWow = v6;
  }
  return v7;
}
