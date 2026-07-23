/*
 * XREFs of IopCheckInitiatorHint @ 0x1402722F0
 * Callers:
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 * Callees:
 *     IoGetInitiatorProcess @ 0x140251590 (IoGetInitiatorProcess.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402F7040 (IopSetFileObjectExtensionFlag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *Teb; // rbx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // r9
  PVOID InitiatorProcess; // rax
  NTSTATUS SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

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
      v13 = 0LL;
      LOBYTE(v8) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1LL, 32LL, v8, &v13, 0LL);
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
          *(_QWORD *)(v13 + 8) = Object;
          if ( (v7 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8LL);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
