/*
 * XREFs of ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@PEAPEAV1@@Z @ 0x1C00283F8
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0027D94 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

NTSTATUS __fastcall CActivationObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4,
        HWND a5,
        unsigned __int64 a6,
        struct _LUID *a7,
        struct CActivationObject **a8)
{
  NTSTATUS result; // eax
  __int64 v9; // rcx
  NTSTATUS Object; // ebx
  __int64 v11; // rdx
  struct _LUID Luid; // [rsp+50h] [rbp-10h] BYREF

  Luid = 0LL;
  *a8 = 0LL;
  result = ZwAllocateLocallyUniqueId(&Luid);
  if ( result >= 0 )
  {
    LOBYTE(v9) = 1;
    Object = ObCreateObject(v9, ExActivationObjectType, 0LL);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x60uLL);
      MEMORY[0] = gSessionId;
      MEMORY[0x30] = PsGetCurrentProcess(0LL, v11);
      MEMORY[0x38] = KeGetCurrentThread();
      MEMORY[4] = 0;
      MEMORY[0x50] = 1;
      Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, 0LL);
      if ( Object >= 0 )
      {
        RIMLockExclusive(&qword_1C02504D0);
        MEMORY[0x48] = a6;
        MEMORY[0x58] = a5;
        MEMORY[0x40] = Luid;
        MEMORY[0x28] = 32LL;
        MEMORY[0x20] = 32LL;
        *a7 = Luid;
        qword_1C02504D8 = 0LL;
        *a8 = 0LL;
        ExReleasePushLockExclusiveEx(&qword_1C02504D0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    return Object;
  }
  return result;
}
