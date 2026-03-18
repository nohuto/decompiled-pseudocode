/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00B65B0
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00B77A0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00B66A0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v4; // rax
  DirectComposition::CEvent *v5; // rbx
  __int64 v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // r8
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+28h] BYREF

  if ( a2 )
    v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  else
    v4 = (DirectComposition::CEvent *)Win32AllocPoolZInit(0x10uLL, 0x76654344u);
  v5 = v4;
  if ( v4 )
  {
    EventHandle = 0LL;
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v7 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 < 0
      || (v7 = DirectComposition::CEvent::Initialize(v5, EventHandle, 1), ObCloseHandle(EventHandle, 0), v7 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'(v5, v6, v8);
    }
    else
    {
      *a3 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
