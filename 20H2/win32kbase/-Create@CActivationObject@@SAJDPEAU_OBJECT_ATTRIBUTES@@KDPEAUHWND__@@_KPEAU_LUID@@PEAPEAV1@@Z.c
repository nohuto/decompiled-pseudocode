/*
 * XREFs of ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@PEAPEAV1@@Z @ 0x1C0092098
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0091A34 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     memset @ 0x1C00D3740 (memset.c)
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
  struct CActivationObject **v8; // rdi
  NTSTATUS result; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  NTSTATUS inserted; // ebx
  PVOID v13; // rcx
  __int64 v14; // rdx
  __int64 CurrentProcess; // rax
  _QWORD *v16; // r8
  struct _LUID v17; // rax
  struct _LUID *v18; // rdx
  struct _LUID Luid; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  v8 = a8;
  Object = 0LL;
  Luid = 0LL;
  *a8 = 0LL;
  result = ZwAllocateLocallyUniqueId(&Luid);
  if ( result >= 0 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v10) = 1;
    inserted = ObCreateObject(v10, ExActivationObjectType, 0LL, v11, 0LL, 96, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      memset(Object, 0, 0x60uLL);
      v13 = Object;
      *(_DWORD *)Object = gSessionId;
      CurrentProcess = PsGetCurrentProcess(v13, v14);
      *((_QWORD *)Object + 6) = CurrentProcess;
      *((_QWORD *)Object + 7) = KeGetCurrentThread();
      *((_BYTE *)Object + 4) = 0;
      *((_DWORD *)Object + 20) = 1;
      inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        RIMLockExclusive((__int64)&qword_1C024E4D0);
        v16 = Object;
        v17 = Luid;
        *((_QWORD *)Object + 9) = a6;
        v16[11] = a5;
        v18 = a7;
        v16[8] = v17;
        v16[5] = v16 + 4;
        v16[4] = v16 + 4;
        *v18 = Luid;
        qword_1C024E4D8 = 0LL;
        *v8 = (struct CActivationObject *)Object;
        ExReleasePushLockExclusiveEx(&qword_1C024E4D0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    return inserted;
  }
  return result;
}
