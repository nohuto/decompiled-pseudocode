/*
 * XREFs of ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C006B534
 * Callers:
 *     ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C006A730 (-ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x1C006D6FC (-Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CFlipManager::Initialize(CFlipManager *this)
{
  PVOID v2; // r15
  PVOID v3; // r14
  struct CDWMBackchannelManager *v4; // rsi
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  PVOID v9; // [rsp+30h] [rbp-40h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  struct CDWMBackchannelManager *v12; // [rsp+B0h] [rbp+40h] BYREF
  void *EventHandle; // [rsp+B8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+50h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+58h] BYREF

  *((_BYTE *)this + 32) |= 1u;
  *((_QWORD *)this + 22) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v2 = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v3 = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v4 = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 23) = 1LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v2 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v5 >= 0 )
      {
        v9 = 0LL;
        v7 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v9, 0LL);
        v3 = v9;
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = CDWMBackchannelManager::Create((struct _KEVENT *)v9, &v12);
          if ( v5 < 0 )
          {
            v4 = v12;
          }
          else
          {
            *((_QWORD *)this + 26) = v2;
            *((_QWORD *)this + 27) = v3;
            v2 = 0LL;
            v3 = 0LL;
            PerformanceFrequency.QuadPart = 0LL;
            KeQueryPerformanceCounter(&PerformanceFrequency);
            *((_QWORD *)this + 29) = PerformanceFrequency.QuadPart / 2;
            *((_QWORD *)this + 21) = v12;
          }
        }
      }
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    (**(void (__fastcall ***)(struct CDWMBackchannelManager *, __int64))v4)(v4, 1LL);
  return (unsigned int)v5;
}
