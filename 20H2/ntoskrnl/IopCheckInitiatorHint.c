/*
 * XREFs of IopCheckInitiatorHint @ 0x1403642C0
 * Callers:
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x140330FD0 (IoGetInitiatorProcess.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *Teb; // rbx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // r9
  __int64 v9; // r9
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v6 = Teb[251];
    v7 = v6;
    Object = 0LL;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v6 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      v14 = 0LL;
      LOBYTE(v8) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 32LL, v8, &v14, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v14 + 8) = Object;
          if ( (v7 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0LL, v9);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
