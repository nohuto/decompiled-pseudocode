/*
 * XREFs of ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x1C007D9C0
 * Callers:
 *     ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C007C030 (-ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z @ 0x1C0080CCC (-Create@CDWMBackchannelManager@@SAJPEAU_KEVENT@@PEAPEAV1@@Z.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C0161E20 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipManager::Initialize(CFlipManager *this, void *a2)
{
  signed __int32 v3; // eax
  PVOID v4; // r12
  struct _KEVENT *v5; // r14
  PVOID v6; // r13
  struct CDWMBackchannelManager *v7; // rsi
  PVOID v8; // r15
  NTSTATUS v9; // edi
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  HANDLE v12; // rdi
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  __int128 QuadPart; // rax
  struct DXGGLOBAL *Global; // rax
  HANDLE v19; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  PVOID v21; // [rsp+40h] [rbp-39h] BYREF
  PVOID v22; // [rsp+48h] [rbp-31h] BYREF
  PVOID v23; // [rsp+50h] [rbp-29h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  struct CDWMBackchannelManager *v26; // [rsp+E0h] [rbp+67h] BYREF
  HANDLE v27; // [rsp+E8h] [rbp+6Fh]
  void *EventHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  v27 = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 29) = 1LL;
  *((_QWORD *)this + 30) = 1LL;
  *((_QWORD *)this + 31) = 1LL;
  *((_QWORD *)this + 33) = 1LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  v3 = _InterlockedExchangeAdd(&CFlipManager::s_nextFlipManagerTracingId, 1u);
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 82) = v3 + 1;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  v4 = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  v5 = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  v6 = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  v7 = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v8 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v19 = 0LL;
  *((_QWORD *)this + 27) = (char *)this + 208;
  *((_QWORD *)this + 26) = (char *)this + 208;
  v9 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v9 >= 0 )
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v4 = Object;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v9 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v9 >= 0 )
      {
        v21 = 0LL;
        v11 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v21, 0LL);
        v5 = (struct _KEVENT *)v21;
        v9 = v11;
        if ( v11 >= 0 )
        {
          v12 = v27;
          if ( !v27
            || (SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType(),
                v22 = 0LL,
                v14 = ObReferenceObjectByHandle(v12, 0x1F0000u, SharedSyncObjectType, 1, &v22, 0LL),
                v6 = v22,
                v9 = v14,
                v14 >= 0) )
          {
            v9 = CDWMBackchannelManager::Create(v5, &v26);
            if ( v9 < 0
              || (v9 = ZwCreateEvent(&v19, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0), v9 < 0)
              || (v23 = 0LL,
                  v15 = ObReferenceObjectByHandle(v19, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v23, 0LL),
                  v8 = v23,
                  v9 = v15,
                  v15 < 0) )
            {
              v7 = v26;
            }
            else
            {
              *((_QWORD *)this + 36) = v4;
              *((_QWORD *)this + 37) = v5;
              v4 = 0LL;
              *((_QWORD *)this + 38) = v6;
              v5 = 0LL;
              v6 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              QuadPart = PerformanceFrequency.QuadPart;
              *((_QWORD *)this + 40) = v8;
              v8 = 0LL;
              *((_QWORD *)this + 39) = QuadPart / 2;
              *((_QWORD *)this + 28) = v26;
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v7 )
    (**(void (__fastcall ***)(struct CDWMBackchannelManager *, __int64))v7)(v7, 1LL);
  if ( v19 )
    ZwClose(v19);
  if ( v8 )
    ObfDereferenceObject(v8);
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38073) + 288LL))(*((unsigned int *)this + 82));
  return (unsigned int)v9;
}
