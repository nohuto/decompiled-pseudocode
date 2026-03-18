/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00A39FC
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00A2B44 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00A3AEC (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *v4; // rax
  DirectComposition::CEvent *v5; // rbx
  unsigned int v6; // edx
  NTSTATUS v7; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+88h] [rbp+28h] BYREF

  if ( a2 )
    v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  else
    v4 = (DirectComposition::CEvent *)Win32AllocPoolZInit(0x10uLL, 1986347844LL);
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
      DirectComposition::CEvent::`scalar deleting destructor'(v5, v6);
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
