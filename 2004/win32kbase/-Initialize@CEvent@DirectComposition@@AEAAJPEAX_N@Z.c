/*
 * XREFs of ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00A3AEC
 * Callers:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C001DC5C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00A39FC (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CEvent::Initialize(DirectComposition::CEvent *this, void *a2, char a3)
{
  NTSTATUS result; // eax
  PVOID v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, a3 ^ 1, &v5, 0LL);
  *((_QWORD *)this + 1) = v5;
  return result;
}
